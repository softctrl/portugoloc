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
#ifndef TYPES_H
#define TYPES_H

#include "type.h"

/**
 * @brief The Types class define all types that PortugoloC can handle.
 */
class Types : public Type::Type {

    public:
    // Operators:
    static const Type* RELOP_LT; // Operator Less Then "<".
    static const Type* RELOP_LE; // Operator Less Then or Equal "<=".
    static const Type* RELOP_GT; // Operator Greater Then ">".
    static const Type* RELOP_GE; // Operator Greater Then or Equal ">=".
    static const Type* RELOP_EQ; // Operator Equal "=".
    static const Type* RELOP_NE; // Operator Not Equal "<>".
    static const Type* RELOP_ASSIGN; // Operator Assign To "<--".
    static const Type* RELOP_PLUS; // Operator Plus "+".
    static const Type* RELOP_MINUS; // Operator Minus "-".
    static const Type* RELOP_MULT; // Operator Multiply "*".
    static const Type* RELOP_DIV; // Operator Divide "/".

    // Simbols
    static const Type* SMB_OP; // Symbol Open Parenthesis "(".
    static const Type* SMB_CP; // Operator Close Parenthesis ")".
    static const Type* SMB_COLON; // Operator Colon ",".
    static const Type* SMB_SEMICOLON; // Operator Semicolon ";".

    // identifiers
    static const Type* ID; // Identifier type.

    // numbers
    static const Type* DIGIT; // Digit Type.

    // strings
    static const Type* STRING; // String type.
    static const Type* LITERAL; // Literal Type.
    static const Type* NUMERIC; // Numeric Type.

    // Comments
    static const Type* COMMENT; // Comment Type.


};

#endif // TYPES_H
