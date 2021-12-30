#include <iostream>
using namespace std;int last_dig_4(int temp,int a,int b,int c,int d) { int last;if(temp==1) last=a;else if(temp==2) last=b;else if(temp==3) last=c;else last=d;return last;}
int main(){int t,a,b;cin>>t;while(t--){cin>>a>>b;if(b == 0){cout<<1<<endl;continue;}int last,temp,dig=a%10;
switch(dig) {
case 0:case 1:case 5:case 6: last=dig;break;
case 2:last=last_dig_4(b%4,2,4,8,6);break;
case 3:last=last_dig_4(b%4,3,9,7,1);break;
case 4:temp=b%2;if(temp==0) last=6;else last=4;break;
case 7:last=last_dig_4(b%4,7,9,3,1);break;
case 8:last=last_dig_4(b%4,8,4,2,6);break;
case 9:temp=b%2;if(temp==0) last=1; else last=9;break;
}cout<<last<<endl;}return 0;}
