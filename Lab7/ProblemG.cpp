#include <iostream>

using namespace std;

    int cnt = 1;
    int factorial(int n){
        if(n == 0)
            return 1;
        else
            return factorial(n - 1) * cnt++; 
    }

int main(){
    int n;
    cin >> n;
    cout << factorial(n);

    return 0;
}