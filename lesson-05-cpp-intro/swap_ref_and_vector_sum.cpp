#include<iostream>
#include<vector>

void swap_ref(int &x,int &y) {
	int t = x;
	x = y;
	y = t;
}

int main() {
	int a = 1;int b = 2;
	swap_ref(a,b);
	std::cout<<"a="<< a <<" b="<< b <<"\n";
	std::vector<int> v = {10,200,50,90,125};
	int sum = 0;
	for (int x : v) {
		sum += x;
	}
	std::cout<<"sum="<< sum <<"\n";
	return 0;
}
