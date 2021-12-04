#include <iostream>

using namespace std;

int main(){
    int n, a = 0;
    cin >> n;
    int array[n];
    for(int i = 0;i < n; i++){
        cin >> array[i];
    }
    for(int i = 0;i < n; i++){
        if(array[i] > 0){
            a++;
        }
    }
    cout << a;
    return 0;
}