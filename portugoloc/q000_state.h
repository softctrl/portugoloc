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
#ifndef Q000_STATE_H
#define Q000_STATE_H

#include "non_final_state.h"
#include "state_exception.h"

/**
 * @brief The Q000State class define the initial state os this lexical machine.
 */
class Q000State : public NonFinalState::NonFinalState {

    public:
        /**
         * @brief Q000State
         */
        Q000State(const Machine*);

        /**
         * @brief ~Q000State
         */
        ~Q000State();

        /**
         * @brief next_transatcion move to the next transaction according with the informed character.
         * @param ch
         * @return next state.
         */
        State* next_transatcion(const char ch) override;

        /**
         * @brief is_initial identify the initial state.
         * @return always true.
         */
        bool is_initial() override { return true; }

        /**
         * @brief move_next allow to move to the next character?
         * @return always false;
         */
        bool move_next() override;

        /**
         * @brief read_char if the informed character was a valid one, this method will return a corresponding character.
         * @param ch
         * @return
         */
        char read_char(const char ch) override;

        /**
         * @brief to_string
         * @return
         */
        const char* to_string() override { return "class Q000State"; }

};

#endif // Q000_STATE_H
