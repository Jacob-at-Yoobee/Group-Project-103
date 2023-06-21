#include "../header/cliTools.h"
#include "../header/color.h"

string GetInput::getString(string _color, string _pre)
{
  cout << _color << _pre;

  cin.clear();
  string input = "";
  getline(cin, input);

  if (input.length() == 0)
  {
    cout << C.red("Invalid input. Please enter a string: ");
    input = getString(_color, _pre);
  }
  cout << C.Reset;

  return input;
}

double GetInput::getNumber(string _color, string _pre)
{
  cout << _color << _pre;

  cin.clear();
  string input;
  getline(cin, input);

  double number = 0;

  try
  {
    number = stod(input);
  }
  catch (const exception &e)
  {
    cout << C.red("Invalid input. Please enter a number: ");
    number = getNumber(_color, _pre);
  }
  cout << C.Reset;

  return number;
}

void Utils::clear() // clear the console
{
#if defined _WIN32
  system("cls");
#elif defined(__LINUX__) || defined(__gnu_linux__) || defined(__linux__) || defined(__APPLE__)
  system("clear");
#endif
}

void Utils::waitForKeyPress()
{
  cout << "Press any key to continue...";
  cin.get();
}

GetInput getInput;
Utils utils;
