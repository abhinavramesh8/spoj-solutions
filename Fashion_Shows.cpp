#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int men[1010];
int women[1010];
 
int main() {
	int t,n,max;
	scanf("%d", &t);
	while(t--) {
		max = 0;
		scanf("%d", &n);
		for(int i=0; i<n; i++) {
			scanf("%d", &men[i]);
		}
		for(int i=0; i<n; i++) {
			scanf("%d", &women[i]);
		}
		sort(men, men+n);
		sort(women, women+n);
		for(int i=0; i<n; i++) {
			max += men[i]*women[i];
		}
		printf("%d\n", max);
	}
	
	// your code here
 
	return 0;
}
