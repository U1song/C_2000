#include<iostream>
using namespace std;

int main(){

    for(int i = 0 ; i <= 100 ; i++)
        if(i % 3 == 0) cout<<i<<"\t";
    
    cout<<"\n";
    
    int n = 1, s = 0;
    while(n < 1000){
        if(n % 7 == 0) s += n;
        n += 4;
    }
    
    cout<<s<<"\n";
    
    return 0;

}
