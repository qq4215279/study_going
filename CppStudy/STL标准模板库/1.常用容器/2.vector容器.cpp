//#include <iostream>
//#include <vector>			// 使用vector的时候，需要先引入头文件
//using namespace std;
//
//
//template<typename E>
//void printVector(vector<E>& vector) {
//	for (E& ele : vector) {
//		cout << ele << ", ";
//	}
//	cout << endl;
//}
//
//
//// vector容器的遍历
//void test01() {
//	// 1. 构造一个vector对象，通过vector的无参构造，构造出来一个空的vector容器
//	vector<int> v;
//	// 2. 添加若干个元素
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	
//	// 3. 迭代器：使用普通指针，依次指向vector中的每一个元素
//	//    begin()：获取到的是vector容器中的首元素的地址
//	//    end()：获取到的是vector容器中的最后一位元素的下一位的指针
//	// vector<int>::iterator it = v.begin();
//	// cout << *it << endl;
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		// 直接输出指针指向的元素
//		// cout << *it << endl;
//		
//		// 可以通过指针，修改元素
//		if (*it == 20) {
//			*it = 200;
//		}
//	}
//
//	// 使用迭代器，遍历vector容器
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;
//	}
//
//	// 使用迭代器遍历容器的时候，可以缩写
//	// 依次将v容器中的每一个元素，给ele进行赋值
//	for (int& ele : v) {
//		if (ele == 200) {
//			ele = 2000;
//		}
//	}
//
//	for (int ele : v) {
//		cout << ele << endl;
//	}
//
//
//	// 希望倒序遍历容器
//	for (vector<int>::iterator it = v.end(); it != v.begin();) {
//		it--;
//		cout << *it << endl;
//	}
//}
//
//// vector的构造函数
//void test02() {
//	// 1. 无参构造函数
//	vector<int> v1;
//
//	// 2. vector(n, ele)
//	//    使用n个ele填充容器
//	vector<int> v2(10, 5);
//	printVector(v2);
//
//	// 3. vector(const vector& v)，拷贝构造函数
//
//	// 4. vector(v.begin(), v.end())
//	vector<int> v3(v2.begin(), v2.begin() + 5);
//	printVector(v3);
//
//	int array[] = { 1, 2, 3, 4, 5 };
//	vector<int> v4(array, array + 3);
//	printVector(v4);
//}
//
//// vector的赋值函数
//void test03() {
//	// assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身。
//	// assign(n, elem);//将n个elem拷贝赋值给本身。
//	// vector& operator=(const vector & vec);//重载等号操作符
//	// swap(vec);// 将vec与本身的元素互换
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//
//	// vector对象构建
//	vector<int> v1;
//	v1.assign(arr, arr + 6);
//	printVector(v1);
//
//	vector<int> v2;
//	v2.assign(5, 10);
//	printVector(v2);
//
//	vector<int> v3;
//	v3 = v2;
//	printVector(v3);
//
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//}
//
//// vector的大小操作
//void test04() {
//	vector<int> v(10, 5);
//
//	// 返回容器中有多少个元素
//	cout << "size = " << v.size() << endl;
//	// 判断容器是否为空
//	cout << "empty = " << v.empty() << endl;
//	// 返回容器的容量 
//	cout << "capacity = " << v.capacity() << endl;
//	// 重新指定容器的长度，如果新的长度小于原来的长度，保留容器中的前指定数量的元素，后面的元素不可见
//	v.resize(5);
//	// 重新指定容器的长度，如果新的长度大于原来的长度，在后面填充默认元素
//	// v.resize(15);
//	// 重新指定容器的长度，如果新的长度大于原来的长度，在后面填充指定元素
//	v.resize(15, 9);
//	cout << "size = " << v.size() << endl;
//	printVector(v);
//}
//
//// vector的数据存取操作
//void test05() {
//	// at(int idx); //返回索引idx所指的数据，如果idx越界，抛出out_of_range异常。
//	// operator[];//返回索引idx所指的数据，越界时，运行直接报错
//	// front();//返回容器中第0个数据元素
//	// back();//返回容器中最后一个数据元素
//
//	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	vector<int> v(array, array + (sizeof(array) / sizeof(int)));
//
//	// 
//	int& ele = v.at(3);
//	cout << ele << endl;
//	ele = 40;
//	printVector(v);
//
//	//
//	int& e = v[5];
//	cout << e << endl;
//	e = 60;
//	printVector(v);
//
//	cout << v.front() << endl;
//	cout << v.back() << endl;
//}
//
//// 数据插入和删除
//void test06() {
//	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	vector<int> v(array, array + (sizeof(array) / sizeof(int)));
//
//	// insert(const_iterator pos, int count,ele);//迭代器指向位置pos插入count个元素ele.
//	// push_back(ele); //尾部插入元素ele
//	// pop_back();//删除最后一个元素
//	// erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素 [start, end)
//	// erase(const_iterator pos);//删除迭代器指向的元素
//	// clear();//删除容器中所有元素
//
//	// 需求：希望在第3位插入元素
//	v.insert(v.begin() + 3, 5, 0);
//	printVector(v);
//
//	v.push_back(20);
//	printVector(v);
//
//	v.pop_back();
//	printVector(v);
//
//	v.erase(v.begin() + 5);
//	printVector(v);
//
//	v.erase(v.begin() + 7, v.begin() + 10);
//	printVector(v);
//
//	v.clear();
//	printVector(v);
//}
//
//// vector小案例：利用swap收缩空间
//void test07() {
//	// capacity: 在内存上开辟了多少个空间
//	// size: 实际容器中存放的元素的数量
//
//	vector<int> v;
//	for (int i = 0; i < 10000; i++) {
//		v.push_back(i);
//	}
//	cout << "size = " << v.size() << endl;
//	cout << "capacity = " << v.capacity() << endl;
//
//	// 使用resize更改容器的元素数量
//	v.resize(10);
//	cout << "size = " << v.size() << endl;
//	cout << "capacity = " << v.capacity() << endl;
//
//	vector<int>(v).swap(v);
//	cout << "size = " << v.size() << endl;
//	cout << "capacity = " << v.capacity() << endl;
//
//#if 0
//	{
//		vector<int> v2(v);
//		cout << "v2 size = " << v2.size() << endl;
//		cout << "v2 capacity = " << v2.capacity() << endl;
//
//		v2.swap(v);
//		cout << "size = " << v.size() << endl;
//		cout << "capacity = " << v.capacity() << endl;
//		cout << "v2 size = " << v2.size() << endl;
//		cout << "v2 capacity = " << v2.capacity() << endl;
//	}
//#endif
//}
//
//int main() {
//	// test01();
//	// test02();
//	// test03();
//	// test04();
//	// test05();
//	// test06();
//	test07();
//
//	return 0;
//}