#include <iostream>
using namespace std;

int main9() {

	// 需要在控制台上输入一个整型的数字，如果用户在控制台上输入的不正确，让用户重复输入，直到输入正确为止。
	int number = 0;

	cout << "请输入一个整型的数字: ";
	cin >> number;
	while (cin.fail()) {
		cout << "输入错误，重新输入: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> number;
	}
	cout << "number = " << number << endl;

	return 0;
}