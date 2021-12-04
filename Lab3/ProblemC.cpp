#include <iostream>

using namespace std;

int main(){
    int n, max;
    cin >> n;
    int array[n];
    for(int i = 0;i < n;i++){
        cin >> array[i];
    }
    max = array[0];
    for(int i = 0;i < n; i++){
        if(max < array[i]){
            max = array[i];
        }
    }
    cout << max;
    return 0;
}