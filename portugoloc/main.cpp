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
#include <iostream>
#include "random_file_reader.h"
#include "portugolo_machine.h"
#include "lexor_exception.h"
#include "parameter.h"

using namespace std;

int main(int __argc, char *__argv[]) {

    Parameter *param = new Parameter(__argc, __argv);

    if (param->getSource() == 0) {
        std::cout << "Sorry you need to inform a valid source file!" << std::endl;
        return -1;
    }
    RandomFileReader* random_file_reader = new RandomFileReader(param->getSource());


    PortugoloMachine* machine = new PortugoloMachine(random_file_reader);
    machine->print_keywords();

    try {
        machine->proccess();
    } catch (LexorException& le) {
        std::cout << "catch (LexorException& le)" << std::endl;
        le.error();
    } catch (std::exception& e) {
        std::cout << "catch (std::exception& e)" << std::endl;
        std::cout << e.what() << std::endl;
    }
    machine->get_symbols()->print();

    random_file_reader->close();

    return 0;
}
