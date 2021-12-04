#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float n, k, t;  //n - steaks, k - contains, t -time
    cin >> n >> k;
    if(n <= k){
        cout << 2;
    }else if(n > k){
        n/=1.0;
        k/=1.0;
        t = (n / k)*2; //2 is the amount of minute of cooking 1 steak
        cout << ceil(t);
    }
    return 0;
}