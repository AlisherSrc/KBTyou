#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int array[n][n];
    array[0][0]=0;
    for(int i = 1;i < n;i++){
        array[0][i] = i;
    }
    for(int j = 1;j < n;j++){
        array[j][0] = j;
    }
    for(int i = 0;i < n;i++){
        for(int j = 0; j < n; j++){
           if(j != 0 && i != 0){
               array[i][j] = i*j;
           }
           cout << array[i][j] << " ";
        }
        cout << endl;
    }
    /*

    */
}