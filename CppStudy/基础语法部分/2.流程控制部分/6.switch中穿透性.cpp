#include <iostream>

using namespace std;

int main6() {

	// 指的是，当switch的变量和某一个case值匹配上之后，将会跳过后续的case或者default的匹配，直接向后穿透。

	int season = 0;
	cout << "请输入一个季节（1-4）：";
	cin >> season;

	switch (season) {
		case 1:
			cout << "春暖花开" << endl;
		case 2:
			cout << "闷热" << endl;
			break;
		case 3:
			cout << "秋高气爽" << endl;
			break;
		case 4:
			cout << "滴水成冰" << endl;
		default:
			cout << "错误的季节" << endl;
	}

	return 0;
}