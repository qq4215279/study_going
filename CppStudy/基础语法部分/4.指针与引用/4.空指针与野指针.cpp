#include <iostream>

using namespace std;

int main4() {

	// 空指针：没有存储任何地址的指针。
	int* p = NULL;
	cout << p << endl;
	// cout << *p << endl;

	// 野指针：指针变量中确实存储了一个内存地址，但是这个地址指向的空间不存在了。
	int* p2 = (int*)0x1234;
	cout << p2 << endl;
	cout << *p2 << endl;

	return 0;
}