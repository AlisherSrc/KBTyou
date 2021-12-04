#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;

    int x;
    while(n--){
        cin >> x;
        v.push_back(x); 
    }    
    int k;
    cin >> k;
    sort(v.begin(), v.end());
    
    return 0;
}