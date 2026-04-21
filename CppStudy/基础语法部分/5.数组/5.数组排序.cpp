#include <iostream>

using namespace std;

// 使用选择排序，对指定的数组进行升序排序
// 选择排序: 固定一个下标位，用这一位的元素依次和后面的每一位元素进行比较
void sort01(int* array, int len) {
	// 固定元素下标位，从0开始，到len-2位
	for (int i = 0; i < len - 1; i++) {
		// 需要用第i位的元素，依次和后面的每一位元素进行比较
		for (int j = i + 1; j < len; j++) {
			// 比较元素大小
			if (array[i] > array[j]) {
				int tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
	}
}

// 优化之后的选择排序，优化了元素交换的逻辑，使得元素交换不再那么频繁
void sort02(int* array, int len) {
	// 固定元素下标位，从0开始，到len-2位
	for (int i = 0; i < len - 1; i++) {
		// 定义一个变量，用来记录剩余的元素中的最小值下标
		int minIndex = i;
		// 依次遍历数组中剩余的元素
		for (int j = i + 1; j < len; j++) {
			if (array[minIndex] > array[j]) {
				// 说明找到了新的最小值，更新最小值元素的下标
				minIndex = j;
			}
		}
		// 交换第i位的元素和最小的元素
		if (minIndex != i) {
			int tmp = array[minIndex];
			array[minIndex] = array[i];
			array[i] = tmp;
		}
	}
}


// 使用冒泡排序，对数组中的元素进行排序
void sort03(int* array, int len) {
	// 需要比较多少趟
	for (int i = 0; i < len - 1; i++) {
		// 每一趟的比较，都是从第0位开始的
		for (int j = 0; j < len - 1 - i; j++) {
			// 比较两个相邻的元素
			if (array[j] > array[j + 1]) {
				int tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
}


void printArray(int* array, int len) {
	for (int i = 0; i < len; i++) {
		cout << array[i] << "\t";
	}
}


int main5() {

	// 定义一个数组
	int array[] = { 1, 3, 5, 7, 9, 0, 8, 6, 4, 2 };
	int len = sizeof(array) / sizeof(int);

	// 调用函数
	sort03(array, len);

	// 打印数组中的元素
	printArray(array, len);

	return 0;
}