#include <iostream>
using namespace std;

int main () {
	
	int t; cin>>t;
	string num[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	
	while(t--){
		int i; cin>>i;
		cout<<num[i]<<"\n";
	}
	
  	return 0;
}
