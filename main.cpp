// COMSC-210 | Lab 23 | Fahad Fawad Ahmad 
// IDE used: Visual Studio
#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include "Goat.h"
using namespace std;

const int SZ_NAMES = 200, SZ_COLORS = 25, MAX_AGE = 20;

int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string [], string []);
void display_trip(list<Goat> trip);
int main_menu();

int main() {
    srand(time(0));
    bool again;

    // read & populate arrays for names and colors
    ifstream fin("names.txt");
    string names[SZ_NAMES];
    int i = 0;
    while (fin >> names[i++]);
    fin.close();
    ifstream fin1("colors.txt");
    string colors[SZ_COLORS];
    i = 0;
    while (fin1 >> colors[i++]) {cout << colors[i];};
    fin1.close();

    cout << "test1" << endl;
    
    int choice = main_menu();
    while (choice != 4) {
        if (choice == 1) {
            add_goat();
        } else if (choice == 2) {

        } else if (choice == 3) {

        }

        choice = main_menu();
    }

    return 0;
}

int main_menu() {
    int choice;
    cout << "*** GOAT MANAGER 3001 ***" << endl;
    cout << "[1] Add a goat\n[2] Delete a goat\n[3] List goats\n[4] Quit" << endl;
    cout << "Choice --> ";
    cin >> choice;

    while (choice != 1 && choice != 2 && choice != 3 && choice != 4) {
        cout << "Choice must be within 1-4" << endl;
        cout << "Choice --> ";
        cin >> choice;
    }

    return choice;
}

int select_goat(list<Goat> trip) {

}

void delete_goat(list<Goat> &trip) {

}

void add_goat(list<Goat> &trip, string [], string []) {
    trip.push_back();
}

void display_trip(list<Goat> trip) {

}