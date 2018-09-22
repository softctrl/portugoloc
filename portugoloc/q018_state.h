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
#ifndef Q018_STATE_H
#define Q018_STATE_H

#include "final_state.h"
#include "types.h"

/**
 * @brief The Q018State class define the state that handle "<--" symbol.
 */
class Q018State : public FinalState::FinalState {

    public:

        /**
         * @brief Q018State
         */
        Q018State(const Machine*);

        /**
         * @brief move_next
         * @return
         */
        bool move_next() override { return true; }

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
            return Types::RELOP_ASSIGN;
        }

        /**
         * @brief to_string
         * @return
         */
        const char* to_string() override { return "class Q018State"; }

};

#endif // Q018_STATE_H
