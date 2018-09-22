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
#include "q030_state.h"
#include "q028_state.h"
#include "q031_state.h"

Q030State::Q030State(const Machine *_machine) : NonFinalState::NonFinalState(_machine) {}

State *Q030State::next_transatcion(const char ch) {

    if (ch == '/') {
        return new Q031State(this->getMachine()); // Q32
    } else {
        return new Q028State(this->getMachine()); // Q30
    }

}

bool Q030State::is_valid_char(const char ch) {

    return NonFinalState::is_valid_char(ch) || ch == '\n';

}

char Q030State::read_char(const char ch) {
    return ch;
}
