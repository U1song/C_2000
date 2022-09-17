#include <iostream>
using namespace std;

float SquardSum(float a, float b){
	return((a + b) * (a + b));
}

int main () {
	int t; cin>>t;
	float a, b; 
	while(t--){
		cin>>a>>b;
		cout<<SquardSum(a, b)<<"\n";
	}

  	return 0;
}
