#include <iostream>

using namespace std;
//recursion takes more time!!!
int degree(int number){
    if(number == 0){ // Простейший(меньше всех) случай
        return 1; 
    }else{
        return degree(number - 1) * 2; // Works how shells
    }
}

int main(){
    int n;
    cin >> n;
    cout << degree(n);
}