#include <iostream>

// 什么情况下会考虑使用循环呢？
// 某一段代码需要被多次执行！并且每次执行的时候，是遵循一定的规律的。


using namespace std;

int main8() {

	/*
	int count = 0;
	while (count < 10) {
		cout << "hello world" << endl;
		count++;
	}
	*/

	// 1. 打印输出5次，我爱编程，我爱千锋
	/*
	int count = 0;
	while (count++ < 5) {
		cout << "我爱编程，我爱千锋" << endl;
	}
	*/

	// 2. 求 10 的阶乘 1 x 2 x 3 x 4 x 5 x 6 x 7 x 8 x 9 x 10
	/*
	long long result = 1;
	int number = 1;
	while (number <= 10) {
		result *= number;
		number++;
	}
	cout << "10! = " << result << endl;
	*/

	// 3. 求1-100的和  1 + 2 + 3 + ... + 100
	/*
	int result = 0;
	int number = 1;
	while (number <= 100) {
		result += number;
		number++;
	}
	cout << result << endl;
	*/

	// 4. 求100以内的偶数的和
	// int result = 0;
	// int number = 1;
	// while (number <= 100) {
	// 	if (number % 2 == 0) {
	// 		result += number;
	// 	}
	// 	number++;
	// }
	// cout << result << endl;

	// int result = 0;
	// int number = 0;
	// while (number <= 100) {
	// 	result += number;
	// 	number += 2;
	// }
	// cout << result << endl;

	return 0;
}