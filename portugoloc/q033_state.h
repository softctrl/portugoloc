#ifndef Q033_SATE_H
#define Q033_SATE_H

#include "final_state.h"
#include "types.h"

/**
 * @brief The Q033State class define the state that handle "," symbol.
 */
class Q033State : public FinalState::FinalState {

    public:

        /**
         * @brief Q033State
         */
        Q033State(const Machine*);

        /**
         * @brief next_transatcion
         * @param ch
         * @return
         */
        State* next_transatcion(const char ch) override;

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
            return Types::SMB_COLON;
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
        const char* to_string() override { return "class Q033State"; }

};

#endif // Q033_SATE_H
