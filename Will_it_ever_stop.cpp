#include <iostream>
using namespace std;
 
int main() {
	unsigned long long n;
	// your code here
	cin>>n;
	if(n <= 1) cout<<"TAK";
	else {
		if((n & (n-1)) == 0) cout<<"TAK";
		else cout<<"NIE";
	}
	return 0;
}
