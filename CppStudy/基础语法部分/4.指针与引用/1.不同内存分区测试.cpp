#include <iostream>

using namespace std;

// 全局区：
// 全局变量、常量，静态变量、常量
// &取地址符，获取变量的地址

int g_a = 10;
const int g_b = 10;
static int g_s_a = 10;
static const int g_s_b = 10;

int main1() {

	int a = 10;
	const int b = 10;

	static int s_a = 10;
	static const int s_b = 10;


	cout << &g_a << endl;
	cout << &g_b << endl;
	cout << &g_s_a << endl;
	cout << &g_s_b << endl;

	cout << &a << endl;
	cout << &b << endl;
	cout << &s_a << endl;
	cout << &s_b << endl;


	return 0;
}