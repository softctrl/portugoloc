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
#ifndef Q003_STATE_H
#define Q003_STATE_H

#include "final_state.h"
#include "types.h"

/**
 * @brief The Q003State class define the state that handle "*" operator.
 */
class Q003State : public FinalState::FinalState {

    public:

        /**
         * @brief Q003State
         */
        Q003State(const Machine*);

        /**
         * @brief read_char
         * @return
         */
        char read_char(const char) override;

        /**
         * @brief get_type
         * @return
         */
        inline const Type* get_type() override {
            return Types::RELOP_MULT;
        }

        /**
         * @brief is_single
         * @return
         */
        bool is_single() override {return true; }

        /**
         * @brief to_string
         * @return
         */
        const char* to_string() override { return "class Q003State"; }

};

#endif // Q003_STATE_H
