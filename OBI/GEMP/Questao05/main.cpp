#include <iostream>
#include <vector>

int main(){

    int tests, n, q, begin, end, k, sum;
    std::vector<int> sums;

    std::cin >> tests;

    while(tests){

        std::cin >> n >> q;
        std::vector<int> numbers(n);

        for(int i=0; i<numbers.size(); i++)
            std::cin >> numbers[i];

        for(int i=0; i<q; i++){
            sum = 0;
            std::cin >> begin >> end >> k;
            begin--; 
            end--;
            for(int j=0; j<numbers.size(); j++){
                if(j >= begin && j<=end)
                    sum+= k;
                else
                    sum+= numbers[j];
            }
            sums.push_back(sum);
        }

        tests--;
    }

    for(int i=0; i<sums.size(); i++){
        if(sums[i] % 2 == 1) 
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }


    return 0;
}