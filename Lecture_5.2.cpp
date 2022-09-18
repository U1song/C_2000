#include <iostream>
using namespace std;

int* Sort(int num[]){
	for(int i = 0; i < 9; i++)
		for(int j = i + 1; j < 10; j++)
		    if(num[i] < num[j]) 
		    	swap(num[i], num[j]);

	return num;
}

int main () {
	int t; cin>>t;
	int num[10];
	 
	while(t--){
		for(int k = 0; k < 10; k++)		cin>>num[k];
        Sort(num);
        for(int k = 0; k < 10; k++)		cout<<num[k]<<"\t";
	}

  	return 0;
}
