//
// Created by Owntrolf on 2018-11-19.
//

#include "gpa.hpp"

using namespace std;

gpa::gpa(){};

void gpa::menu()
{
    cout << "Welcome to GPAMASTER" << endl;
    int option = 0;
    do
    {
        cout << "1. Enter a new person and GPA" << endl;
        cout << "2. Print out the list" << endl;
        cout << "3. Exit" << endl;
        cin >> option;
        switch(option)
        {
            case 1:
                inputNameGPA();
                break;
            case 2:
                printList();
                break;
            case 3:
                break;
        }
    } while(option != 0);


}

bool gpa::biggerThan(pair<string, int> i, pair<string, int> j)
{
    return(i.second<j.second);
}

void gpa::inputNameGPA(int storage)
{
    cout << "Enter your name";
    string name;
    cin >> name;
    cout << "Enter your GPA";
    int gpaMark;
    cin >> gpaMark;
    peopleGpa.push_back(pair<string, int>(name, gpaMark));
    sort(peopleGpa.begin(), peopleGpa.end(), biggerThan);


void gpa::printList()
{
    for(auto it = peopleGpa.begin(); it != peopleGpa.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}
