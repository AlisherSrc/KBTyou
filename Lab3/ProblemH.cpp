#include <iostream>

using namespace std;

int main(){
    int n, l, r, sum;
    cin >> n >> l >> r;
    int array[n];
    for(int i = 0;i < n;i++){
        cin >> array[i];
    }
    sum = 0;

    for(int i = 0;i < n;i++){
        if((l-1) <= i && i<= (r-1)){
            sum+=array[i];
        }
    }
    cout << sum;
    return 0;
}