#include "func.h"
#include "main.cpp"
using namespace std;

void saveUser(const User& user, const string& filename)
{
    ofstream file(filename);
    if (file.is_open())
    {
        file << user._name << endl;
        file << user._login << endl;
        file << user._pass << endl;
        file.close();
    }
}

bool loadUser(User& user, const string& filename)
{
    ifstream file(filename);
    if (file.is_open())
    {
        getline(file, user._name);
        getline(file, user._login);
        getline(file, user._pass);
        file.close();
        return true;
    }
    else
    {
        return false;
    }
}
