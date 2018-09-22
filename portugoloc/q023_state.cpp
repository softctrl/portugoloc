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
#include "state_exception.h"
#include "q023_state.h"
#include "q024_state.h"

Q023State::Q023State(const Machine *_machine) : NonFinalState::NonFinalState(_machine) {}

State *Q023State::next_transatcion(const char ch) {

    if (this->is_valid_char(ch)) {
        return new Q024State(this->getMachine());
    } else {
        throw new StateException("You need provide a valid numeric instance here.");
    }

}

char Q023State::read_char(const char ch) {
    return ch == '.' ? ch : '\0';
}

bool Q023State::is_valid_char(const char ch) {
    return isdigit(ch);
}
