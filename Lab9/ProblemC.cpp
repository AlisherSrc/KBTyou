#include <iostream>
#include <map>

using namespace std;

int main(){
    int n, counter;
    cin >> n;
    int arr[n];
    map<int,int> m;
    map<int,int> :: iterator it = m.begin();
   for(int i = 0;i < n;i++){
        if (!m.insert(pair<int,int>(arr[i], 1)).second){
    counter++;
}
    }
    return 0;
}