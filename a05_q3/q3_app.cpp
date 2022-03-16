#include "flags.h"
#include "SplayTree.cpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout << "\nAssignment 03, Question 03 Nick Voss" << endl;
    string line;
    ifstream file(R"(C:\Users\nvoss\CLionProjects\IT279-Assignment5\a05_q3\query.txt)");

    SplayTree<int> tree;

    if (file.is_open()) {
        while (getline(file, line)) {
            tree.insert(stoi(line));
            cout << "Inserted " << line << " into the tree." << endl;
        }
        file.close();
    } else {
        cout << "No file?" << endl;
    }

    tree.printTree();
    return 0;
}
