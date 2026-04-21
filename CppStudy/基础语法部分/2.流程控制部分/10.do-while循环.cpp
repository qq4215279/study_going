#include <iostream>

using namespace std;

int main10() {

	// do-while的循环体至少执行一次。
	// do {
	// 	cout << "hello world" << endl;
	// } while (false);

	// 1. 打印三次helloworld
	// int count = 0;
	// do {
	// 	cout << "hello world" << endl;
	// 	count++;
	// } while (count < 3);

	// 2. 用do/while实现打印100以内的奇数
	/*
	int number = 1;
	do {
		cout << number << endl;
		number += 2;
	} while (number <= 100);
	*/

	// 3. 100 以内能够被3整除，但是不能被5整除的数打印输出
	int number = 0;
	do {
		if (number % 3 == 0 && number % 5 != 0) {
			cout << number << endl;
		}
		number++;
	} while (number <= 100);

	return 0;
}