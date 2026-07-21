#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cctype>

class Contact{
    private:
        std::string _lastName;
        std::string _firstName;
        std::string _nickName;
        std::string _darkestSecret;
        std::string _phoneNumber;

    public:
        Contact();
        ~Contact();

        //Getters
        const std::string getFirstName() const;        
        const std::string getLastName() const;
        const std::string getNickname() const;
        const std::string getDarkestSecret() const;
        const std::string getPhoneNumber() const;
        //Setters
	    void setFirstName(const std::string& firstName);
	    void setLastName(const std::string& lastName);
	    void setNickName(const std::string& nickName);
	    void setPhoneNumber(const std::string& phoneNumber);
	    void setDarkestSecret(const std::string& darkestSecret);
    
        void displayFull() const;
};

#endif