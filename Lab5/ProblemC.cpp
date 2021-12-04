#include <iostream>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int yorn = s.find(t); 
    if(yorn == string::npos){
        cout << "NO";
    }else
        cout << "YES";
    return 0;
}