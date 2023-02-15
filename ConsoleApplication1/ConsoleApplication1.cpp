#include <iostream>

using namespace std;
string login, password;

int main()
{
	cout << "Please enter your ID: ";
		cin >> login;
		cout << "Please enter your Password: ";
		cin >> password;

		if ((login == "admin")&&(password == "password"))
		{
			cout << "Successfully logged in.";
		}
		else
		{
			cout << "Login or password is incorrect.";
		}
	return 0;
}