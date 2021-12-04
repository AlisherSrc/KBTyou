#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    cout << (a & b);
    // We have input: 13 11. 13 in binary is 1101 and 11 is 1011
    /*
    So, when we use AND, we miltiply them
    1101
    x
    1011
    ------
    1001 --> 9
    */ 
    
    return 0;
}