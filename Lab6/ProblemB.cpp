#include <iostream>
#include <cmath>

using namespace std;

void minusArray(int size, int first[], int sec[], int newA[]){
    for(int i = 0;i < size;i++){
        newA[i] = abs(first[i] - sec[i]);
    }
}

int main(){
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    int d[n];
    minusArray(n,a,b,d);
    for(int i = 0;i < n; i++){
        cout << d[i] << " ";
    }
  
    return 0;
}