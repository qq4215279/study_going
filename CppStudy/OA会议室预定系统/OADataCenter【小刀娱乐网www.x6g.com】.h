#pragma once
#include <iostream>
#include <vector>
#include "OAAdmin.h"
#include "OAUser.h"
using namespace std;

class OADataCenter
{
private:
	vector<OAAdmin*>* admins;
	vector<OAUser*>* users;
	
	static OADataCenter* _instance;
	OADataCenter();

public:
	static OADataCenter* getInstance();
	~OADataCenter();


	// 验证管理员登录
	OAAdmin* checkAdminLogin(string username, string password);
	// 
	// 验证用户登录

};

