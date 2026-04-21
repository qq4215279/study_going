//#include <iostream>
//#include <map>
//using namespace std;
//
//void test_pair() {
//	// pair：将两个数据整合到一起，成为一个整体。
//	//		- 这两个数据的数据类型可以不同
//	//		- 这两个数据，称为一个是键（Key），一个是值（Value）。
//	
//	// 第一种方式构建pair：
//	pair<string, int> p1("chinese", 99);
//	cout << p1.first << endl;
//	cout << p1.second << endl;
//
//	// 第二种方式构建pair：
//	pair<string, int> p2 = make_pair("math", 98);
//	cout << p2.first << endl;
//	cout << p2.second << endl;
//}
//
//// map存储特点：
////		1、存储的元素是一个个的pair，pair中的第一个元素称为“键”，pair中的第二个元素称为“值”。
////		2、存储的所有的键值对，会按照key进行排序。
////		3、map容器中，不允许出现重复的键。（multimap中允许存在重复的键）
////
//// map能够通过迭代器修改元素吗？
////		可以通过迭代器修改值，但是不能修改键。
//
//void printMap(map<string, int>& m) {
//#if 0
//	for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
//		cout << "key = " << (*it).first << ", value = " << (*it).second << '\t';
//	}
//	cout << endl;
//#else
//	for (pair<string, int> p : m) {
//		cout << "key = " << p.first << ", value = " << p.second << '\t';
//	}
//#endif
//}
//
//
//int main() {
//
//	// 1. 构造函数
//	map<string, int> m; 
//	
//	// 2. 插入元素
//	m.insert(pair<string, int>("chinese", 99));			
//	m.insert(make_pair("math", 98));
//	m.insert(map<string, int>::value_type("english", 87));
//	m["history"] = 89;
//	m["history"] = 100;		// 如果添加的键值对，键已经存在了，此时是一个修改操作。用新的值覆盖原来的值。
//
//	// 3. 删除操作
//	// m.erase(m.begin());
//	// m.erase("history");		// 按照键进行删除，删除的一个键值对
//
//	// 4. 查找操作
//	map<string, int>::iterator it1 = m.find("english");		// 查找的具有指定的键的键值对的迭代器
//	cout << m.count("english") << endl;						// 查找有多少个指定键的键值对
//	
//	// 5. 大小操作
//	cout << m.size() << endl;
//	cout << m.empty() << endl;
//
//	printMap(m);
//
//
//
//	return EXIT_SUCCESS;
//}