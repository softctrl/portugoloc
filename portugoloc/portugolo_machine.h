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
#ifndef PORTUGOLO_MACHINE_H
#define PORTUGOLO_MACHINE_H

#include "machine.h"
#include "random_file_reader.h"

/**
 * @brief The PortugoloMachine class define the PortugoloC lexical machine.
 */
class PortugoloMachine : public Machine::Machine {

    public:

        /**
         * @brief PortugoloMachine
         */
        PortugoloMachine(RandomFileReader*);

        /**
         * @brief print_keywords print all reserver words for the PortugoloC language.
         */
        inline virtual void print_keywords() override {
            std::cout << "Portugolo Keywords\n========= ========" << std::endl;
            for (auto item = this->_key_words.begin(); item != this->_key_words.end(); item++) {
                std::cout << "->" << item->c_str() << std::endl;
            }
            std::cout << "==================" << std::endl;
        }

    protected:

        std::unordered_set<std::string> _key_words = {
            "algoritmo", "ate", "declare", "e", "enquanto", "escreva",
            "faca", "falso", "fim", "inicio", "leia", "literal", "logico",
            "nao", "nulo", "numerico", "ou", "para", "repita", "retorne",
            "se", "senao", "subrotina", "verdadeiro"
        };

        /**
         * @brief is_keyword identify when a value represents a reserved word (keyword).
         * @param word
         * @return
         */
        bool is_keyword(const char* word) override;

};

#endif // PORTUGOLO_MACHINE_H
