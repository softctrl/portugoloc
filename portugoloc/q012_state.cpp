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
#include "q012_state.h"
#include "q019_state.h"
#include "q020_state.h"

Q012State::Q012State(const Machine *_machine) : NonFinalState::NonFinalState(_machine) {}

State *Q012State::next_transatcion(const char ch) {

    switch (ch) {
    case '=':
        return new Q019State(this->getMachine());
    default:
        return new Q020State(this->getMachine());
    }

}

char Q012State::read_char(const char ch) {
    return ch == '>' ? ch : '\0';
}
