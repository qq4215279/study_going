#include <iostream>

using namespace std;

int main7() {

	// 定义一个整型的变量
	int num = 10;
	// 定义一个引用，来引用num
	int& a = num;

	// 比较值
	cout << "num = " << num << ", a = " << a << endl;

	// 比较地址
	cout << "&num = " << &num << ", &a = " << &a << endl;

	// 既然是指向同一块空间的，也就是说我们随便修改一个值，都会对另外的一个值产生影响
	a = 100;
	cout << "num = " << num << ", a = " << a << endl;

	return 0;
}