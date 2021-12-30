#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int arr[10010];
 
int main() {
	int n, sum, num, same;
	while(1) {
		scanf("%d", &n);
		if(n == -1) break;
		sum = 0;
		for(int i=0; i<n; i++) {
			scanf("%d", &num);
			sum += num;
			arr[i] = num;
		}
		if(sum % n) printf("-1\n");
		else {
			same = sum/n;
			sum = 0;
			sort(arr, arr+n);
			for(int i=0; i<n; i++) {
				if(arr[i] < same) sum += same - arr[i];
				else break;
			}
			printf("%d\n", sum);
		}
	}
	// your code here
 
	return 0;
}
