#include <stdio.h>

int main(){
    double pi, sub = 0, soma = 0;

    for(int i = 3; i<10000000; i+=4){
        sub += 1.0/i;
        soma += 1.0/(i-2);
    }

    pi = soma - sub;
    pi*=4;

    printf("%.10f", pi);

}