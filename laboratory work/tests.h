#pragma once
#include <gtest/gtest.h>
#include "finite_state_machine.h"
using namespace std;

TEST(MachineInt, Subtest_1) {
    int states = 2; 
     vector <vector <int>> alphabet = {{1, 2, 3}, {1, 1}, {2, 2}}; 
    int state = 1; 
    int final_state = 0; 
    vector <vector <int>>  transitions = {{0, 0, 0}, {0, 0, 0}};
    vector<int> list = {1, 2, 3, 2, 2, 1};
    FiniteStateMachine<int> MachineInt(states, alphabet, state, final_state, transitions);

    ASSERT_FALSE(MachineInt.to_run(list));
}

TEST(MachineInt, Subtest_2) {
    int states = 2; 
     vector <vector <int>> alphabet = {{1, 2, 3}, {1, 1}, {2, 2}}; 
    int state = 1; 
    int final_state = 0; 
    vector <vector <int>>  transitions = {{0, 0, 1}, {1, 0, 0}};
    vector<int> list = {1, 2, 3, 2, 2, 1, 1};
    FiniteStateMachine<int> MachineInt(states, alphabet, state, final_state, transitions);

    ASSERT_TRUE(MachineInt.to_run(list));
}

TEST(MachineChar, Subtest_1) {
    int states = 2; 
     vector <vector <char>> alphabet = {{'a', 'b', 'c'}, {'a', 'a'}, {'b', 'b'}}; 
    int state = 1; 
    int final_state = 0; 
    vector <vector <int>>  transitions = {{0, 0, 1}, {1, 0, 0}};
    vector<char> list = {'a', 'b', 'c', 'b', 'b', 'a', 'a'};
    FiniteStateMachine<char> MachineChar(states, alphabet, state, final_state, transitions);

    ASSERT_TRUE(MachineChar.to_run(list));
}

TEST(MachineStr, Subtest_1) {
    int states = 2; 
    vector <vector <string>> alphabet = {{"hello"}, {"this", "is", "a" }, {"finite-state", "machine"}, {"goodbye"}};
    int state = 1; 
    int final_state = 0; 
    vector <vector <int>>  transitions = {{0, 1, 1, 1}, {0, 1, 1, 0}};
    vector<string> list = {"hello", "this", "is", "a", "finite-state", "machine", "goodbye"};
    FiniteStateMachine<string> MachineStr(states, alphabet, state, final_state, transitions);

    ASSERT_TRUE(MachineStr.to_run(list));
}