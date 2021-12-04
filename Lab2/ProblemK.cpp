#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N, square = 1;
    cin >> N; 
    for(int i =1;square <= N; i++){
            square = pow(i,2);
            if(square <= N)
            cout << square << endl;
    }
    return 0;
}