#include "Contact.hpp"

Contact ::Contact()
{}

Contact ::~Contact()
{}

const std::string& Contact::getFirstName() const
{
	return (this->_firstName);
}

const std::string& Contact::getLastName() const
{
    return (this->_lastName);
}

const std::string& Contact::getNickname() const
{
    return (this->_nickName);
}

const std::string& Contact::getDarkestSecret() const
{
    return (this->_darkestSecret);
}

const std::string& Contact::getPhoneNumber() const
{
    return (this->_phoneNumber);
}

void Contact::setFirstName(const std::string& firstName)
{
	this->_firstName = firstName;
}

void Contact::setLastName(const std::string& lastName)
{
	this->_lastName = lastName;
}

void Contact::setNickName(const std::string& nickName)
{
	this->_nickName = nickName;
}

void Contact::setPhoneNumber(const std::string& phonebook)
{
	this->_phoneNumber = phonebook;
}

void Contact::setDarkestSecret(const std::string& darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}

void Contact::displayContactInfo() const 
{
	std::cout << "--- Contacts details Info ---" << std::endl;
    std::cout << "First name:    " << _firstName << std::endl;
    std::cout << "Last name:     " << _lastName << std::endl;
    std::cout << "Nickname:      " << _nickName << std::endl;
	std::cout << "Phone Number:  " << _phoneNumber << std::endl;
	std::cout << "Secret:        " << _darkestSecret << std::endl;
    std::cout << "-----------------------------" << std::endl;
}