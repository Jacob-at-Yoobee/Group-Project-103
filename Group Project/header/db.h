#pragma once

#include <vector>
#include <string>

using namespace std;

enum UserType
{
  NullUser,
  Admin,
  Teacher,
  Parent,
};

enum Gender
{
  Male,
  Female
};

class Login
{
public:
  string username;
  string password;

  string id;
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

class ClassRoom
{
public:
  Student students[30];
  int classRoomNumber;
};

class Teacher
{
  string name;
  string id;
  ClassRoom classRoom;
  Login login;
};

class Parent
{
  string name;
  string id;
  Login login;

  string email;
  string dob;

  vector<Student> children;
};

class Admin
{
  string name;
  string id;
  Login login;
};

class User
{
public:
  Login login;
  int attempts;

  int type;

  class ::Parent parent;
  class ::Teacher teacher;
  class ::Admin admin;

  string id;
  string name;
};

extern vector<User> db;
extern User currentlyLogedinUser;