#include <iostream>

using namespace std;

int main(){
    int a = 42;
    int n = 25;
    for(int i = 0;i < 100;i++){
        if(((a*i) % n) == 1){
            cout << i;
            break;
        }else if(i == 99){
            cout << "No such number";
        }else continue;
    }
}