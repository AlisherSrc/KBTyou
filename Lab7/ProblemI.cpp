#include <iostream>

using namespace std;

int cnt = 0;

int sum(int sumer){
    cin >> sumer;
    if(sumer == 0){
        return cnt;
    }else
        return sum(sumer) + sumer;
}

int main(){
    int s;
    cout << sum(s);
    return 0;
}