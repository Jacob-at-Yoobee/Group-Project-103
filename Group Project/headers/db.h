#pragma once

#include "config.h"

using namespace std;

enum UserType
{
  NullUser = 0,
  Admin = 1,
  Teacher = 2,
  Parent = 3,
};

class Login
{
public:
  string username;
  string password;

  int type;
  string id;
};

struct User
{
  Login login;
  int attempts;
};


