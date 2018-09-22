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
#include "q015_state.h"
#include "q018_state.h"
#include "lexor_exception.h"

Q015State::Q015State(const Machine *_machine) : NonFinalState::NonFinalState(_machine) {}

State *Q015State::next_transatcion(const char ch) {

        switch (ch) {
        case '-':
            return new Q018State(this->getMachine());
        default:
            throw new LexorException("ERROR-Q015State: Undefined state.");
        }


}

char Q015State::read_char(const char ch) {
    return ch == '-' ? ch : '\0';
}
