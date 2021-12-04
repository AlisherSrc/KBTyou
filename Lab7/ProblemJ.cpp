#include <iostream>

using namespace std;

int cnt = 0;

int sumofAlmat(int n){
    if(n == 0) return 0;
    else return (n%10)/2 + sumofAlmat(n/10);
}

int main(){
    int n;
    cin >> n;
    cout << sumofAlmat(n);
    return 0;
}