//DO NOT CHANGE THIS FILE

#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <iostream>
#include <string>

using namespace std;

struct Node {
  string name;
  Node* prev;  // Points to the Node object before the current Node
  Node* next;  // Points to the Node object after the current Node
};

class DLList {
  private:
    Node* head_;  // Points to the first Node
    Node* tail_;  // Points to the last Node
    void deep_copy(const DLList&);
    void clear_all();
  public:
    DLList();

    // Accessor
    string search(const string& key = "") const;

    // Mutator
    void insert(unsigned, const string&);
    DLList& operator-=(const string&);

    // The rule of three
    DLList(const DLList&);
    ~DLList();
    DLList& operator=(const DLList&);

  friend ostream& operator<<(ostream&, const DLList&);
};

#endif
