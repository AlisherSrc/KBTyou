#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size();i++ ){
        if(97 <= (int)s[i] && (int)s[i] <= 122){
            int ascii = (int)s[i] - 32;
            s[i] = (char)ascii;
        }
    }
    cout << s;
    return 0;
}