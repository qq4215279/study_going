#include "OADataCenter.h"
#include <algorithm>

OADataCenter* OADataCenter::_instance = new OADataCenter();

OADataCenter::OADataCenter() {
    admins = new vector<OAAdmin*>();
    admins->push_back(new OAAdmin("admin", "admin"));

    users = new vector<OAUser*>();
    users->push_back(new OAUser("xiaoming", "123456", "行政部"));
    users->push_back(new OAUser("xiaohui", "123456", "人力资源部"));
}

OADataCenter* OADataCenter::getInstance()
{
    return _instance;
}

OADataCenter::~OADataCenter()
{
    if (admins != nullptr) {
        delete admins;
        admins = nullptr;
    }

    if (users != nullptr) {
        delete users;
        users = nullptr;
    }
}

struct AdminCheck {
    void operator()(OAAdmin* a) {

    }
};

OAAdmin* OADataCenter::checkAdminLogin(string username, string password)
{
   
}

