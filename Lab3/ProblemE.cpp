#include <iostream>

using namespace std;

int main(){
    int n;
    long long a = 0;
    cin >> n;
    int array[n];
    for(int i = 0;i < n;i++){
        cin >> array[i];
    }
    for(int i = 0;i<n;i++){
        a += array[i];
    }
    cout << a;
    return 0;
}