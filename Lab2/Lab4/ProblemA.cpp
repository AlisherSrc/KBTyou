#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int array[n][n];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin >> array[i][j];
        }
    }
    int max = array[0][0];
    for(int i = 0; i<n;i++){
        for(int j = 0; j < n; j++){
            if(max < array[i][j])
                max = array[i][j];
        }
    }
    cout << max;
    return 0;
}