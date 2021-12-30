#include <iostream>
#include <cstdio>
#include <map>
using namespace std;
 
map<int, long long> dpmap;
 
long long coin(long long x) {
	if(x == 1 || x == 0) return x;
	map<int, long long>::iterator point = dpmap.find(x);
	if(point != dpmap.end()) return point->second;
	return dpmap[x] = max(x, coin(x/2) + coin(x/3) + coin(x/4));
}
 
int main() {
	long long n;
	// your code here
	while(scanf("%lld", &n) != EOF) {
		printf("%lld\n", coin(n));
	}
 
	return 0;
}
