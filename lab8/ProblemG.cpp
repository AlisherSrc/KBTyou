#include <iostream>
#include <set>

using namespace std;

bool isPrime(int n){
    if(n == 0) return true;
    else return isPrime(n-1) && false;
}

int main(){
    int n;
    cin >> n;
    cout <<  isPrime(n);
    return 0;
}