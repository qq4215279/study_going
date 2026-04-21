#include <iostream>

// 注意事项：
//		无论是if还是else，后面的大括号中如果有且只有一条语句的情况下，此时的大括号是可以省略不写的！
//		但是，实际情况下，我们在进行程序开发的时候，这里的大括号一般不省略！！！
//		因为如果省略了大括号，会对程序的可读性造成一定影响，也容易出现BUG！！！


using namespace std;

int main4() {

	char c = '0';
	cout << "请输入一个字符: ";
	cin >> c;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
		cout << "是一个字母" << endl;
	else 
		cout << "不是一个字母" << endl;

	return 0;
}