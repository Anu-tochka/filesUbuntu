#pragma once 

class User
{
	string _name;
	string _login;
	string _pass;

public:
	User(string name, string login, string pass):_name(name), _login(login), _pass(pass);
	~User();
	friend fstream& operator >>(fstream& is, User& obj);
	friend ostream& operator <<(ostream& os, const User& obj);
};