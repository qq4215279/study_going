#include <iostream>

using namespace std;

void showArrayElements(int* array, int len) {
	for (int i = 0; i < len; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

int main8() {

	// 定义一个数组
	int array[] = { 1, 3, 5, 7, 9, 0, 8, 6, 4, 2 };

	// 浅拷贝
	int* array_copy = array;
	showArrayElements(array_copy, sizeof(array) / sizeof(int));

	// 修改数组array中的元素，对array_copy也会有影响
	// array[0] = 100;
	// showArrayElements(array_copy, sizeof(array) / sizeof(int));

	// 深拷贝
	int array_copy2[10];
	for (int i = 0; i < 10; i++) {
		array_copy2[i] = array[i];
	}
	showArrayElements(array_copy2, 10);
	array[0] = 100;
	showArrayElements(array_copy2, 10);

	return 0;
}