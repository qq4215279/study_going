#include <iostream>

using namespace std;


// 不允许在有默认值的参数之后，再出现没有默认值的参数
int add(int num1, int num2 = 100) {
	return num1 + num2;
}

int main5() {

	// 我们调用函数的时候，需要给每一个参数进行赋值
	// 但是，如果参数是有默认值的情况，此时这个参数可以赋值，也可以不赋值
	cout << add(10, 20) << endl;

	cout << add(10) << endl;

	return 0;
}