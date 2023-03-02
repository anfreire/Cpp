#include "header.hpp"

bool	global::checkInput(string input)
{
	if (input.length() < 1)
		return false;
	if (input.length() == 1 && input[0] == '\n')
		return false;
	size_t	allSpaces = 0;
	for (size_t i = 0; i < input.length(); i++)
	{
		if (input[i] == ' ')
			allSpaces++;
	}
	if (allSpaces == input.length())
		return false;
	return true;
}

string	global::ft_itoa(int nbr)
{
	string	newString;

	if (nbr < 0)
	{
		newString = "-";
		nbr *= -1;
	}
	while (nbr > 0)
	{
		newString += (nbr % 10) + '0';
		nbr /= 10;
	}
	return newString;
}

string	global::lowerCase(string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	return str;
}

bool	global::isNumber(string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return false;
	}
	return true;
}

int main(void)
{
	PhoneBook	phoneBook;
	string		command;

	while (1)
	{
		cout << "+-------------------------------------------+" << endl;
		cout << "+      AWESOME     PHONEBOOK      MENU      +" << endl;
		cout << "+-------------------------------------------+" << endl;
		cout << "| Commands:|    ADD   |  SEARCH  |   EXIT   |" << endl;
		cout << "+-------------------------------------------+" << endl << endl;
		cout << "Enter a command: ";
		getline(cin, command);
		if (global::lowerCase(command) == "add")
			phoneBook.add();
		else if (global::lowerCase(command) == "search")
			phoneBook.search();
		else if (global::lowerCase(command) == "exit")
			phoneBook.exit();
		else
			cout << "Invalid command!" << endl << endl;
	}
	return 0;
}