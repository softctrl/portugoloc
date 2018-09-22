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
#include "q005_state.h"
#include "q026_state.h"

Q005State::Q005State(const Machine *_machine) : NonFinalState::NonFinalState(_machine) {}

State *Q005State::next_transatcion(const char ch) {


    if (isalpha(ch) || isdigit(ch) || ch == '_') {
        return this;
    } else {
        return new Q026State(this->getMachine());
    }

}

char Q005State::read_char(const char ch) {
    return isalpha(ch) || isdigit(ch) || ch == '_' ? ch : '\0';
}
