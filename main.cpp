#include "finite_state_machine.h"
#include <iostream>

int main() {
    int states = 2; 
    std::string alphabet = "abc"; 
    int state = 1; 
    int final_state = 0; 
    std::vector <std::vector <int>>  transition = {{0, 0, 0}, {0, 0, 0}};

    FiniteStateMachine negr(states, alphabet, state, final_state, transition);
    
    negr.to_run("aaaaaa");

}