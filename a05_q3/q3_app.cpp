#include "flags.h"
#include "SplayTree.cpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout << "\nAssignment 03, Question 03 Nick Voss" << endl;
    string line;
    ifstream file(R"(C:\Users\nvoss\CLionProjects\IT279-Assignment5\a05_q3\enroll.txt)");

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
