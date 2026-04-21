#include <iostream>

using namespace std;

void change(int num) {
	num = 200;
	cout << "&num = " << &num << endl;
}

void change2(int* num) {
	cout << num << endl;
	*num = 200;
}


int main6() {

	// 
	int n = 10;
	cout << "&n = " << &n << endl;
	// change(n);
	

	change2(&n);
	cout << n << endl;


	return 0;
}