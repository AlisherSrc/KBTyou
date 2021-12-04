#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    for(int i = 2;true;i++){
        if(x % i == 0 || i == 1000){
            cout << i;
            break;
        }else{
            continue;
        }
    }
}