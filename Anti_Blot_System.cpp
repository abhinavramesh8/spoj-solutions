#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;
 
int convert(char *str) {
	int sum = 0;
	for(int i=0; str[i]!='\0'; i++) {
		if(!isdigit(str[i])) return -1;
		sum = sum * 10 + str[i] - '0';
	}
	return sum;
}
 
int main() {
	// your code goes here
	int t, x, y, z;
	char a[50], b[50], c[50];
	cin>>t;
	while(t--) {
		scanf(" %s + %s = %s", a, b, c);
		x = convert(a);
		y = convert(b);
		z = convert(c);
		if(x < 0) printf("%d + %s = %s\n", z-y, b, c);
		else if(y < 0) printf("%s + %d = %s\n", a, z-x, c);
		else printf("%s + %s = %d\n", a, b, x+y);
	}
	return 0;
}
