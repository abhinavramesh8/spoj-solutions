#include <iostream>
#include <cstdio>
using namespace std;
 
int main() {
	int i, t, x, count;
	scanf("%d", &t);
	while(t--) {
		count = 0;
		scanf("%d", &x);
		i = 5;
		while(i <= x) {
			count += x/i;
			i *= 5;
		}
		printf("%d\n", count);
	}
	
	// your code here
 
	return 0;
}
