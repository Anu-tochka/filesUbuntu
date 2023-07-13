#include "User.h" // Включаем заголовочный файл c описанием класса
#include <fstream>
#include <stdio.h>
#include <iostream>

using namespace std;

User::User(string name, string login, string pass):_name(name), _login(login), _pass(pass)
{
}

User::~User()
{
}

fstream& operator >>(fstream& is, User& obj)
{
	is >> obj._name;
	is >> obj._login;
	is >> obj._pass;
	return is;
}

ostream& operator <<(ostream& os, const User& obj)
{
	os << obj._name;
	os << ' ';
	os << obj._login;
	os << ' ';
	os << obj._pass;
	return os;
}
