#include "finite_state_machine.h"
#include <map>

int FiniteStateMachine:: find_char(char c) {
    int k = 0;
    for (char i : alphabet) {
        if (i == c) return k;
        ++k;
    }
    return -1;
}

bool FiniteStateMachine:: to_run(std::string str) {
    int char_ind;
    for (char a : str) {
        char_ind = find_char(a);
        state = transition[state][char_ind];
    }
    if (state == final_state) return 1;
    else return 0;
}