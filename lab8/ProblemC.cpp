#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> v;
    int x;
    for(int i = 0;i < N;i++){
        cin >> x;
        v.push_back(x);
    }
    int a,b;
    cin >> a >> b;
    reverse(v.begin() + a, v.begin() + b+1);

    for(int i = 0;i < N;i++){
        cout << v[i] << " ";
    }
    return 0;
}