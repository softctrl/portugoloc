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
#include "portugolo_machine.h"
#include "q000_state.h"
#include <algorithm>

PortugoloMachine::PortugoloMachine(RandomFileReader *_reader) : Machine::Machine(_reader) {
    this->set_init_state(new Q000State(this));
}

bool PortugoloMachine::is_keyword(const char *word) {

    std::string term(word);
    std::transform(term.begin(), term.end(), term.begin(), ::tolower);
    std::unordered_set<std::string>::const_iterator got = this->_key_words.find(term);
    return ( got != this->_key_words.end() );

}
