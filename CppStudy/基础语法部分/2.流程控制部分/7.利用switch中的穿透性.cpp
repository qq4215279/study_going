#include <iostream>

using namespace std;

int main7() {

	// 需求：从控制台上输入一个年、月、日，输出这一天是这一年的第几天
	// 例如：输入 2022 7 7 输出 2022年7月7日是2022年的第xxx天

	int year = 0, month = 0, day = 0;
	cout << "请输入一个年: ";
	cin >> year;
	cout << "请输入一个月: ";
	cin >> month;
	cout << "请输入一个日: ";
	cin >> day;

	// 定义一个变量，用来记录总的天数
	int days = day;

	// 1: 
	// 2: 1(31)
	// 3: 1(31) + 2(28)
	// 4: 1(31) + 2(28) + 3(31)
	// ...
	// 11: 1(31) + 2(28) + 3(31) + 4(30) ... + 10(31)
	// 12: 1(31) + 2(28) + 3(31) + 4(30) ... + 10(31) + 11(30)

	switch (month) {
		case 12:
			days += 30;
		case 11:
			days += 31;
		case 10:
			days += 30;
		case 9:
			days += 31;
		case 8:
			days += 31;
		case 7:
			days += 30;
		case 6:
			days += 31;
		case 5:
			days += 30;
		case 4:
			days += 31;
		case 3:
			days += (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 29 : 28;
		case 2:
			days += 31;
	}

	cout << year << "年" << month << "月" << day << "日是" << year << "年的第" << days << "天" << endl;


	return 0;
}