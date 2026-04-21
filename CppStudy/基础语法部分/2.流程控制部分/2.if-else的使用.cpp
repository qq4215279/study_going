#include <iostream>

using namespace std;

int main2() {

	// 案例1：在控制台上输入一个成绩，如果及格了，输出“及格”；如果不及格，输出“不及格”
	/*
	int score = 0;
	cout << "请输入一个成绩: ";
	cin >> score;

	if (score >= 60) {
		cout << "及格" << endl;
	}
	else {
		cout << "不及格" << endl;
	}
	*/

	// 案例2：在控制台上输入一个性别，如果是男，输出“永远18岁”；如果不是男，输出“永远16岁”
	/*
	string gender = "";
	cout << "请输入一个性别: ";
	cin >> gender;

	if (gender == "男") {
		cout << "永远18岁" << endl;
	}
	else {
		cout << "永远16岁" << endl;
	}
	*/

	// 案例3：买彩票，如果中奖了，买房、买车、非洲旅游！否则就继续搬砖。
	/*
	bool isWin = false;
	cout << "你是否中彩票了: ";
	cin >> isWin;

	if (isWin) {
		cout << "买房！买车！非洲旅游！！！" << endl;
	}
	else {
		cout << "继续搬砖" << endl;
	}
	*/

	// 案例4：在控制台上输入一个字符，如果是字母，输出“字母”，否则就输出“不是字母”
	char c = '0';
	cout << "请输入一个字符: ";
	cin >> c;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
		cout << "是一个字母" << endl;
	}
	else {
		cout << "不是一个字母" << endl;
	}

	return 0;
}