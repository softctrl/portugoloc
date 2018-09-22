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
#ifndef PARAMETER_H
#define PARAMETER_H

/**
 * @brief The Parameter class manages all parameters that the portugoloc supports.
 */
class Parameter {

    public:

        /**
         * @brief Parameter
         */
        Parameter(int, char *[]);

        /**
         * @brief getSource
         * @return
         */
        inline const char* getSource() { return this->_source; }

    private:
        const char* _source  = 0;

};

#endif // PARAMETER_H
