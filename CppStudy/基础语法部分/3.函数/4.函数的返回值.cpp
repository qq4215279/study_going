#include <iostream>

using namespace std;

// void: 也是数据类型的一种，只不过只能用在函数的返回值部分，表示无，没有返回值。

// 注意事项: 如果一个函数的返回值类型不是void，那就表示这个函数是有执行结果的，那么在这个函数执行结束之前，必须要明确结果是谁。
// 通过关键字return，来确定一个函数的执行结果。

// return关键字:
// 只能在函数中使用，表示
//		1. 明确当前函数的执行结果是谁，也就是返回值
//      2. 结束函数的执行

// 如果一个返回值类型为void的函数中，能不能使用return ?
//		1. 可以，此时的return仅表示结束函数的执行
int myabs(int number) {
	// 计算绝对值
	int result = number > 0 ? number : -number;

	// 返回值，也就是这个函数执行的结果
	return result;
}

int main4() {

	// 调用函数myabs计算绝对值
	int res = myabs(-10);

	cout << res << endl;

	return 0;
}