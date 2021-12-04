#include <iostream>
#include <iostream>

using namespace std;

string s;
string toBinary(int n){
    if
        (n == 0) return s;
    s = char(n % 2 + 48) + s;
    return toBinary(n/2);
}
int main(){
    int n;
    cin >> n; 
    toBinary(n);
    cout << s;
    return 0;
}