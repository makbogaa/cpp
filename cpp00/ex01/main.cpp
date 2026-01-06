#include "PhoneBook.hpp"
#include <iostream>

int main()
{
    PhoneBook phoneBook;
    std::string command;

    std::cout << "Welcome to the PhoneBook application!" << std::endl;
    std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;

    while (true)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, command);
        if (std::cin.eof())
        {
            std::cin.clear();
            std::cout << "\nEOF detected. Exiting program." << std::endl;
            break;
        }
        if (command == "ADD")
            phoneBook.addContact();
        else if (command == "SEARCH")
            phoneBook.searchContact();
        else if (command == "EXIT")
        {
            std::cout << "Exiting PhoneBook application. Goodbye!" << std::endl;
            break;
        }
        else
            std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
    }
    return (0);
}