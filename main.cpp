#include <iostream>
#include <fstream>
#include <string>
#include <sys/stat.h>
#include "func.h"

using namespace std;

int main() {
    User myUser;
    myUser._name = "nit_IT_A";
    myUser._login = "chipchilinka";
    myUser._pass = "qwerty";

    saveUser(myUser, "user.dat");

    User loadedUser;
    if (loadUser(loadedUser, "user.dat"))
    {
        cout << "���: " << loadedUser._name << endl;
        cout << "�����: " << loadedUser._login << endl;
    }
    return 0;
}
