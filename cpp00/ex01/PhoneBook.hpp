#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <limits>
# include <iomanip>
# include <sstream>
# include <cstdlib>

class PhoneBook{
    private:
	    Contact contacts[8];
	    int num_contacts;
	    int next_index;
    public:
	    PhoneBook();
	    ~PhoneBook();
        
        void    addContact();
        void    searchContact() const;
};

#endif