#pragma once
#include "Clasess.cpp"
void saveUser(const User& user, const std::string& filename);

bool loadUser(User& user, const std::string& filename);