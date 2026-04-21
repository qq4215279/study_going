#include <iostream>

using namespace std;

void swap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}

void swap02(int& num1, int& num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}



int main8() {

	// 定义两个局部变量
	int x = 10, y = 20;
	
	// 调用交换数字的函数
	// swap(x, y);
	swap02(x, y);

	// 输出两个变量的值
	cout << "x = " << x << ", y = " << y << endl;


	return 0;
}