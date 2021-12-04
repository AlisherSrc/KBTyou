#include <iostream>

using namespace std;

int main(){
    int n, even = 0, odd = 0;
    cin >> n;
    for(int i = 0; i < n ; i++ ){
        int a;
        cin >> a;
        if(((a % 2) == 0) && a != 0){
            even += 1;
        }else if((a%2) != 0){
            odd += 1;
        }else
        continue;
    }
    cout << even << " " << odd;
  
    return 0;
}