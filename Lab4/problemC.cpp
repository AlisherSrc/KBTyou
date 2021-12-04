#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int array[n][m];
    int numOfNeg = 0;

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> array[i][j];
            if(array[i][j] < 0){
                numOfNeg += 1;
            }
        }
    }
    cout << numOfNeg;

    return 0;
}