#include "finite_state_machine.h"
#include <iostream>

int main() {
    int states = 2; 
    std:: vector <std::vector <int>> alphabet = {{1, 2, 3}, {1, 1}, {2, 2}}; 
    int state = 1; 
    int final_state = 0; 
    std::vector <std::vector <int>>  transition = {{0, 0, 0}, {0, 0, 0}};
    std::vector<int> str = {1, 2, 3, 2, 2, 1};
    

    FiniteStateMachine<int> exemple(states, alphabet, state, final_state, transition);
    
    std:: cout << exemple.to_run(str) << std::endl;

}