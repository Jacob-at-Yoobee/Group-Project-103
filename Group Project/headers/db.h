#pragma once

#include "config.h"

class Login
{
public:
  string username;
  string password;

  int tyoe;
};

class dataBase
{

public:
  Login logins[100];
};



