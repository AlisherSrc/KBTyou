// let's do this through a string

#include <iostream>
using namespace std;

string yesorno(int x,int arraysize,int a[]){ // x = 1, arraysize = 5, a[1,2,3,4,5]
    
    if(a[arraysize - 1] == x){ // 5 != 1 
        return "Yes";
    }else if((a[arraysize - 1] != x) ^ (arraysize - 1) == 0){ 
        return yesorno(x,arraysize - 1,a); //  |
    }else return "No";                               //  |
                                    //  |
                                    //  V
/*
string yesorno(int x,int arraysize,int a[]){ // x = 7, arraysize = 5, a[1,2,3,4,5]
    
    if(a[arraysize - 1] == x){ // 5 != 1 
        return "Yes";
    }else{ 
        yesorno(x,arraysize - 1,a); //  |
    }                     

string yesorno(int x,int arraysize,int a[]){ // x = 7, arraysize = 4, a[1,2,3,4,5]
    
    if(a[arraysize - 1] == x){ // 4 != 1 
        return "Yes";
    }else{ 
        yesorno(x,arraysize - 1,a); //  |
    } 

string yesorno(int x,int arraysize,int a[]){ // x = 1, arraysize = 3, a[1,2,3,4,5]
    
    if(a[arraysize - 1] == x){ // 3 != 1 
        return "Yes";
    }else{ 
        yesorno(x,arraysize - 1,a); //  |
    }  

string yesorno(int x,int arraysize,int a[]){ // x = 1, arraysize = 2, a[1,2,3,4,5]
    
    if(a[arraysize - 1] == x){ // 3 != 1 
        return "Yes";
    }else{ 
        return yesorno(x,arraysize - 1,a); //  |
    } 

string yesorno(int x,int arraysize,int a[]){ // x = 1, arraysize = 1, a[1,2,3,4,5]
    
    if(a[arraysize - 1] == x){ // 3 != 1 
        return "Yes";
    }else{ 
        yesorno(x,arraysize - 1,a); //  |
    }                 
*/
}
int main() {
    int n;
    cin >> n;
    int array[n];
    for(int i = 0;i < n;i++){
        cin >> array[i];
    }
    int x;
    cin >> x;
    cout << yesorno(x,n,array);
    return 0;
}

