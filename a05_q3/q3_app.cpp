#include "flags.h"
#include "SplayTree.cpp"
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

void fillTree(SplayTree<int> &tree, ifstream &file) {
    string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            tree.insert(stoi(line));
        }
        file.close();
    } else {
        cout << "Couldn't find the file query1." << endl;
    }
}

void sortAndPrintMap(map<string, int> &theMap) {
    vector<pair<string, int>> aVector;

    /*
     * put all map pairs into vector so we can later sort
     */
    aVector.reserve(theMap.size()); // pre-allocate memory first before loop
    for (const auto &pair: theMap) {
        aVector.emplace_back(pair);
    }

    /*
     * Lambda to sort pairs by the second value, not the first
     */
    std::sort(aVector.begin(), aVector.end());

    std::reverse(aVector.begin(), aVector.end());

    cout << "Student IDs sorted in ascending order: " << endl;
    for (const auto &pair: aVector) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

int main() {
    cout << "\nAssignment 03, Question 03 Nick Voss" << endl;
    ifstream query1(R"(C:\Users\nvoss\CLionProjects\IT279-Assignment5\a05_q3\query.txt)");
    ifstream query2(R"(C:\Users\nvoss\CLionProjects\IT279-Assignment5\a05_q3\query2.txt)");
    ifstream enroll1(R"(C:\Users\nvoss\CLionProjects\IT279-Assignment5\a05_q3\enroll.txt)");
    ifstream enroll2(R"(C:\Users\nvoss\CLionProjects\IT279-Assignment5\a05_q3\enroll2.txt)");

    SplayTree<int> tree;
    list<pair<int, string>> list;

    fillTree(tree, enroll1);

    if (TEST_PART_A) {
        string line;
        if (query1.is_open()) {
            while (getline(query1, line)) {
                int element = stoi(line);
                if (tree.search(element)) {
                    list.emplace_back(tree.remove(element), line);
                } else {
                    list.emplace_back(0, line); // Add with value of 0
                }
            }
            query1.close();
        } else {
            cout << "Couldn't find the file query2." << endl;
        }

        list.sort();
        list.reverse();

        cout << "Courses sorted in descending order: " << endl;
        for (const auto &pair: list) {
            cout << pair.second << ": " << pair.first << endl;
        }

        cout << "The tree after removal: " << endl;
        tree.printTree();
    }

    if (TEST_PART_B) {
        string line2;
        map<string, int> map;

        if (query1.is_open()) {
            while (getline(query1, line2)) {
                int element = stoi(line2);
                if (tree.search(element)) {
                    int val = tree.remove(element);
                    map.insert(pair<string, int>(line2, val));
                } else {
                    map.insert(pair<string, int>(line2, 0));
                }
            }
            query1.close();
        }

        sortAndPrintMap(map);

        /*
         * Print out the splay tree after removal of IDs within query.txt
         */
        cout << "The tree after removal: " << endl;
        tree.printTree();
    }
    return 0;
}
