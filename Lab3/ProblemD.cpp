#include <iostream>

using namespace std;

int main(){
    int n, position = 1, max;
    cin >> n;
    int array[n];
    for(int i = 0;i < n;i++){
        cin >> array[i];
    }
    max = array[0];
    for(int i = 0;i < n;i++){
        if(array[i] > max){
            max = array[i];
            position = i + 1;
        }
    }
    cout << position;
}