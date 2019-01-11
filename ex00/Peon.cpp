//
// EPITECH PROJECT, 2019
// Peon.cpp
// File description:
// ex00
//

#include "Peon.hpp"
#include "Victim.hpp"

Peon::Peon(const std::string &name) : Victim(name)
{
        std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
        std::cout << "Bleuark..." << std::endl;
}

const std::string Peon::getName() const
{
        return (this->_name);
}

void Peon::getPolymorphed() const
{
        std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
