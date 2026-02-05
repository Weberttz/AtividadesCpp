#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "../include/jogo.h"

using namespace std;

Celula tabuleiro[tam][tam];
Partida partida;

void setarTabuleiro(){
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            tabuleiro[i][j].valor = 0;
            tabuleiro[i][j].impressao = ' ';
        }
    }
}

void imprimirTabuleiro(){
    int limite = 7, contador = 0;
    string strf = "+---+---+---+";
    string strp = "| ";
     for(int i=0; i<limite;i++){
        if(i%2 == 0){
            cout << strf << endl;
            contador++;
        }  
        else{
            for(int j = 0; j<tam; j++){
                if(tabuleiro[i-contador][j].impressao == 'x')
                    cout << "\033[0m" << strp << "\033[1;34m" << tabuleiro[i-contador][j].impressao << " ";
                else
                    cout << "\033[0m" << strp << "\033[1;31m" << tabuleiro[i-contador][j].impressao << " ";
            }
            cout << "\033[0m|" << endl;
        }
    }   
}

void mudarVez(){
    if(partida.vez == 1)
        partida.vez = 2;
    else
        partida.vez = 1;
}

void novaPartida(){
    setarTabuleiro();
    partida.fim = 0, partida.vez = 1, partida.rodada = 1;
    partida.velha = 0;

    do{ 
        realizarPalpite();
        if(verificarFim()){
            partida.fim = 1;
            
            if(!partida.velha){
                for(int i=0; i<tam; i++){
                    if(tabuleiro[i][i].valor == partida.vez)
                        partida.vencedor = tabuleiro[i][i].impressao;
                }
            }
        }
        mudarVez();  
        partida.rodada++;
    }while(!partida.fim);

    Clear();
    imprimirTabuleiro();
}

void realizarPalpite(){
    int linha = 0, coluna = 0, feito = 0;

    do{
        Clear();
        imprimirTabuleiro();
        if(partida.vez == 1)
            cout << "\nJogador \33[34mx\33[0m realize seu palpite: " << endl;
        else   
            cout << "\nJogador \33[31mo\33[0m realize seu palpite: " << endl;

        cout << "Digite a linha que deseja escrever(1-3): ";
        cin >> linha;
        cout << "Digite a coluna que deseja escrever(1-3): ";
        cin >> coluna;

        linha-=1, coluna-=1;

        if(!verificarPertence(linha, coluna)){
            cout << "Posicao fora do tabuleiro!" << endl;
            getchar();
            getchar();
            continue;
        }

        if(!verificarVazio(linha, coluna)){
            cout << "A posicao que voce escolheu nao esta vazia. Tente outra posicao!" << endl;
            getchar();
            getchar();
            continue;
        }
            
        feito = 1;
        
    }while(!feito);

    if(partida.vez == 1){
        tabuleiro[linha][coluna].impressao = 'x';
        tabuleiro[linha][coluna].valor = 1;
    }else{
        tabuleiro[linha][coluna].impressao = 'o';
        tabuleiro[linha][coluna].valor = 2;
    }

}

int verificarPertence(int linha, int coluna){
    if(linha < 0 || linha > tam-1)
        return 0;
    
    if(coluna < 0 || coluna > tam-1)
        return 0;
    
    return 1;
}

int verificarVazio(int linha, int coluna){
    if(tabuleiro[linha][coluna].valor == 0)
        return 1;

    return 0;
}

int verificarFim(){
    int contador;

    //Verificação das Linhas
    for(int i=0; i<tam; i++){
        contador = 0;
        for(int j=0; j<tam; j++){
            if(tabuleiro[i][0].valor == tabuleiro[i][j].valor && tabuleiro[i][j].valor != 0)
                contador++;
            else
                break;
        }
        if(contador == tam)
            return 1;
    }

    //Verificação das Colunas
    for(int i=0; i<tam; i++){
        contador = 0;
        for(int j=0; j<tam; j++){
            if(tabuleiro[0][i].valor == tabuleiro[j][i].valor && tabuleiro[j][i].valor != 0)
                contador++;
            else
                break;
        }
        if(contador == tam)
            return 1;
    }

    contador = 0;
    //Verificação da Diagonal Principal
    for(int i=0; i<tam; i++){
        if(tabuleiro[0][0].valor == tabuleiro[i][i].valor && tabuleiro[i][i].valor != 0)
            contador++;
        else
            break;

        if(contador == tam)
            return 1;
    }
    
    contador = 0;
    //Verificação da Diagonal Secundária
    for(int i=0; i<tam; i++){
        if(tabuleiro[0][2].valor == tabuleiro[i][2-i].valor && tabuleiro[i][2-i].valor != 0)
            contador++;
        else
            break;

        if(contador == tam)
            return 1;
    }

    if(partida.rodada == tam * tam){
        partida.velha = 1;
        return 1;
    }

    return 0;
}

void Menu(){
    cout << "Bem vindo ao jogo da velha!" << endl;
    cout << "[1] Iniciar Partida" << endl;
    cout << "[2] Instrucoes" << endl;
    cout << "[0] Sair" << endl;
    cout << "Escolha uma opcao: ";
}

void Instrucoes(){
    ifstream arquivo("../../data/instrucoes.txt");
    string linha;

    Clear();

    if(arquivo.is_open()){
        while(getline(arquivo, linha)){
            cout << linha << endl;
        }
        arquivo.close();
    }else{
        cout << "Erro ao abrir o arquivo";
    }

    cout << "\nPressione enter para voltar ao menu..." << endl;
    getchar();
    getchar();
}

void Clear(){
    system("clear");
}

int main(){
    int opc, continuar = 1;

    while(continuar == 1){
        do{
            Clear();
            Menu();
            cin >> opc;
        }while(opc < 0 || opc > 2);

        switch(opc){
            case 1:
                novaPartida();
            break;
            case 2:
                Instrucoes();
            break;
            case 0:
                continuar = 0;
                system("exit");
            break;
        }

        if(opc == 1){
            do{
                Clear();
                imprimirTabuleiro();
                if(!partida.velha)
                    cout << "\nO jogador vencedor: " << partida.vencedor<< endl;
                else
                    cout << "Deu velha!!!" << endl;

                cout << "\nDeseja continuar?\n[1]Sim\n[0]Nao\nDigite a opcao:";
                cin >> continuar;
            }while(continuar != 0 && continuar!= 1);
        }
    }
    
    return 0;
}