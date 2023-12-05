#ifndef FINITE_STATE_MACHINE_H
#define FINITE_STATE_MACHINE_H
#include <string>
#include <vector>
#include <iostream>

template  <class Type>
class FiniteStateMachine {
    public:
        FiniteStateMachine(int _states, std:: vector <std::vector <Type>> _alphabet, int _state, 
        int _final_state, std::vector <std::vector <int>>  _transition) {
            states = _states;
            alphabet = _alphabet;
            state = _state;
            final_state = _final_state;
            transition = _transition;
        }

        bool to_run(std::vector<Type>);

    private:
        int states; 
        std:: vector<std::vector <Type>> alphabet; 
        int state; 
        int final_state; 
        std:: vector <std::vector <int>>  transition;
        int find_str(std::vector<Type>);
        int start_with(std::vector<Type>, int);
};

#endif // FINITE_STATE_MACHINE_H