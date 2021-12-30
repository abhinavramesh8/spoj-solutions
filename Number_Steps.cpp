#include <iostream>
#include <cstdio>
using namespace std;
 
int main() {
	int n, x, y;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d", &x, &y);
		if(x == y) {
			printf("%d\n", (x<<1) - (x&1));
		}
		else if(y == x-2) {
			printf("%d\n", (x+y) - (x&1));
		}
		else printf("No Number\n");
	}
	// your code here
 
	return 0;
}
