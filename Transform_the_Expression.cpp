#include <iostream>
#include <stack>
#include <cctype>
#include <cstdio>
using namespace std;
 
int priority(char c) {
	switch(c) {
		case '+': return 1;
		case '-': return 2;
		case '*': return 3;
		case '/': return 4;
		case '^': return 5;
		default: return 0;
	}
}
 
int main() {
	stack<char> convert;
	char postfix[410], infix[410], c;
	int pos, t, i;
	scanf("%d", &t);
	char op;
	while(t--) {
		pos = 0;
		scanf("%s", infix);
		for(i=0; (c = infix[i])!='\0'; i++) {
			if(isalpha(c)) {
				postfix[pos++] = c;
			}
			else if(c == ')') {
				while((op = convert.top()) != '(') {
					postfix[pos++] = op;
					convert.pop();
				}
				convert.pop();
			}
			else if(c == '(') {
				convert.push(c);
			}
			else {
				op = convert.top();
				while(op != '(' && priority(op) >= priority(c)) {
					postfix[pos++] = op;
					convert.pop();
					op = convert.top();
				}
				convert.push(c);
			}
		}
		postfix[pos] = '\0';
		printf("%s\n", postfix);
	}
	
	// your code here
 
	return 0;
}
