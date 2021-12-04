#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    // int n;
    // cin >> n;
    //int ar[n];
    // for(int i = 0;i < n;i++){ // i = 0; 0 < 3 True -> Doing our instuctions
    //     cin >> ar[i];  
    // }

    // sort(ar.begin(), ar.end());


    // for(int i = 0;i < n;i++){ // i = 0; 0 < 3 True -> Doing our instuctions
    //     cout << ar[i] << " "; // i = 0 +1,  
    // }
    // vector<int> v;
    // while(1 == 1){
    //     int x;
    //     cin >> x;
    //     if(x != 0){
    //         v.push_back(x);
    //     }else if(x == 0){
    //         break;
    //     }
    // }
    // for(int i = 0;i < v.size();i++){
    //     cout << v[i] << " ";
    // }    
    int n; 
    cin >> n;
    vector<int> v;

    int x;
    for(int i = 0;i < n;i++){ // i = 0; 0 < 3 True -> Doing our instuctions
        cin >> x;
        v.push_back(x);  
    }
    int a,b;
    cin >> a >> b;
    // 1, 2, 5, 3, 5, 5, 10 ----->>> to the set()
    //in the set: 1, 2, 3, 5, 10

    // 5
    // 9 -1 2 8 6
    // 1 3
    reverse(v.begin() + a, v.begin() +b + 1 ); // (0 + 1, 0 + 3 + 1) = (0 , 4) 4 is not included so it is generally elements between (0 , 3) 

    for(int i = 0;i < n;i++){ // i = 0; 0 < 3 True -> Doing our instuctions
        cout << v[i] << " "; // i = 0 +1,  
    }
    return 0;
}