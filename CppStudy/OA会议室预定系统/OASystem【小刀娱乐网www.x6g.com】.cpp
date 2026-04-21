#include "OASystem.h"
#include <iostream>
#include "OAUtils.h"
using namespace std;

OASystem::OASystem() = default;
OASystem* OASystem::_instance = nullptr;

OASystem* OASystem::getInstance()
{
    if (_instance == nullptr) {
        _instance = new OASystem();
    }
    return _instance;
}

// flag: 身份的标识
// 1：管理员，0：普通用户
void showLogin(int flag) {

    system("cls");

    if (flag) {
        cout << "欢迎尊贵的管理员登录" << endl;
    }
    else {
        cout << "欢迎登录" << endl;
    }

    string username, password;
    cout << "请输入用户名:";
    cin >> username;
    cout << "请输入密码:";
    cin >> password;

    system("pause");
}

void OASystem::showMainpage()
{
    while (1) {
        cout << "欢迎使用千锋OA会议室预定系统" << endl;
        cout << "1. 管理员登录" << endl;
        cout << "2. 普通用户登录" << endl;
        cout << "0. 退出系统" << endl;
        cout << "请输入您的操作：";

        // 读取用户在控制台上输入的整型数字
        int choice = OAUtils::getNumberInput();

        if (choice == 0) {
            break;
        }
        else if (choice == 1) {
            showLogin(1);
        }
        else if (choice == 2) {
            showLogin(0);
        }

        system("pause");
        system("cls");
    }
}

