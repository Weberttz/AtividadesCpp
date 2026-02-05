#ifndef JOGO_H
#define JOGO_H

#define tam 3

typedef struct{
    int valor;
    char impressao;
}Celula;


typedef struct{
    int fim, vez, rodada, velha;
    char vencedor;
}Partida;

extern Celula tabuleiro[tam][tam];
extern Partida partida;

void setarTabuleiro();

void imprimirTabuleiro();

void novaPartida();

void realizarPalpite();

void mudarVez();

int verificarPertence(int linha, int coluna);

int verificarVazio(int linha, int coluna);

int verificarFim();

void Menu();

void Intrucoes();

void Clear();

#endif




