#include <iostream>

using namespace std;

int main(){
    int n, numOfSeven;
    cin >> n;
    for(int i = 0 ;i < n ;i++ ){
        int number;
        cin >> number;
        if(((number - 7)% 10) == 0){
            numOfSeven += 1;
        }else
        continue;
    }
    cout << numOfSeven;
    return 0;
}