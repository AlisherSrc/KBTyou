#include <iostream>

using namespace std;

int main(){
    int n, input, amountOfZeroes;
    cin >> n;
   for(int i = 0;i < n ;i++ ){
       cin >> input;
        while(input > 9){
            if((input % 10) == 0){
                amountOfZeroes++;
            }
        input /= 10;
        }
    }
    cout << amountOfZeroes;
    return 0;
}