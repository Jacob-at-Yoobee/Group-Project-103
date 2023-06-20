#include "../headers/Menu_login.h"
#include "../headers/config.h"
// #include <unistd.h>

using namespace std;

int MenuLogin::execute()
{
  string username, password;

  Clear();

  cout << "Login" << endl
       << endl;

  cout << "Enter username: ";
  username = getInput.getString(C.Green);

  // TODO - hide password

  cout << "Enter password: ";
  password = getInput.getString(C.Red);

  cout << password << endl;

  // TODO - check if username and password match

  cout << "Logging in..." << endl;

  return 0;
}