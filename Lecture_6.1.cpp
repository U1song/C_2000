#include <iostream>
#include <string.h>
using namespace std;

void reverse (string t){
	int n = strlen(t.c_str());
	for(int i = 1; i <= n; i++) cout<<t[n - i];
}

int main () {
	int t; cin>>t;
	while(t--){
		string txt;  cin>>txt;
	reverse (txt);
	}	
	
  	return 0;
}

