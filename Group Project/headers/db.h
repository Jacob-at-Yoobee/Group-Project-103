#pragma once

#include "config.h"

class Login
{
public:
  string username;
  string password;

  int tyoe;
};

struct item
{
  Login login;
};

class dataBase
{

public:
  Login logins[100];
};

vector<item> db;
