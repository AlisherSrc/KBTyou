#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int inputNumber;
    cin >> inputNumber;
    bool TrueOrFalse = inputNumber % 2;
    inputNumber = inputNumber / 2;
    bool TrueOrFalse2 = inputNumber % 2;
    inputNumber = inputNumber / 2;
    bool TrueOrFalse3 = inputNumber % 2;
    inputNumber = inputNumber / 2;
    bool TrueOrFalse4 = inputNumber % 2;
    int number1 = pow(2 , 0) * TrueOrFalse4;
    int number2 = pow(2 , 1) * TrueOrFalse3;
    int number3 = pow(2 , 2) * TrueOrFalse2;
    int number4 = pow(2 , 3) * TrueOrFalse;
    cout << number1 + number2 + number3 + number4; 
}