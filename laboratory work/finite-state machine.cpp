#include "finite_state_machine.h"


template <class Type>
int FiniteStateMachine<Type>:: start_with(std::vector<Type> c, int alphabet_ind) {       
    if (c.size() <= alphabet[alphabet_ind].size()) {
        for (int i = 0; i < c.size(); ++i) {
            if (c[i] != alphabet[alphabet_ind][i]) return 0;
        }
        if (c.size() == alphabet[alphabet_ind].size()) return 1;
        else return -1;
    }
    return 0;
}

template <class Type>
int FiniteStateMachine<Type>:: find_str(std::vector<Type> c) {
    int count_start_with = 0;
    for (int k = 0; k < alphabet.size(); ++k) { 
        int flag = start_with(c, k);       
        if (flag == 1) { return k; }
        else if (flag == -1) { ++count_start_with; }
    }
    if (count_start_with == 0) return -1;
    return -2;
}

template <class Type>
bool FiniteStateMachine<Type>:: to_run(std::vector <Type> str) {
    int str_ind;
    std::vector <Type> str_now;
    for (int i = 0; i < str.size(); ++i) {
        str_now.push_back(str[i]);
        str_ind = find_str(str_now);

        if (str_ind >= 0) {
            str_now.clear();
            state = transition[state][str_ind];

        } else if (str_ind == -1) return 0;
    }
    if (state == final_state && str_now.empty()) return 1;
    else return 0;
}


template class FiniteStateMachine<char>;
template class FiniteStateMachine<int>;
template class FiniteStateMachine<std::string>;