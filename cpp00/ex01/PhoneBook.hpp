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
        int maxId = 8;
        int nextId;

    public:
        PhoneBook();
        ~PhoneBook();

        void add_contact();
};

#endif