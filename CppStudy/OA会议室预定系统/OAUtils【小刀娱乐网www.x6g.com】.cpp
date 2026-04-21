#include "OAUtils.h"
#include <iostream>
using namespace std;

int OAUtils::getNumberInput()
{
    int c = 0;
    cin >> c;
    while (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> c;
    }
    return c;
}
