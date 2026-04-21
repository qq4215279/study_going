#include <iostream>
using namespace std;
#include "QFMutableArray.hpp"
#include "QFMutableList.hpp"


void arrayTest() {

	QFMutableArray<int>* mutableArray = new QFMutableArray<int>();

	// ≤‚ ‘
	for (int i = 0; i < 10; i++) {
		mutableArray->add(i);
	}
	cout << mutableArray->str() << endl;

	// ≤‚ ‘
	mutableArray->add(3, 100);
	cout << mutableArray->str() << endl;

	// ≤‚ ‘
	cout << mutableArray->remove(3) << endl;
	cout << mutableArray->str() << endl;

	// ≤‚ ‘
	cout << mutableArray->index(17) << endl;

	// ≤‚ ‘
	cout << mutableArray->removeElement(1) << endl;
	cout << mutableArray->str() << endl;

	// mutableArray->clear();
	// cout << mutableArray->str() << endl;

	// ≤‚ ‘
	cout << mutableArray->set(5, 50) << endl;
	cout << mutableArray->str() << endl;

	cout << mutableArray->get(5) << endl;

	// »›∆˜÷–µƒ‘™Àÿ±È¿˙
	int len = mutableArray->length();
	for (int i = 0; i < len; i++) {
		cout << mutableArray->get(i) << ", ";
	}

	// ≤‚ ‘
	mutableArray->sort();
	cout << mutableArray->str() << endl;

}

int main() {

	QFMutableList<int>* list = new QFMutableList<int>();
	cout << list->str() << endl;

	// ≤‚ ‘
	for (int i = 0; i < 10; i++) {
		list->add(i);
	}
	cout << list->str() << endl;

	// ≤‚ ‘
	list->add(10, 400);
	cout << list->str() << endl;

	// ≤‚ ‘
	cout << list->remove(5) << endl;
	cout << list->str() << endl;

	cout << list->index(7) << endl;

	cout << list->removeElement(8) << endl;
	cout << list->str() << endl;

	// list->clear();
	// cout << list->str() << endl;

	cout << list->set(3, 300) << endl;
	cout << list->str() << endl;
	cout << list->get(3) << endl;

	int len = list->length();
	for (int i = 0; i < len; i++) {
		cout << list->get(i) << endl;
	}

	list->sort();
	cout << list->str() << endl;

	return EXIT_SUCCESS;
}