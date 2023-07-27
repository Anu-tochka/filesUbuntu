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
    client(Message mes1("Hello","Nikita","Marta"));
    server(Message mes1("Hello","Nikita","Marta"));
    client(Message mes3("Hello","Nikita","Anna"));
    server(Message mes3("Hello","Nikita","Anna"));
    return 0;
}
