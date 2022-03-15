#include "flags.h"
#include "SplayTree.cpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout << "\nAssignment 03, Question 03 Nick Voss" << endl;
    ifstream file;
    string line;

    file.open("query.txt");

    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "No file?" << endl;
    }
    return 0;
}
