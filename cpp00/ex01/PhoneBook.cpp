#include "PhoneBook.hpp"

static void printFormatedField(const std::string& field)
{
	if (field.length() > 12)
		std::cout << std::right << std::setw(12) << (field.substr(0, 10) + "|");
	else
		std::cout << std::right << std::setw(12) << field + "|";
}

void PhoneBook::searchContact() const 
{
	int			i;
	int			index_to_display;
	std::string	line_input;
	
	if (this->num_contacts == 0)
	{
		std::cout << "The phonebook is empty, please input some contacts." << std::endl;
		return;
	}
	std::cout << "--- Contacts on the phonebook ---" << std::endl;
	std::cout << std::right << std::setw(12) << "ID|";
	std::cout << std::right << std::setw(12) << "FirstName|";
	std::cout << std::right << std::setw(12) << "LastName|";
	std::cout << std::right << std::setw(12) << "Nickname|" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;

	for (i = 0; i < this->num_contacts; i++)
	{
		std::cout << std::right << std::setw(11) << i << "|";
		printFormatedField(this->contacts[i].getFirstName());
		printFormatedField(this->contacts[i].getLastName());
		printFormatedField(this->contacts[i].getNickname());
		std::cout << std::endl;
	}
	std::cout << "------------------------------------------------" << std::endl;
	
	while (true)
	{
		std::cout << "Introduce the ID of the contact you want to see (Press any letter to cancel):";
		if (!std::getline(std::cin, line_input))
		{
			std::cout << "EOF detected. Canceling search." << std::endl;
			return;
		}
		if (line_input.empty())
		{
			std::cout << "This field can't be empty. Please, try again." << std::endl;
			continue;
		}

		std::stringstream ss(line_input);
		ss >> index_to_display;
		if (ss.fail() || !ss.eof())
		{
			std::cout << "Non numeric entry, canceling the search." << std::endl;
			return;
		}
		
		if (index_to_display >= 0 && index_to_display < num_contacts)
		{
			contacts[index_to_display].displayContactInfo();
			return;
		}
		else
		{
			std::cout << "Invalid ID. Pleas, please enter a number between 0 and " << num_contacts - 1 << "." << std::endl;
		}
	}
}

static std::string getNonEmptyInput(const std::string& prompt)
{
	std::string input;

	while (true)
	{
		std::cout << prompt;
		if (!std::getline(std::cin, input))
		{
			//This is for detecting the EOF(End Of File), detecting the  Ctrl + D
			std::cout << "\n EOF detected. Exiting the input mode" << std::endl;
			exit(0);
		}

		if (input.empty())
			std::cout << "The field can't be empty. Please try again." << std::endl;
		else
			return input;
	}
}

PhoneBook::PhoneBook() : num_contacts(0), next_index(0)
{
	std::cout << "PhoneBook created. Everything is ready" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Phonebook destroyed, all the contacts have been deleted" << std::endl;
}

void PhoneBook::addContact()
{
	Contact	tmp_contact;

	std::cout << "--- Adding a new contact ---" << std::endl;
	tmp_contact.setFirstName(getNonEmptyInput("First Name: "));
	tmp_contact.setLastName(getNonEmptyInput("Last Name: "));
	tmp_contact.setNickName(getNonEmptyInput("Nick name: "));
	tmp_contact.setPhoneNumber(getNonEmptyInput("Phone number: "));
	tmp_contact.setDarkestSecret(getNonEmptyInput("Secret: "));

	this->contacts[next_index] = tmp_contact;
	if (num_contacts < 8)
		num_contacts++;
	next_index = (next_index + 1) % 8;

	std::cout << "Contact added correctly." << std::endl;
	std::cout << "Total of contacts added: " << this->num_contacts << std::endl;
}