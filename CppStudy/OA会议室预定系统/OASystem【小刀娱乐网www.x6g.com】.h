#pragma once
class OASystem
{
private:
	static OASystem* _instance;
	OASystem();

public:
	static OASystem* getInstance();

	void showMainpage();

};

