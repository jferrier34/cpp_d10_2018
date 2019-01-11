//
// EPITECH PROJECT, 2019
// Victime.cpp
// File description:
// ex00
//

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

Victim::Victim(const std::string &name) : _name(name)
{
        this->_name = name;
        std::cout << "Some random victim called " << this->_name << " just popped!" << std::endl;
}

Victim::~Victim()
{
        std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

const std::string Victim::getName() const
{
        return (this->_name);
}

std::ostream &operator<<(std::ostream &os, Victim const &_victim)
{
    std::cout << "I'm " << _victim.getName() << " and i like otters!" << std::endl;
    return (os);
}

void Victim::getPolymorphed() const
{
    std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}
