#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    string s;
    int capital = 0, smalll = 0;
    cin >> s;
    for(int i = 0; i < s.size();i++){
        if(65 <= (int)s[i] && (int)s[i] <= 90){
            capital++;
        }else if(97 <= (int)s[i] && (int)s[i] <= 122){
            smalll++;
        }
    }
    cout << smalll << " " << capital;
  
    return 0;
}