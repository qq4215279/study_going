#include <iostream>

using namespace std;

// 计算一个数字的阶乘，参数是需要计算阶乘的数字，返回值是计算的结果
int multiply(int number) {
	if (number == 1) {
		return 1;
	}
	return number * multiply(number - 1);
}

// 计算1+2+3+...+N的和
int sum(int n) {
	if (n == 1) {
		return 1;
	}
	return n + sum(n - 1);
}

// 斐波那契数列
// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
int getNumber(int index) {
	if (index == 1 || index == 2) {
		return 1;
	}
	return getNumber(index - 1) + getNumber(index - 2);
}

int main7() {

	// cout << multiply(5) << endl;
	// cout << sum(100) << endl;

	for (int index = 1; index <= 20; index++)
	{
		cout << getNumber(index) << endl;
	}

	return 0;
}