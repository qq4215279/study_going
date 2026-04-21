#include <iostream>

using namespace std;


// 定义了一个函数，其中封装了一部分功能: 打印九九乘法表
void printNineNineTable() {
	for (int line = 1; line <= 9; line++) {
		for (int column = 1; column <= line; column++) {
			cout << line << " x " << column << " = " << (column * line) << "\t";
		}
		cout << endl;
	}
}

// 这是一个主函数
int main1() {

	// 定义在函数中的代码，默认是不会执行的
	// 如果想要执行函数中的代码，我们需要“调用”函数
	printNineNineTable();

	cout << "============" << endl;

	printNineNineTable();

	return 0;
}

