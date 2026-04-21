#include <iostream>

using namespace std;

// 设计一个函数，找出一个数组中最大的数字，连同所在的下标一起输出。

// 设计一个函数，判断一个数组是不是一个升序的数组。

// 设计一个函数，找出一个整型数组中的第二大的值。
//		1. 不可以通过排序实现，不能修改数组中的数据顺序
//		2. 要考虑到最大的数字可能出现多次

// 设计一个函数，将一个数组中的元素倒序排列（注意，不是降序）。

// 将一个数组中的元素拷贝到另外一个数组中。

// 设计一个函数，比较两个数组中的元素是否相同（数量、每一个元素都相同，才认为是相同的数组）。

namespace array_exercise {
	
	// 设计一个函数，找出一个数组中最大的数字，连同所在的下标一起输出。
	void printMaxElementAndIndex(int* array, int len) {
		// 空数组判断
		if (len == 0) {
			cout << "空数组，没有最大值" << endl;
			return;
		}
		// 定义两个变量，分别用来记录最大值和最大值所在的下标
		int maxElement = array[0], maxIndex = 0;
		// 遍历数组，用每一个元素和当前记录的最大值进行比较
		for (int i = 1; i < len; i++) {
			if (array[i] > maxElement) {
				// 说明找到了新的最大值
				maxElement = array[i];
				maxIndex = i;
			}
		}
		cout << "数组中的最大值是: " << maxElement << ", 它所在的下标是: " << maxIndex << endl;
	}

	// 设计一个函数，判断一个数组是不是一个升序的数组。
	bool isAsc(int* array, int len) {
		// 思路：遍历数组中的每一个元素，用这个元素和后面的一位元素进行比较，如果是升序的数组，一定满足前面的元素小于等于后面的元素
		for (int i = 0; i < len - 1; i++) {
			if (array[i] > array[i + 1]) {
				// 已经可以说明不是一个升序的数组
				return false;
			}
		}
		return true;
	}

	// 使用递归的方式来判断
	bool isAsc2(int* array, int len) {
		if (len == 1) {
			return true;
		}
		return isAsc2(array, len - 1) && array[len - 2] <= array[len - 1];
	}

	// 设计一个函数，找出一个整型数组中的第二大的值。
	//		1. 不可以通过排序实现，不能修改数组中的数据顺序
	//		2. 要考虑到最大的数字可能出现多次
	int getSecond(int* array, int len) {
		// 处理特殊情况
		if (len <= 1) {
			cout << "没有次大值" << endl;
			return - 1;
		}
		// 定义两个变量，分别用来记录最大值和次大值
		int max = array[0] > array[1] ? array[0] : array[1];
		int second = array[0] < array[1] ? array[0] : array[1];
		// 遍历数组中的每一个元素
		for (int i = 0; i < len; i++) {
			if (array[i] > max) {
				// 新的最大值出现了
				second = max;
				max = array[i];
			}
			else if (array[i] > second && array[i] < max) {
				// 说明新的次大值出现了
				second = array[i];
			}
		}
		return second;
	}

	// 设计一个函数，将一个数组中的元素倒序排列（注意，不是降序）。
	void reverse(int* array, int len) {
		for (int i = 0; i < len / 2; i++) {
			int tmp = array[i];
			array[i] = array[len - 1 - i];
			array[len - 1 - i] = tmp;
		}
	}

	// 将一个数组中的元素拷贝到另外一个数组中。
	void copy(int* src, int srcLen, int* dst, int dstLen) {
		for (int i = 0; i < srcLen; i++) {
			// 判断是否越界
			if (i >= dstLen) {
				break;
			}
			dst[i] = src[i];
		}
	}

	// 设计一个函数，比较两个数组中的元素是否相同（数量、每一个元素都相同，才认为是相同的数组）。
	bool equals(int* array1, int len1, int* array2, int len2) {
		// 特殊判断
		if (len1 != len2) {
			return false;
		}
		// 逐个元素进行比较
		for (int i = 0; i < len1; i++) {
			if (array1[i] != array2[i]) {
				return false;
			}
		}

		return true;
	}

}


int main7() {

	int array1[] = { 1, 3, 5, 7, 9, 0, 8, 6, 4, 2 };
	int len = sizeof(array1) / sizeof(int);

	using namespace array_exercise;
	
	// printMaxElementAndIndex(array1, len);
	// cout << isAsc(array1, len) << endl;
	// cout << isAsc2(array1, len) << endl;

	// cout << getSecond(array1, len) << endl;

	// reverse(array1, len);

	// int array2[6];
	// copy(array1, len, array2, 6);

	int array2[] = { 1, 3, 5, 7, 9, 0, 8, 6, 4, 2 };
	cout << equals(array1, len, array2, sizeof(array2) / sizeof(int)) << endl;

	return 0;
}