#include <iostream>
#include <string.h>
using namespace std;

class Bucket {
	public:
		int volume;
		int used;
		
		void flush(){
			used = 0;
		}	
		
		int fill(int v){
			if (v > (volume - used)) {
				int r = v + used - volume;
				used = volume;
				return r;
			}
			else {
				used += v;
				return 0;
			}
		}
};
	
int main () {
	
	Bucket test_01;
	test_01.volume = 12;
	test_01.used = 3;
	cout<<"1) "<<test_01.volume<<", "<<test_01.used<<"\n";
	
	int rest = test_01.fill(14);
	cout<<"2) "<<test_01.used<<", "<<rest<<"\n";
	
	test_01.flush();
	rest = test_01.fill(8);
	cout<<"3) "<<test_01.used<<", "<<rest<<"\n";	
	
  	return 0;
}
