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
#include "q028_state.h"
#include "q030_state.h"

Q028State::Q028State(const Machine *_machine) : NonFinalState::NonFinalState(_machine) {}

State *Q028State::next_transatcion(const char ch) {

    if (ch == '*') {
        return new Q030State(this->getMachine());
    } else {
        return this;
    }

}

bool Q028State::is_valid_char(const char ch) {

    return true;

}

char Q028State::read_char(const char ch) {
    return ch;
}
