#include <iostream>
//https://neps.academy/br/exercise/52

void apertouI1(int *lampada){
    (*lampada == 0)?*lampada = 1: *lampada = 0;
}

void apertouI2(int *lampadaA, int *lampadaB){
    (*lampadaA == 0)? *lampadaA = 1: *lampadaA = 0;
    (*lampadaB == 0)? *lampadaB = 1: *lampadaB = 0;
}

int main(){
    int lampadaA = 0, lampadaB = 0;
    int N, interruptor;
    std::cin >> N;

    for(int i=0; i<N; i++){
        std::cin >> interruptor;

        if(interruptor == 1) apertouI1(&lampadaA);
        else apertouI2(&lampadaA, &lampadaB);
    }

    std::cout << lampadaA << std::endl << lampadaB;
}