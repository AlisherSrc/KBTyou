#include <iostream>

using namespace std;

int main(){
    int n,a;
    cin >> n;
    int array[n];
    for(int i = 0;i<n;i++){
        cin >> array[i];
    }
    for(int i = n;i > 0 ;i-- ){
        cout << array[i-1] << " ";
    }
    return 0;
}