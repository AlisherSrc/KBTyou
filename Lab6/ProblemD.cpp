#include <iostream>

using namespace std;

string isHere(int amountOfBooks,int ID[] ,int searchedBook){
	for(int i = 0; i < amountOfBooks; i++ ){
		if(ID[i] == searchedBook){
			return "Yes"; 
		}
	}
	return "No";
}

int main(){
	int n,x;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	cin >> x;
	cout << isHere(n,a,x);
	return 0;
} 