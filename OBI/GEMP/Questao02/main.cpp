#include <iostream>

using namespace std;

int main(){

    long int length, queries, init, end, sum = 0;

    cin >> length >> queries;

    long int numbers[length], sums[queries];

    for(int i=0; i<length; i++)
        cin >> numbers[i];

    for(int i=0; i<queries; i++){
        cin >> init >> end;
        sum = 0;
        end--;
        for(int j=init; j<=end; j++)
            sum+=numbers[j];
        
        sums[i] = sum;
    }

    for(int i=0; i<queries; i++)
        cout << sums[i] << endl;

    return 0;
}