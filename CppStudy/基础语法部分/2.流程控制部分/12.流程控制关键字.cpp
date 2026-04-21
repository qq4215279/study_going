#include <iostream>

using namespace std;

int main12() {

	// break: 放在循环中，表示立即结束循环，无论条件是否成立
	//        如果是在嵌套的循环中，只能结束当前这一层的循环
	/*
	for (int i = 0; i < 10; i++) {
		cout << i << endl;
		if (i == 5) {
			break;
		}
	}
	*/

	/*
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "i = " << i << ", j = " << j << endl;
			if (i == 2) {
				break;
			}
		}
	}
	*/

	 
	
	// continue
	/*
	for (int i = 0; i < 10; i++) {
		if (i == 3) {
			continue;	// 从这里开始，循环体中之后的代码不再执行，立即执行迭代部分的代码，继续判断循环条件是否成立
		}
		cout << i << endl;
	}
	*/


	// goto
label1:
	cout << 1 << endl;
	goto label3;

label2:
	cout << 2 << endl;
	goto label5;

label3:
	cout << 3 << endl;

label4:
	cout << 4 << endl;
	goto label2;

label5:
	cout << "end" << endl;



	return 0;
}