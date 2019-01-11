//
// EPITECH PROJECT, 2019
// Victime.hpp
// File description:
// ex00
//

#ifndef _VICTIME_HPP_
#define _VICTIME_HPP_
#include <string.h>
#include <stdlib.h>
#include <iostream>

class Victim {
        protected:
                std::string _name;

        public:
                Victim(const std::string &name);
                ~Victim();
                const std::string getName() const;
                virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &os, Victim const &_victim);

#endif
