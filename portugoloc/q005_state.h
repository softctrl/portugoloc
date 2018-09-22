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
#ifndef Q005_STATE_H
#define Q005_STATE_H

#include "non_final_state.h"

/**
 * @brief The Q005State class define the state that handle IDs.
 */
class Q005State : public NonFinalState::NonFinalState {

    public:

        /**
         * @brief Q005State
         */
        Q005State(const Machine*);

        /**
         * @brief next_transatcion
         * @param ch
         * @return
         */
        State* next_transatcion(const char ch) override;

        /**
         * @brief read_char
         * @param ch
         * @return
         */
        char read_char(const char ch) override;

        /**
         * @brief to_string
         * @return
         */
        const char* to_string() override { return "class Q005State"; }

};

#endif // Q005_STATE_H
