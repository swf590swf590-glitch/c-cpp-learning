#include<stdio.h>
int dist[5] = {120,45,80,30,200};
int sum(int *p,int n) {
	int s = 0;
	for (int i = 0;i < n;i++) {
	s += *(p + i);
	}
	return s;
}

int max(int *p,int n) {
	int m = *p;
	for (int i = 0;i < n;i++) {
	if (m < *(p + i)) {
		m = *(p + i);
		}
	}
	return m;
}

int main() {
	printf("sum = %d,max = %d",sum(dist,5),max(dist,5));
	return 0;
}