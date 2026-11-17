#include<stdio.h>
int my_strlen(char *s) {
	int cnt = 0;
	while (*s != '\0') {
	cnt++;s++;
	}
	return cnt;
}

int main() {
	printf("%d\n", my_strlen("START"));
	printf("%d\n", my_strlen("WUST"));    
	printf("%d\n", my_strlen(""));
	return 0;
}