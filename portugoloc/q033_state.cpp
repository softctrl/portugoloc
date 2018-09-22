#include "q033_state.h"
#include "q000_state.h"

Q033State::Q033State(const Machine *_machine) : FinalState::FinalState(_machine) {}

State *Q033State::next_transatcion(const char ch) {

    if (this->read_char(ch) == '\0') {
        return new Q000State(this->getMachine());
    } else {
        return this;
    }

}

char Q033State::read_char(const char ch) {
    return ch == ',' ? ch : '\0';
}

bool Q033State::is_valid_char(const char ch) {
    return FinalState::is_valid_char(ch) && this->read_char(ch) != '\0';
}
