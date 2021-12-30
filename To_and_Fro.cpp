#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char str[210];
char mat[30][30];
 
int main() {
	// your code goes here
	int cols, rows;
	while(1) {
		scanf("%d", &cols);
		if(cols == 0) break;
		scanf("%s", str);
		rows = strlen(str)/cols;
		int pos = 0;
		for(int i=0; i<rows; i++) {
			if(i & 1) {
				for(int j=cols-1; j>=0; j--) {
					mat[i][j] = str[pos++];
				}
			}
			else {
				for(int j=0; j<cols; j++) {
					mat[i][j] = str[pos++];
				}
			}
		}
		for(int j=0; j<cols; j++) {
			for(int i=0; i<rows; i++) {
				printf("%c", mat[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
