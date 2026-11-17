#include<stdio.h>
void swap(int a,int b) {
	int c = a;
	a = b;
	b = c;
}

int main () {
	int a = 1;
	int b = 2;
	swap(a,b);
	printf("a = %d,b = %d",a,b);
	return 0;
}