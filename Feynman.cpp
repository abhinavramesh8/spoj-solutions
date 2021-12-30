#include <iostream>
#include <cstdio>
using namespace std;
 
int main() {
	int n, t;
	while(1) {
		scanf("%d", &n);
		if(n == 0) break;
		n = (n*(n+1)*(2*n+1))/6;
		printf("%d\n", n);
	}
	
	
	// your code here
 
	return 0;
}
