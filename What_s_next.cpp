#include <iostream>
#include <cstdio>
using namespace std;
 
int main() {
	int a,b,c,next;
	while(1) {
		scanf("%d %d %d", &a, &b, &c);
		if(a || b || c) {
			if((b-a) == (c-b))
				printf("AP %d\n", 2*c-b);
			else
				printf("GP %d\n", c*c/b);
		}
		else break;
	}
	
	// your code here
 
	return 0;
}
