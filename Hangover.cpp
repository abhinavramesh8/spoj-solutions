#include <iostream>
using namespace std;
 
int main() {
	float x;
	while(1) {
		cin>>x;
		if(x == 0.00) break;
		int i = 2;
		float sum = 1.0/2;
		while(sum < x) {
			i++;
			sum += 1.0/i;
		}
		cout<<i-1<<" card(s)"<<endl;
	}
	
	// your code here
 
	return 0;
}
