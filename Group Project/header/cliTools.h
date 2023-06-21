#pragma once

#include <iostream>

using namespace std;

class GetInput
{
public:
  string getString(string _color = "", string _pre = "");

  double getNumber(string _color = "", string _pre = "");
};

class Utils
{
public:
  void clear();
  void waitForKeyPress();
};

extern GetInput getInput;
extern Utils utils;