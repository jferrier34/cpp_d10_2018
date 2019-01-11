//
// EPITECH PROJECT, 2019
// Sorcerer.cpp
// File description:
// ex00
//

 #include "Sorcerer.hpp"
 #include "Victim.hpp"

 Sorcerer::Sorcerer(const std::string &name, const std::string &title) : _name(name), _title(title)
 {
         this->_name = name;
         this->_title = title;
         std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
 }

 Sorcerer::~Sorcerer()
 {
         std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
 }

const std::string Sorcerer::getName() const {
         return (this->_name);
 }

 const std::string Sorcerer::getTitle() const {
         return (this->_title);
 }

void Sorcerer::polymorph(const Victim &_victim) const
{
        _victim.getPolymorphed();
}


 std::ostream &operator << (std::ostream &os, Sorcerer const &sorcier)
 {
         //to modify
     os << "I am " << sorcier.getName() << ", " << sorcier.getTitle() << ", and I like ponies!" << std::endl;
     return (os);
 }


