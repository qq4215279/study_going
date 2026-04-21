#include <iostream>

using namespace std;

// 如果数组中的元素数量不多的情况，推荐使用顺序查询。
// 如果数组中的元素数量较大的情况，并且数组是排序的，推荐使用二分查询。

// 使用顺序查询的方式，从数组中查询元素出现的下标
// 如果数组中不包含这个元素，返回-1
int indexOf(int* array, int len, int element) {
	for (int i = 0; i < len; i++) {
		if (array[i] == element) {
			return i;
		}
	}
	// 如果上述循环走完了，仍然没有结果返回，说明这个元素不存在
	return -1;
}

// 使用二分查询的方式，从数组中查询元素出现的下标
// 如果数组中不包含这个元素，返回-1
int binarySearch(int* array, int len, int element) {
	// 定义两个变量，分别用来表示需要查找的范围上限和下限
	int min = 0, max = len - 1;

	// 接下来，需要循环缩小需要查询的范围
	// 循环结束条件：
	// 1、找到这个元素了
	// 2、找不到这个元素（数组中不包含这个元素）
	while (min <= max) {
		// 计算中间元素的下标
		int mid = (min + max) / 2;
		// 使用中间下标位的元素和需要查询的元素进行对比
		if (array[mid] > element) {
			// 说明我们要查询的元素在左边，下一次再查询的时候，缩小范围，修改上限
			max = mid - 1;
		}
		else if (array[mid] < element) {
			// 说明我们要查询的元素再右边，下一次再查询的时候，缩小范围，修改下限
			min = mid + 1;
		}
		else {
			// 说明找到了这个元素
			return mid;
		}
	}

	// 如果程序能够执行到这里，说明数组中不包含这个元素
	return -1;
}


int main6() {

	// 定义一个数组
	int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int len = sizeof(array) / sizeof(int);

	// 查询下标
	// int index = indexOf(array, len, 90);
	int index = binarySearch(array, len, 70);

	cout << index << endl;

	return 0;
}