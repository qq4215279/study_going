#include <iostream>

using namespace std;

void printArray1(int* array, int len) {
	for (int i = 0; i < len; i++) {
		cout << array[i] << ", " << endl;
	}
}

int main3() {

	// 定义一个数组
	// array存储的其实是数组中首元素的内存地址
	int array[5] = { 1, 2, 3, 4, 5 };

	printArray1(array, sizeof(array) / sizeof(int));

	// cout << (int)&array[0] << endl;
	// cout << (int)&array[1] << endl;
	// cout << (int)&array[2] << endl;
	// cout << (int)&array[3] << endl;
	// cout << (int)&array[4] << endl;
	// cout << (int)array << endl;
	// 
	// cout << *array << endl;

	return 0;
}