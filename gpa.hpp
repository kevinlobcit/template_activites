//
// Created by Owntrolf on 2018-11-19.
//

#ifndef TEMPLATE_ACTIVITES_GPA_HPP
#define TEMPLATE_ACTIVITES_GPA_HPP

#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

class gpa {
private:
    vector<pair<string, int>> peopleGpa;
public:
    gpa();
    void menu();
    void inputNameGPA();
    void insert(vector<string, int> peopleGpa, string name, int gpaMark);
    static bool biggerThan(pair<string,int> i, pair<string,int> j);
    void printList();
};


#endif //TEMPLATE_ACTIVITES_GPA_HPP
