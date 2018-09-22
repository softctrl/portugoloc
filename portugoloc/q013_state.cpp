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
#include "q013_state.h"
#include "q014_state.h"
#include "q015_state.h"
#include "q016_state.h"
#include "q017_state.h"

Q013State::Q013State(const Machine *_machine) : NonFinalState::NonFinalState(_machine) {}

State *Q013State::next_transatcion(const char ch) {

    switch (ch) {
    case '=':
        return new Q014State(this->getMachine());
    case '-':
        return new Q015State(this->getMachine());
    case '>':
        return new Q016State(this->getMachine());
    default:
        return new Q017State(this->getMachine());
    }

}

char Q013State::read_char(const char ch) {
    return ch == '<' ? ch : '\0';
}

