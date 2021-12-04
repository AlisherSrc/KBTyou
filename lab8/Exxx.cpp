#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    // CAUTION! THERE IS A LOT OF NENUJNOGO AND IT IS THE COLHOZEST WAY TO DO THIS TASK
    
    int n;
    cin >> n;
   // arr[2n+1][2n+1];
    deque<char> d;
    //(2n+1 - n)/2 = (n + 1)/2
    int numOfSpace = (n+1)/2;
    int cnt = 0;
    int numOfStars = ((2*n + 1) - numOfSpace * 2);
                      
    while(numOfSpace != 0){
        if(cnt < numOfSpace){
            cout << " " << "  "; 
            cnt++;
            continue;
        }  
        cnt = 0;
        while(cnt < numOfStars){
            cout << '*' << "  ";
            cnt++;
        }
        cnt = 0;
        while(cnt < numOfSpace){
            if(cnt == numOfSpace - 1) cout << " ";
            else cout << " " << "  ";
            cnt++;
        }
        cnt = 0;
        numOfSpace--;
        numOfStars+=2;
        cout << endl;
    };
                      
    for(int i = 0;i < n;i++ ){
        for(int j = 0;j < 2*n+1;j++){
            if(j == n-1)cout << '*' << "  ";
            else cout << '*'<< "  ";
        }
        cout << endl;
    }
    numOfStars =  2*n-1; 
    numOfSpace = 1;
                      
    while(numOfStars >= n ){
        if(cnt < numOfSpace){
            cout << " " << "  "; 
            cnt++;
            continue;
        }  
        cnt = 0;
        while(cnt < numOfStars){
            cout << '*' << "  ";
            cnt++;
        }
        cnt = 0;
        while(cnt < numOfSpace){
            if(cnt == numOfSpace - 1) cout << " ";
            else cout << " " << "  ";
            cnt++;
        }
        cnt = 0;
        numOfSpace++;
        numOfStars-=2;
        cout << endl;
    };
    
    return 0;
}
