#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    cin >> n >> m; // n - cringe, m - words
    int debt = 0;
    vector<string> v1;
    vector<string> v2;
    string x;
    for(int i = 0;i < n;i++){
        cin >> x;
        v1.push_back(x);
    }

    while(m--){
        cin >> x;
        v2.push_back(x);
    }
    for(int i = 0;i < n;i++){ // 0 < 1
        for(int j = 0;j < m;j++){ // 0 < 3 i - cringe, j - words
            if(v1[i][j] == v2[j][0]){ //v1[0][0](a) == v2[0][0]
                int cnt = 0;
                while(v2[j].size() != cnt){ // 1 != 1
                    if(v1[i][cnt] != v2[j][cnt]){ //v1[0][0](a) != v2[0][0]
                        continue;
                    }else{
                        cnt++; // cnt = 1
                        continue;
                    }
                    
                }
                cout << cnt << " ";
                if(cnt == v1[j].size()){ // 1 == 1
                    debt += 1000;
                }
            }else{ continue;}
            cout << 1 << " "; // cout nothing
        }
        cout << 1 << " "; // cout 1
    }
    cout << debt;
    
    return 0;
}