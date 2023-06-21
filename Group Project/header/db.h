#pragma once

#include <vector>
#include <string>

using namespace std;

enum UserType
{
  NullUser = 0,
  Admin = 1,
  Teacher = 2,
  Parent = 3,
};

enum Gender
{
  Male,
  Female
};

class Student
{
public:
  string name;
  string id;
  string dob;
  Gender gender;

  float math;
  float science;
  float english;
  float writing;
  float reading;
  float other;

  string learningProgress;
};

class Login
{
public:
  string username;
  string password;

  int type;
  string id;
};

class User
{
public:
  Login login;
  int attempts;

  string id;
  string name;
};

extern vector<User> db;
extern User currentlyLogedinUser;