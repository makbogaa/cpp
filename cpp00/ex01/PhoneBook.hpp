#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

class PhoneBook 
{
private:
    Contact contacts[8];
    int     index;
    int     total;
    static std::string formatField(std::string str);
public:
    PhoneBook();
    void    addContact(void);
    void    searchContact(void);
    void    displayContact(int i);
};

#endif