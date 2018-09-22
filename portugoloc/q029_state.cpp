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
#include "q029_state.h"
#include "q032_state.h"

Q029State::Q029State(const Machine *_machine) : NonFinalState::NonFinalState(_machine) {}

State *Q029State::next_transatcion(const char ch) {

    if (ch == Reader::_NL_) {
        return new Q032State(this->getMachine()); // Q29
    } else {
        return this;
    }

}

char Q029State::read_char(const char ch) {
    return ch != '\n' ? ch : '\0';
}

bool Q029State::is_valid_char(const char ch) {

    return NonFinalState::is_valid_char(ch) || ch == '\n';

}
