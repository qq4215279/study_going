#include <iostream>

using namespace std;

int main3() {

	// 变量定义：在内存（栈空间）开辟了一个四字节的空间，其中存储的数据是10
	int num = 10;

	// 每一个空间都有自己唯一的地址，这个地址如何获取？
	// 通过&，取地址。
	// 我们需要使用什么类型的变量来存储这个地址？
	int* p = &num;

	// 输出的是内存地址
	cout << p << endl;

	// 如何通过地址访问空间？
	// *
	cout << *p << endl;
	*p = 200;
	cout << num << endl;


	return 0;
}