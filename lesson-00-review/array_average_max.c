#include<stdio.h>
double average(int a[],int n) {
	int sum = 0;
	int i = 0;
	while(i < n) {
	sum += a[i];
	i++;
	}
	return (double)sum/n;
}
int maximum(int a[],int n) {
	int max = a[0];
	for (int i = 0;i < n;i++) {
		if (a[i] > max) {
		max = a[i];
		}
	}
	return max;
}

int main() {
	int a[5] = {120,45,80,30,200};
	printf("平均值为：%.2f，最大值为：%d",average(a,5),maximum(a,5));
	return 0;
}