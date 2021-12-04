#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    set<int> s;
    int x;
    //x = s.begin();
    set<int>::iterator it;
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> x;
        //cin >> s[1];
        s.insert(x); // cin >> s[it];
    }
    for(it = s.begin();it != s.end();it++){
        cout << *it << " "; 
    }
    return 0;
}