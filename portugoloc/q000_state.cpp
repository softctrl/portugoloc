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
#include "lexor_exception.h"
#include "q000_state.h"
#include "q001_state.h"
#include "q002_state.h"
#include "q003_state.h"
#include "q004_state.h"
#include "q005_state.h"
#include "q006_state.h"
#include "q007_state.h"
#include "q008_state.h"
#include "q009_state.h"
#include "q010_state.h"
#include "q011_state.h"
#include "q012_state.h"
#include "q013_state.h"
#include "q033_state.h"

Q000State::Q000State(const Machine* _machine) : NonFinalState::NonFinalState(_machine) {}

Q000State::~Q000State() {}

State *Q000State::next_transatcion(const char ch) {

    switch (ch) {
    case '\0':
    case '\n':
    case '\r':
    case ' ':
    case '\t':
        return this;
    case '+':
        return new Q001State(this->getMachine());
    case '-':
        return new Q002State(this->getMachine());
    case '*':
        return new Q003State(this->getMachine());
    case '/':
        return new Q004State(this->getMachine());
    case '"':
        return new Q007State(this->getMachine());
    case ',':
        return new Q033State(this->getMachine());
    case ';':
        return new Q008State(this->getMachine());
    case '(':
        return new Q009State(this->getMachine());
    case ')':
        return new Q010State(this->getMachine());
    case '=':
            return new Q011State(this->getMachine());
    case '>':
        return new Q012State(this->getMachine());
    case '<':
        return new Q013State(this->getMachine());
    default:
        if (isalpha(ch)) { // letter
            return new Q005State(this->getMachine());
        } else if (isdigit(ch)) { // digit
            return new Q006State(this->getMachine());
        } else {
            throw LexorException("Unknow state.");
        }
    }

}

bool Q000State::move_next() {
    return false;
}

char Q000State::read_char(const char ch) {
    return (/*ch != '\0' && */ch != '\n' && ch != '\r' && ch != ' ' && ch != '\t' ? ch : '\0');
}
