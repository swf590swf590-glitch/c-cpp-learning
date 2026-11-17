#include<stdio.h>
void swap_ptr(int *x,int *y) {
	int t = *x;*x = *y;*y = t;
}

void set_zero(int *p) {
	if (p != NULL) {
	*p = 0;
	}
}

int main() {
	int a = 2;int b = 1;
	swap_ptr(&a,&b);
	printf("a的值为：%d,b的值为：%d/n",a,b);
	int v = 99;
	set_zero(&v);
	printf("v的值为：%d",v);
	set_zero(NULL);
	return 0;
}