#include <iostream>

using namespace std;
int cnt;

int evens(string s, int begin){//evens(s, 0);
    if(begin == s.size()) return cnt;// 0 == 5? NO --> 
    if((s[begin] - 48) % 2 == 0 && (s[begin] - 48) != '0'){ // (s[0]("2")(by ACII code = 50) - 48 = 2) % 2(2/2=0) == 0 -> TRUE AND s[0] - 48 (2)!= 0 - >TRUE
        cnt++; //cnt = 0 + 1;
    }
    return evens(s, begin + 1); // evens(s,begin + 1)
}                       //                      |
/*                                              V
    evens(s,0 + 1){
        1 == 5? NO -->
    }                                            
*/

int main(){
    string s; //23456
    cin >> s;
    cout << evens(s, 0);

    return 0;
}