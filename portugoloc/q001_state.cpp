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
#include "q001_state.h"
#include "q000_state.h"

Q001State::Q001State(const Machine *_machine) : FinalState::FinalState(_machine) {}

State *Q001State::next_transatcion(const char ch) {
    if (this->read_char(ch) == '\0') {
        return new Q000State(this->getMachine());
    } else {
        return this;
    }
}

char Q001State::read_char(const char ch) {
    return (ch == '+' ? ch : '\0');
}

bool Q001State::is_valid_char(const char ch) {
    return FinalState::is_valid_char(ch) && this->read_char(ch) != '\0';
}
