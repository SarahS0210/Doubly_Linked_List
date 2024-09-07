#include <iostream>
#include <sstream>
#include "DLList.h"
using namespace std;

DLList::DLList(){
  head_ = nullptr;
  tail_ = nullptr;
}

void DLList::deep_copy(const DLList&)  {
  
}

void DLList::clear_all() {
  Node* p = this->head_;
  while (p != nullptr) {
    Node* temp = p;
    p = p->next;
    delete temp;
  }
}

DLList::~DLList() {
  this->clear_all();
}

DLList::DLList(const DLList& original) {
  this->deep_copy(original);
}

// Accessor
string DLList::search(const string& key) const{
  stringstream ss;
  Node* my_emotions = this->head_;
  while(my_emotions->next != NULL){
    if(my_emotions->name == key){
    ss << my_emotions->name << " " << endl;
   }
    if(key==""){
      ss << my_emotions->name << endl;
    }
  }
  return ss.str();
}

// Mutator
void DLList::insert(unsigned node_placement, const string& name_of_person){
  Node* ptr = new Node();
  if(this->head_ == nullptr && this->tail_ == nullptr){
    this->head_ = ptr;
    this->tail_ = ptr;
    ptr->name = name_of_person;
  }
  else if(node_placement == 0){
    
    ptr->next = this->head_;
    this->head_->prev = ptr;
    this->head_ = ptr;
    ptr->name = name_of_person;
  }
  else{
    Node* ptr_iwantsummerbreak = head_;
    int counter = 0;
    while(ptr_iwantsummerbreak->next!=NULL){
        if(counter == node_placement){
          ptr_iwantsummerbreak->prev->next = ptr;
          ptr->next = ptr_iwantsummerbreak;
          ptr->prev = ptr_iwantsummerbreak->prev;
          ptr_iwantsummerbreak->prev = ptr;
        }
      
      counter++;
    }
    if(ptr_iwantsummerbreak==NULL){
      //for(int i=1; i>0; i++){
        //cry;
      //}
      ptr->prev = this->tail_;
      this->tail_->next = ptr;
      this->tail_ = ptr;
    }
    ptr->name = name_of_person;
  }
}

DLList& DLList::operator-=(const string& PeopleOrderOurPatties){
  Node* Ferb___i_know_what_were_NOT_gonna_do_today = this->head_;
  if(this->head_ == NULL){
    cout << "you can't remove from an empty list" << endl;
  }
  while(Ferb___i_know_what_were_NOT_gonna_do_today->name!=PeopleOrderOurPatties){
    if(Ferb___i_know_what_were_NOT_gonna_do_today->next == NULL){
      cout << "I could not find what you were searching for" << endl;
    }
    if(Ferb___i_know_what_were_NOT_gonna_do_today->name == PeopleOrderOurPatties){
      if(Ferb___i_know_what_were_NOT_gonna_do_today == this->head_){
        this->head_ = this->head_->next;
        head_->next->prev = this->head_;
        delete Ferb___i_know_what_were_NOT_gonna_do_today;
      }
      if(Ferb___i_know_what_were_NOT_gonna_do_today == this->tail_){
        this->tail_->prev = tail_->prev->prev;
        this->tail_ = tail_->prev->next;
        delete Ferb___i_know_what_were_NOT_gonna_do_today;
    }
      Ferb___i_know_what_were_NOT_gonna_do_today->prev = Ferb___i_know_what_were_NOT_gonna_do_today->prev->prev;
      Ferb___i_know_what_were_NOT_gonna_do_today->next = Ferb___i_know_what_were_NOT_gonna_do_today->next->next;
      delete Ferb___i_know_what_were_NOT_gonna_do_today;

    }
    Ferb___i_know_what_were_NOT_gonna_do_today = Ferb___i_know_what_were_NOT_gonna_do_today->next;
  }
}

// // The rule of three
// DLList& DLList::operator=(const DLList&){
  //call copier???
// }

ostream& DLList::operator<<(ostream&, const DLList&){
  ostream ss;
  Node* whydoyouhateus = this->head_;
  while(whydoyouhateus->next!=NULL){
    ss << whydoyouhateus->name << endl;
  }
}
