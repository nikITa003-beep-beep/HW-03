#pragma once
#include "Clasess.cpp"
using namespace std;

void saveUser(const User& user, const string& filename);

bool loadUser(User& user, const string& filename);