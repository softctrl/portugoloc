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
#include "q024_state.h"
#include "q025_state.h"

Q024State::Q024State(const Machine* _machine) : NonFinalState::NonFinalState(_machine) {}

State *Q024State::next_transatcion(const char ch) {

    if (isdigit(ch)) {
            return this;
    } else {
            return new Q025State(this->getMachine());
    }

}

bool Q024State::is_valid_char(const char ch) {
    return isdigit(ch);
}

char Q024State::read_char(const char ch) {
    return ch;
}
