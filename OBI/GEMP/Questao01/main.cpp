#include <iostream>
#include <vector>

using namespace std;

int main(){

    int length, queries, init, end, sum = 0;

    cin >> length >> queries;

    vector<int> numbers(length), range;

    for(int i=0; i<length; i++)
        cin >> numbers[i];

    for(int i=0; i<queries; i++){
        cin >> init >> end;
        init--; 
        end--;
        range.push_back(init);
        range.push_back(end);
    }

    int aux = 0;
    for(int i=0; i<queries; i++){
        sum = 0;
        for(int j=range[aux]; j<=range[aux+1]; j++)
            sum += numbers[j];

        aux+=2;
        cout << sum << endl;
    }

    return 0;
}