//
// EPITECH PROJECT, 2019
// Sorcerer.hpp
// File description:
// ex00
//

#ifndef _SORCERER_HPP_
#define _SORCERER_HPP_
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include "Victim.hpp"

class Sorcerer {
protected: 
                std::string _name;
                std::string _title;
        public:
                Sorcerer(const std::string &name, const std::string &title);
                ~Sorcerer();
                const std::string getName() const;
                const std::string getTitle() const;
                void polymorph(const Victim &_victim) const;
};

std::ostream &operator << (std::ostream &os, Sorcerer const &);

#endif
