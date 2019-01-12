//
// EPITECH PROJECT, 2019
// TacticalMarine.hpp
// File description:
// ex02
//

#ifndef _TACTICALMARINE_HPP_
#define _TACTICALMARINE_HPP_

#include <iostream>
#include <stdlib.h>

class ISpaceMarine
{
        public:
                virtual -ISpaceMarine() {}
                virtual ISpaceMarine* clone() const = 0;
                virtual void battleCry() const = 0;
                virtual void rangedAttack() const = 0;
                virtual void meleeAttack() const = 0;
};

#endif