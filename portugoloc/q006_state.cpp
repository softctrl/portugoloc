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
#include "q006_state.h"
#include "q022_state.h"
#include "q023_state.h"


Q006State::Q006State(const Machine *_machine) : NonFinalState::NonFinalState(_machine) {}

State *Q006State::next_transatcion(const char ch) {

    if (isdigit(ch)) {
        return this;
    } else if (ch == '.') {
        // Q023State
        return new Q023State(this->getMachine());
    } else {
        // Q022State
        return new Q022State(this->getMachine());
    }

}

bool Q006State::is_valid_char(const char ch) {

    return isdigit(ch) || ch == '.';

}

char Q006State::read_char(const char ch) {
    return this->is_valid_char(ch)? ch : '\0';
}
