#include "../headers/cliTools.h"

Color::Color()
{
  Red = "\033[31m";
  Green = "\033[32m";
  Yellow = "\033[33m";
  Blue = "\033[34m";
  Magenta = "\033[35m";
  Cyan = "\033[36m";

  BrightRed = "\033[91m";
  BrightGreen = "\033[92m";
  BrightYellow = "\033[93m";
  BrightBlue = "\033[94m";
  BrightMagenta = "\033[95m";
  BrightCyan = "\033[96m";

  Reset = "\033[0m";
  Bold = "\033[1m";
}

string Color::red(string x)
{
  return Red + x + Reset;
}
string Color::green(string x)
{
  return Green + x + Reset;
}
string Color::yellow(string x)
{
  return Yellow + x + Reset;
}
string Color::blue(string x)
{
  return Blue + x + Reset;
}
string Color::magenta(string x)
{
  return Magenta + x + Reset;
}
string Color::cyan(string x)
{
  return Cyan + x + Reset;
}

string Color::brightRed(string x)
{
  return BrightRed + x + Reset;
}
string Color::brightGreen(string x)
{
  return BrightGreen + x + Reset;
}
string Color::brightYellow(string x)
{
  return BrightYellow + x + Reset;
}
string Color::brightBlue(string x)
{
  return BrightBlue + x + Reset;
}
string Color::brightMagenta(string x)
{
  return BrightMagenta + x + Reset;
}
string Color::brightCyan(string x)
{
  return BrightCyan + x + Reset;
}

string Color::bold(string x)
{
  return Bold + x + Reset;
}

Color internalColor;

string GetInput::getString(string _color, string _pre)
{
  cout << _color << _pre;

  cin.clear();
  string input = "";
  getline(cin, input);

  if (input.length() == 0)
  {
    cout << internalColor.red("Invalid input. Please enter a string: ");
    input = getString(_color, _pre);
  }
  cout << internalColor.Reset;

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
    cout << internalColor.red("Invalid input. Please enter a number: ");
    number = getNumber(_color, _pre);
  }
  cout << internalColor.Reset;

  return number;
}
