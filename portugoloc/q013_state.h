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
#ifndef Q013_STATE_H
#define Q013_STATE_H

#include "non_final_state.h"

/**
 * @brief The Q013State class define the state that handle "<", "<=", "<>" or "<--" symbols.
 */
class Q013State : public NonFinalState::NonFinalState {

    public:

        /**
         * @brief Q013State
         */
        Q013State(const Machine*);

        /**
         * @brief next_transatcion
         * @param ch
         * @return
         */
        State* next_transatcion(const char ch) override;

        /**
         * @brief read_char
         * @return
         */
        char read_char(const char) override;

        /**
         * @brief to_string
         * @return
         */
        const char* to_string() override { return "class Q013State"; }

};

#endif // Q013_STATE_H
