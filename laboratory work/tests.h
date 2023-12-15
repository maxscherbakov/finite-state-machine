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
    vector<int> list = {1, 2, 3, 1, 1};
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


TEST(MachineChar, Subtest_3) {
    int states = 3; 
     vector <vector <char>> alphabet = {{'a', 'a'}, {'b', 'b'}, {'c', 'c'}}; 
    int state = 0; 
    int final_state = 2; 
    vector <vector <int>>  transitions = {{1, 0, 0}, {0, 2, 0}, {2, 2, 2}};
    vector<char> list = {'b', 'b', 'c', 'c', 'a', 'a',  'b', 'b', 'c', 'c'};
    FiniteStateMachine<char> MachineChar(states, alphabet, state, final_state, transitions);

    ASSERT_TRUE(MachineChar.to_run(list));
}
TEST(MachineChar, Subtest_4) {
    int states = 6; 
     vector <vector <char>> alphabet = {{'a'}, {'b'}, {'c'}, {'d'}}; 
    int state = 0; 
    int final_state = 5; 
    vector <vector <int>>  transitions = {{1, 0, 3, 0}, {1, 2, 3, 0}, {1, 0, 3, 5},
                                          {1, 4, 3, 0}, {1, 0, 5, 0}, {5, 5, 5, 5}};
    vector<char> list = {'a', 'b', 'c', 'b', 'c', 'b', 'b', 'b'};
    FiniteStateMachine<char> MachineChar(states, alphabet, state, final_state, transitions);

    ASSERT_TRUE(MachineChar.to_run(list));
}

TEST(MachineChar, Subtest_5) {
    int states = 6; 
     vector <vector <char>> alphabet = {{'a'}, {'b'}, {'c'}, {'d'}}; 
    int state = 0; 
    int final_state = 5; 
    vector <vector <int>>  transitions = {{1, 0, 3, 0}, {1, 2, 3, 0}, {1, 0, 3, 5},
                                          {1, 4, 3, 0}, {1, 0, 5, 0}, {5, 5, 5, 5}};
    vector<char> list = {'a', 'b', 'a', 'b', 'd', 'b', 'b', 'b'};
    FiniteStateMachine<char> MachineChar(states, alphabet, state, final_state, transitions);

    ASSERT_TRUE(MachineChar.to_run(list));
}

TEST(MachineChar, Subtest_6) {
    int states = 6; 
     vector <vector <char>> alphabet = {{'a'}, {'b'}, {'c'}, {'d'}}; 
    int state = 0; 
    int final_state = 5; 
    vector <vector <int>>  transitions = {{1, 0, 3, 0}, {1, 2, 3, 0}, {1, 0, 3, 5},
                                          {1, 4, 3, 0}, {1, 0, 5, 0}, {5, 5, 5, 5}};
    vector<char> list = {'a', 'b', 'a', 'a', 'd', 'b', 'b', 'b'};
    FiniteStateMachine<char> MachineChar(states, alphabet, state, final_state, transitions);

    ASSERT_FALSE(MachineChar.to_run(list));
}