#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(string a, int b)
{
    int sum = 0;
    if (b == a.size()) return sum;
    sum += sumOfDigits (a, b + 1) + a.at(b) - 48; // .at(index of sumbol) - returns symbol of string
    cout << sum << " ";
    return sum;
}

int main()
{

    string a;
    cin >> a;
    cout << sumOfDigits(a, 0);

    return 0;
}