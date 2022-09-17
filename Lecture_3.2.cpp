#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
	
  	ifstream input ("output.txt");
  	string number;
  		
  	if (input.is_open()){
  		int n = 1;
  		while (getline(input, number)){
  			//printf("%d. %s\n", n, number.c_str());
  			cout<<n<<". "<<number<<"\n";
  			n++;
		}
	}
		
	else cout <<"Unable to open input file";
  	
  	return 0;
}
