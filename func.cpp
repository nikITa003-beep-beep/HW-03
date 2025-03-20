#include "func.h"
#include "main.cpp"

void saveUser(const User& user, const std::string& filename)
{
    ofstream file(filename);
    if (file.is_open())
    {
        file << user._name << std::endl;
        file << user._login << std::endl;
        file << user._pass << std::endl;
        file.close();
    }
}

bool loadUser(User& user, const std::string& filename)
{
    ifstream file(filename);
    if (file.is_open())
    {
        std::getline(file, user._name);
        std::getline(file, user._login);
        std::getline(file, user._pass);
        file.close();
        return true;
    }
    else
    {
        return false;
    }
}
