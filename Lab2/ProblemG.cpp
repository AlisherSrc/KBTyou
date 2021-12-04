#include <iostream>

using namespace std;

int main(){
    int n, max;
    cin >> n;
    int a[n];
    for(int i = 0;i < n; i++){
        cin >> a[i];
    }

    if(a[0] > a[1])
            max = a[0];  
        else
            max = a[1];
        

    for(int i = 0;i < n ; i++){
        if(max >= a[i]){
            //cout << "Max is still max " << i << endl;
            continue;
        }else if(max < a[i]){
            max = a[i];
            //cout << "Max is " << a[i] << endl;
        }
    } 
    cout << max;

    return 0;
    }
    /* 
    int a;
    cin >> a;
    int arr[a];
    int sizeOfArray = (sizeof(arr))/(sizeof(arr[0]));
    cout << sizeOfArray; 
    */