#include "User.h"
#include "Message.h"
#include <iostream> 
#include <stdio.h>
#include <fstream>

using namespace std;

Message::Message(string text, string sender, string receiver):string _text, string _sender, string _receiver
{
   
}

Message::~Message()
{
}

fstream& operator >>(fstream& is, User& obj)
{
	is >> obj._text;
	is >> obj._sender;
	is >> obj._receiver;
	return is;
}

ostream& operator <<(ostream& os, const User& obj)
{
	os << obj._text;
	os << ' ';
	os << obj._sender;
	os << ' ';
	os << obj._receiver;
	return os;
}