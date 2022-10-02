#include <iostream>
#include <string.h>
using namespace std;

int main () {
	
	int t; cin>>t;
	
	while(t--){
		char str[51]; cin>>str;
		char *s; s = str;
		for(int i = 0; i < strlen(str); i++) {
			//*(s + i) += 1;
			//cout<<*(s + i);
			cout<<char (*(s + i) + 1);
		}
		cout<<"\n";
	}	
  	return 0;
}
