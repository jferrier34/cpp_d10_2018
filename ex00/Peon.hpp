//
// EPITECH PROJECT, 2019
// Peon.hpp
// File description:
// ex00
//

#ifndef _PEON_HPP_
#define _PEON_HPP_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim{
        public:
                Peon(const std::string &name);
                ~Peon();
                const std::string getName() const;
                void getPolymorphed() const;
};


#endif
