#include <iostream>

using namespace std;

int main5() {

	// switch-case的基础使用

	int season = 0;
	cout << "请输入一个季节（1-4）：";
	cin >> season;

	switch (season) {
		case 1:
			cout << "春暖花开" << endl;
			break;
		case 2:
			cout << "闷热" << endl;
			break;
		case 3:
			cout << "秋高气爽" << endl;
			break;
		case 4:
			cout << "滴水成冰" << endl;
			break;
		default:
			cout << "错误的季节" << endl;
			break;
	}


	return 0;
}