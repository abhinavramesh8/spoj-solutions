#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
char str[5010];
ll dp[5010];
 
int main() {
	// your code goes here
	int len, i;
	bool skip;
	dp[0] = 1;
	while(1) {
		skip = false;
		scanf("%s", str);
		for(i=0; str[i]!='\0'; i++) {
		    if(str[i] == '0') {
		    	if(i == 0) return 0;
		    	else if(str[i-1] != '1' && str[i-1] != '2') {
		    		skip = true;
		    		break;
		    	}
		    }
		}
		if(skip) {
			printf("0\n");
			continue;
		}
		len = i;
		if(str[1] == '0') dp[1] = 1;
		else {
			if(((str[0]-'0')*10 + str[1]-'0') <= 26) dp[1] = 2;
			else dp[1] = 1;
		}
		for(i = 2; i<len; i++) {
			if(str[i] == '0') dp[i] = dp[i-2];
			else if(str[i-1] == '0') dp[i] = dp[i-1];
			else if(((str[i-1]-'0')*10 + str[i] - '0') <= 26) dp[i] = dp[i-2] + dp[i-1];
			else dp[i] = dp[i-1];
		}
		
		printf("%lld\n", dp[len-1]);
	}
	return 0;
}
