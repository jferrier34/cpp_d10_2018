//
// EPITECH PROJECT, 2019
// Squad.hpp
// File description:
// ex02
//

#ifndef _SQUAD_HPP_
#define _SQUAD_HPP_

#include <iostream>
#include <stdlib.h>

class ISquad {
        public:
                virtual -ISquad() {}
                virtual int getCount() const = 0;
                virtual ISPaceMarine* getUnit(int) = 0;
                virtual int push(ISpaceMarine *) = 0;
};

#endif