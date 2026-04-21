#include <iostream>

using namespace std;


// 参数是可以使用const来修饰的，表示这个参数的值是不允许修改的
void add(int num1, int num2) {
	cout << "num1 = " << num1 << ", num2 = " << num2 << ", num1 + num2 = " << (num1 + num2) << endl;
}


int main3() {

	// 调用一个有参数的函数，在调用的时候，需要为每一个参数进行赋值
	add(10, 20);
	add(100, 200);

	return 0;
}