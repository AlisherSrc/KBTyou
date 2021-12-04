#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string array[n][n];
    for(int i = 0;i < n; i++){
        for(int j = 0; j < n; j++){
            if(i >= j)
                array[i][j] = "[*]";
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0;j < n; j++){
            cout << array[i][j];
        }
        cout << endl;
    }

    return 0;
}