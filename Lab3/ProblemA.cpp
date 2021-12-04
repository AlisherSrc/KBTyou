#include <iostream>

using namespace std;

int main(){
    int n, a; //n - array size, a - numbers
    cin >> n;
    int array[n];
    for(int i = 0;i < n ;i++ ){
        cin >> array[i];
    } 
    for(int i = 0;i < n;i++){
        if(array[i] % 2 != 0){
            cout << array[i] << " ";
        }
    }
    return 0;

}