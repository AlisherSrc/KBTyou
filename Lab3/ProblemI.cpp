#include <iostream>

using namespace std;

int main(){
    int n,l,r;
    cin >> n >> l >> r;
    int array[n];
    for(int i = 0; i<n ; i++){
        cin >> array[n];
    }
    for(int i = 0;(l-1) <=i && i <= (r-1);i++){
        array[l-1 + i] = array[r-1 - i];
        array[r-1 - i] = array[l-1 + i]; 
    }
    for(int i = 0;i<n;i++){
        cout << array[i] << " ";
    }
    return 0;
}