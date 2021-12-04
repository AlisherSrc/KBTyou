#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> v;

    long long x;
    while(n--){
        cin >> x;
        if(x == k){
            v.push_back(x);
        }
    }
    cout << v.size();
}