#include <cmath>
#include <iostream>
using namespace std;
 
int divisors(int n) {
	int sq = sqrt(n);
	int sum = 0;
	for(int i=1; i<=sq; i++) {
		if((n%i) == 0) sum += 1;
	}
	return sum;
}
 
int main() {
	int n, sum = 0;
	// your code here
	cin>>n;
	for(int i=1; i<=n; i++) {
		sum += divisors(i);
	}
	cout<<sum;
	return 0;
}
