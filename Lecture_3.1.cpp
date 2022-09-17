#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
	int t; cin>>t;
	
	while(t--){
  		int A, B;  cin>>A>>B;
  		ofstream output ("output.txt");

  		if (output.is_open()){
  			for(int i = A ; i <= B ; i++)
  			output<<3 * i<<"\n";
  		}
  		
  		else cout << "Unable to open output file";
  	}
  
  	return 0;
}
