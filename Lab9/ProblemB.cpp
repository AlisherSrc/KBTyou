#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool wh(int &a,int &b){
    if(a < b) return false;
    else return true;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    vector<int> v1;
    vector<int> v2;
    int x;
    for(int i = 0; i<n;i++){
        if(arr[i] % 2 != 0){
            v1.push_back(arr[i]);
        }else if(arr[i] % 2 == 0){
            v2.push_back(arr[i]);
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), wh);
    vector<int> :: iterator it; 
     for(int i = 0;i < v2.size();i++){
        cout << v2[i] << " ";
    }
    for(int i = 0;i < v1.size();i++){
        if(i == v1.size() - 1)  cout << v1[i];
        else 
        cout << v1[i] << " ";
    }
    

    return 0;
} 