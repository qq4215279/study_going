#include <iostream>

using namespace std;


int main4() {
	// 数组的遍历：依次获取数组中的每一个元素

	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// 下标遍历法
	// int len = sizeof(array) / sizeof(int);
	// for (int i = 0; i < len; i++) {
	// 	cout << array[i] << ", ";
	// }

	// 元素迭代
	// 逻辑：依次将数组中的每一个元素给变量ele进行赋值
	// 1、只有在定义数组的部分，才可以使用。如果将数组通过参数传递到另外的一个函数中，此时是不能使用这种方式的。
	// 2、在迭代的过程中，不能通过ele修改到数组中的元素的值。
	// for (int ele : array) {
	// 	cout << ele << ", ";
	// 	if (ele == 5) {
	// 		ele = 100;
	// 	}
	// }

	return 0;
}