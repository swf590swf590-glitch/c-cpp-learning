#include<stdio.h>
#include<stdlib.h>

int *make_array(int n) {
	int *a = (int *)malloc(n *sizeof(int));
	if (a == NULL) {
		return NULL;
	}
	for (int i = 0;i<n;i++) {
		a[i] = i + 1;
	}
	return a;
}

int main() {
	int *arr = make_array(5);
	if (arr == NULL) {
		return 1;
	}
	int sum = 0;
	for (int i = 0;i < 5;i++) {
		sum += arr[i];
	}
	printf("sum=%d\n",sum);
	free(arr);
	arr = NULL;
	return 0;
}