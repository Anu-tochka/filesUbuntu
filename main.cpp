#include "User.h"
#include "Message.h"
#include <fstream>
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

int main()
{
    User obj("Nikita","user1","12345");
	User obj2("Anna","user2","qwerty");
	User obj3("Marta","user3","uuu123");
    Message mes1("Hello","Nikita","Marta");
    Message mes2("Hello","Marta","Nikita");
    Message mes3("Hello","Nikita","Anna");
	ofstream usfile = std::ofstream("User.txt"); 
	fs::permissions("User.txt",
        fs::perms::owner_all,
        fs::perm_options::add);
	ofstream mesfile = std::ofstream("Message.txt");  
	fs::permissions("Message.txt",
        fs::perms::owner_all,
        fs::perm_options::add);
	usfile << obj << endl;
    usfile << obj2 << endl;
	usfile << obj3 << endl;
	mesfile << mes << endl;
    mesfile << mes2 << endl;
	mesfile << mes3 << endl;
	usfile.seekg(0, ios_base::beg);
    usfile >> obj;
	cout << obj << endl;
    usfile >> obj2;
	cout << obj2 << endl;
    usfile >> obj3;
	cout << obj3 << endl;
	mesfile.seekg(0, ios_base::beg);
    mesfile >> mes;
	cout << mes << endl;
    mesfile >> mes2;
	cout << mes2 << endl;
    mesfile >> mes3;
	cout << mes3 << endl;
    return 0;
}