#include "SplayTree.h"
#include "flags.h"
#include "SplayTree.cpp"
#include <iostream>

using namespace std;

// Testing program
int main() {
    cout << "Assignment 03, Question 01 Nick Voss: " << endl;
    SplayTree<int> t;

    cout << "Test0: " << endl;
    t.insert(50);
    t.insert(30);
    t.insert(20);
    t.insert(40);
    t.insert(10);
    t.insert(5);
    t.insert(45);
    t.insert(48);

    cout << "The built splay tree is (preorder traversal):" << endl;
    t.printTree();
    cout << endl;

    t.remove(40);
    cout << "The updated splay tree is (preorder traversal):" << endl;
    t.printTree();
    cout << endl;

    t.search(26);
    cout << "The updated splay tree is (preorder traversal):" << endl;
    t.printTree();
    cout << endl;

    t.search(45);
    cout << "The updated splay tree is (preorder traversal):" << endl;
    t.printTree();
    cout << endl;

    cout << "The max vaule of the Splay Tree is: " << t.findMax() << endl;
    cout << "The min vaule of the Splay Tree is: " << t.findMin() << endl;

    cout << "The updated splay tree is (preorder traversal):" << endl;
    t.printTree();
    cout << endl;

    /*
     * TEST 1
     */
//    cout << "Test1: " << endl;
//    t.insert(50);
//    t.insert(40);
//    t.insert(35);
//    t.insert(40);
//    t.insert(10);
//    t.insert(15);
//    t.insert(45);
//    t.insert(48);
//    t.insert(5);
//
//    cout << "The built splay tree is (preorder traversal):" << endl;
//    t.printTree();
//    cout << endl;
//
//    t.remove(35);
//    cout << "The updated splay tree after removing 35 is (preorder traversal):" << endl;
//    t.printTree();
//    cout << endl;
//
//    t.search(10);
//    cout << "The updated splay tree is (preorder traversal):" << endl;
//    t.printTree();
//    cout << endl;
//
//    t.remove(35);
//    cout << "The updated splay tree is (preorder traversal):" << endl;
//    t.printTree();
//    cout << endl;
//
//    cout << "The max vaule of the Splay Tree is: " << t.findMax() << endl;
//    cout << "The min vaule of the Splay Tree is: " << t.findMin() << endl;
//
//    cout << "The updated splay tree is (preorder traversal):" << endl;
//    t.printTree();
//    cout << endl;

    /*
     * TEST 2
     */
//    cout << "Test2: " << endl;
//    t.insert(60);
//    t.insert(50);
//    t.insert(55);
//    t.insert(58);
//    t.insert(65);
//    t.insert(75);
//    t.insert(80);
//    t.insert(85);
//    t.insert(62);
//
//    cout << "The built splay tree is (preorder traversal):" << endl;
//    t.printTree();
//    cout << endl;
//
//    t.remove(80);
//    t.remove(85);
//    cout << "The updated splay tree is (preorder traversal):" << endl;
//    t.printTree();
//    cout << endl;
//
//    t.search(10);
//    t.search(75);
//    t.search(59);
//    cout << "The updated splay tree is (preorder traversal):" << endl;
//    t.printTree();
//    cout << endl;
//
//    cout << "The max vaule of the Splay Tree is: " << t.findMax() << endl;
//    cout << "The min vaule of the Splay Tree is: " << t.findMin() << endl;
//
//    cout << "The updated splay tree is (preorder traversal):" << endl;
//    t.printTree();
//    cout << endl;

    return 0;
}
