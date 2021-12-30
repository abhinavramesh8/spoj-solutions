#include <iostream>
using namespace std;
typedef long long ll;
 
int main() {
	// your code goes here
	int t;
	ll k, ans;
	cin>>t;
	while(t--) {
		cin>>k;
		ans = (k/4)*1000;
		switch(k%4) {
			case 0: ans -= 1000;
					ans += 942;
					break;
			case 1: ans += 192;
					break;
			case 2: ans += 442;
					break;
			case 3: ans += 692;
					break;
		}
		cout<<ans<<endl;
	}
	return 0;
}
