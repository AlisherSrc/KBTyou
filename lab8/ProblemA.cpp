#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    int x;
    vector<int> v;
    for(int i = 0;i < N;i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int i = 0;i < N;i++){
       cout << v[i] << " ";
    }
    return 0;
}