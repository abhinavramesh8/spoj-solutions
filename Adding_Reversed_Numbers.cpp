#include <iostream>
#include <cstdio>
using namespace std;
 
int reverse(int num) {
	int rev = 0;
	while(num) {
		rev = (rev*10) + num%10;
		num /= 10;
	}
	return rev;
}
 
int main() {
	int x, y, z, n;
	// your code here
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d %d", &x, &y);
		x = reverse(x);
		y = reverse(y);
		z = reverse(x + y);
		printf("%d\n", z);
	}
	return 0;
}
