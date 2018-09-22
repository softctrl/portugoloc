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
#include "types.h"

const Type* Types::RELOP_LT = new Type("RELOP_LT", true);
const Type* Types::RELOP_LE = new Type("RELOP_LE", true);
const Type* Types::RELOP_GT = new Type("RELOP_GT", true);
const Type* Types::RELOP_GE = new Type("RELOP_GE", true);
const Type* Types::RELOP_EQ = new Type("RELOP_EQ", true);
const Type* Types::RELOP_NE = new Type("RELOP_NE", true);
const Type* Types::RELOP_ASSIGN = new Type("RELOP_ASSIGN", true);
const Type* Types::RELOP_PLUS = new Type("RELOP_PLUS", true);
const Type* Types::RELOP_MINUS = new Type("RELOP_MINUS", true);
const Type* Types::RELOP_MULT = new Type("RELOP_MULT", true);
const Type* Types::RELOP_DIV = new Type("RELOP_DIV", true);

const Type* Types::SMB_OP = new Type("SMB_OP", true);
const Type* Types::SMB_CP = new Type("SMB_CP", true);
const Type* Types::SMB_COLON = new Type("SMB_COLON", true);
const Type* Types::SMB_SEMICOLON = new Type("SMB_SEMICOLON", true);

const Type* Types::ID = new Type("ID", true);

const Type* Types::DIGIT = new Type("DIGIT", true);

const Type* Types::STRING = new Type("STRING", true);
const Type* Types::LITERAL = new Type("LITERAL", true);
const Type* Types::NUMERIC = new Type("NUMERIC", true);

const Type* Types::COMMENT = new Type("COMM", false);
