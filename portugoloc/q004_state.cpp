/*
 *
 * Author:
 *  Carlos Timoshenko
 *  carlostimoshenkorodrigueslopes@gmail.com
 *
 *  https://github.com/softctrl
 *
 * This project is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 */
#include "q004_state.h"
#include "q027_state.h"
#include "q028_state.h"
#include "q029_state.h"

Q004State::Q004State(const Machine *_machine) : NonFinalState::NonFinalState(_machine) {}

State *Q004State::next_transatcion(const char ch) {


    switch (ch) {
    case '*':
        return new Q028State(this->getMachine());
    case '/':
        return new Q029State(this->getMachine());
    default:
        return new Q027State(this->getMachine());
    }

}

char Q004State::read_char(const char ch) {
    return ch == '/' ? ch : '\0';
}

bool Q004State::is_valid_char(const char ch){
    return NonFinalState::is_valid_char(ch) && (ch == '*' || ch == '/');
}
