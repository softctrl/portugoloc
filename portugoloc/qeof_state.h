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
#ifndef QEOF_STATE_H
#define QEOF_STATE_H

#include "final_state.h"
#include "types.h"

/**
 * @brief The QEOFState class define the state that handle "EOF" symbol.
 */
class QEOFState : public FinalState::FinalState {

    public:

        /**
         * @brief QEOFState
         */
        QEOFState(const Machine*);

        /**
         * @brief get_type
         * @return
         */
        inline const Type* get_type() override {
            return Types::END_OF_FILE;
        }

        /**
         * @brief is_single
         * @return
         */
        bool is_single() override {return true; }

        /**
         * @brief is_valid_char
         * @param ch
         * @return
         */
        bool is_valid_char(const char ch) override;

        /**
         * @brief to_string
         * @return
         */
        const char* to_string() override { return "class QEOFState"; }

};

#endif // QEOF_STATE_H
