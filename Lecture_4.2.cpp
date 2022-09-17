#include <iostream>
#include <string.h>
using namespace std;

int main () {
	
	int t; cin>>t;
	
	while(t--){
		string msg; cin>>msg;
		for(int i = 0; i < strlen(msg.c_str()); i++) msg[i] += 1;
		cout<<msg;
	}
	
  	return 0;
}
