#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact() {}

void Contact::setContact(void)
{
    do {
        std::cout << "Enter first name: ";
        std::getline(std::cin, first_name);
        if (first_name.empty())
            std::cout << "First name cannot be empty. Please try again." << std::endl;
    } while (first_name.empty());

    do {
        std::cout << "Enter last name: ";
        std::getline(std::cin, last_name);
        if (last_name.empty())
            std::cout << "Last name cannot be empty. Please try again." << std::endl;
    } while (last_name.empty());

    do {
        std::cout << "Enter nickname: ";
        std::getline(std::cin, nickname);
        if (nickname.empty())
            std::cout << "Nickname cannot be empty. Please try again." << std::endl;
    } while (nickname.empty());

    do {
        std::cout << "Enter phone number: ";
        std::getline(std::cin, phone_number);
        if (phone_number.empty())
            std::cout << "Phone number cannot be empty. Please try again." << std::endl;
    } while (phone_number.empty());

    do {
        std::cout << "Enter darkest secret: ";
        std::getline(std::cin, darkest_secret);
        if (darkest_secret.empty())
            std::cout << "Darkest secret cannot be empty. Please try again." << std::endl;
    } while (darkest_secret.empty());
}

void    Contact::set_first_name(std::string str) { first_name = str; }
void    Contact::set_last_name(std::string str) { last_name = str; }
void    Contact::set_nickname(std::string str) { nickname = str; }
void    Contact::set_phone_number(std::string str) { phone_number = str; }
void    Contact::set_darkest_secret(std::string str) { darkest_secret = str; }

std::string Contact::get_first_name(void) { return first_name; }
std::string Contact::get_last_name(void) { return last_name; }
std::string Contact::get_nickname(void) { return nickname; }
std::string Contact::get_phone_number(void) { return phone_number; }
std::string Contact::get_darkest_secret(void) { return darkest_secret; }

std::string Contact::getFirstName(void) { return first_name; }
std::string Contact::getLastName(void) { return last_name; }
std::string Contact::getNickname(void) { return nickname; }
std::string Contact::getPhoneNumber(void) { return phone_number; }
std::string Contact::getDarkestSecret(void) { return darkest_secret; }