#include <iostream>

using namespace std;

int main2() {
	// 定义一个数组
	int array[10] = { 1, 2, 3, 4, 5 };
	
	// 访问数组中的元素
	// 为了能够区分数组中的每一个元素，在数组中存储的每一个元素都有一个唯一的位置索引，这个索引，称为 -- 下标。
	// 访问数组中的元素，就是通过下标来访问的。
	// 注意事项：数组中的元素下标是从0开始的！！！
	// cout << array[0] << endl;
	// cout << array[1] << endl;
	// cout << array[2] << endl;
	// cout << array[3] << endl;
	// cout << array[4] << endl;
	// cout << array[5] << endl;
	// cout << array[6] << endl;
	// cout << array[7] << endl;
	// cout << array[8] << endl;
	// cout << array[9] << endl;

	// 计算数组的长度
	// int len = sizeof(array) / sizeof(int);
	// 
	// for (int i = 0; i < len; i++) {
	// 	cout << array[i] << endl;
	// }

	// 注意事项：
	// 使用下标访问数组中的元素，切记！！！一定不要越界！！！
	// cout << array[10] << endl;

	return 0;
}