#include "../headers/Menu_login.h"

int MenuLogin::execute()
{
  string username, password;

  utils.clear();

  cout << "Login" << endl
       << endl;

  cout << "Enter username: ";
  username = getInput.getString(C.Green);

  // TODO - hide password

  cout << "Enter password: ";
  password = getInput.getString(C.Red);

  cout << password << endl;

  // TODO - check if username and password match
  cout << C.yellow("Logging in...") << endl;

  for (int i = 0; i < db.size(); i++)
  {
    if (db[i].login.type == NullUser)
    {
      continue;
    }

    if (db[i].login.username != username)
    {
      // cout << C.red(C.bold("Invalid username or password!")) << endl;

      continue;
    }

    if (db[i].attempts >= 3)
    {
      cout << C.red(C.bold("You have exceeded the number of attempts!")) << endl;

      return 0;
    }

    if (db[i].login.password != password)
    {
      cout << C.red(C.bold("Invalid password!")) << endl;

      db[i].attempts++;

      continue;
      ;
    }

    cout << C.green("Logged in!") << endl;

    cout << "Welcome, " << db[i].login.id << "!" << endl;

    currentlyLogedinUser = db[i];

    utils.waitForKeyPress();
    utils.clear();
    return db[i].login.type;
  }

  cout << C.red(C.bold("Invalid username or password!")) << endl;

  return 0;
}