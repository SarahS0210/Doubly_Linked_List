#include <iostream>
#include "DLList.h"
using namespace std;

int main() {
  DLList();
  bool menu = true;
  int option = 0;
  int node_placement = 0;
  string name_of_person;
  string key;
  Node* nodes;
  do{
    cout << "1. Add to list\n2. Search list\n3. Remove from list\n4. Display list\n5. Exit" << endl;
    cin >> option;
    switch(option){
      case 1:
        insert(node_placement, name_of_person);
        break;
      case 2:
        search(key);
        break;
      case 3:
        cout -= key;
        break;
      case 4:
        cout << nodes;
        break;
      case 5:
        menu = false;
        break;
    }
  }while (menu);
}
