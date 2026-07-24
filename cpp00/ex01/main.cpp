
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook myPhoneBook;
	std::string command;
	

	std::cout << "Welcome to My Awesome PhoneBook!" << std::endl;

	while (true) 
	{
		std::cout << "\nEnter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);

		if (std::cin.eof())
		{
			std::cout << "\nEOF detected. Exiting the program." << std::endl;
			break;
		}
		if (command == "ADD")
		{
			myPhoneBook.addContact();
		}
		else if (command == "SEARCH")
		{
			myPhoneBook.searchContact();
		}
		else if (command == "EXIT")
		{
			std::cout << "Exiting, bye" << std::endl;
			break;
		}
		else
		{
			std::cout << "Invalid commnand. Please, use ADD, SEARCH or EXIT." << std::endl;
		}
	}
	return (0);
}