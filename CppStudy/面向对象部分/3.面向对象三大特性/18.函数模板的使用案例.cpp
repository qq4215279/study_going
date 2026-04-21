//#include <iostream>
//#include <sstream>
//using namespace std;
//
//
//// 需求：定义一个函数模板，实现将一个数组中的元素进行升序排序
//template<typename T>
//void mySort(T* array, int len) {
//	for (int i = 0; i < len - 1; i++) {
//		int minIndex = i;
//		for (int j = i + 1; j < len; j++) {
//			if (array[minIndex] > array[j]) {
//				minIndex = j;
//			}
//		}
//		if (minIndex != i) {
//			T tmp = array[minIndex];
//			array[minIndex] = array[i];
//			array[i] = tmp;
//		}
//	}
//}
//
//// 需求：定义一个函数模板，实现将一个数组中的元素拼接成为字符串返回
////      [1, 2, 3, 4, 5]
//template<typename T>
//string toString(T* array, int len) {
//	if (len == 0 || array == nullptr) {
//		return "[]";
//	}
//	ostringstream oss;
//	oss << "[";
//	for (int i = 0; i < len - 1; i++) {
//		oss << array[i] << ", ";
//	}
//	oss << array[len - 1] << "]";
//
//	return oss.str();
//}
//
//int main() {
//
//	int array1[] = { 1, 3, 5, 7, 9, 0, 8, 6, 4, 2 };
//	int len1 = sizeof(array1) / sizeof(int);
//	cout << toString(array1, len1) << endl;
//	mySort(array1, len1);
//	cout << toString(array1, len1) << endl;
//
//
//	double array2[] = { 9.99, -0.82, 9.82, 0.77, 3.14, 7.66, 8.88, 3.44, 2.11 };
//	int len2 = sizeof(array2) / sizeof(double);
//	cout << toString(array2, len2) << endl;
//	mySort(array2, len2);
//	cout << toString(array2, len2) << endl;
//
//	return 0;
//}