#include <iostream>

void printList(std::list<int>& l){
  for(auto x :l){
    std::cout<<x<<std::endl;
  }
}

/*
    This file is created for practicing std::list, especially splice method.
    std::list is used in leetcode problem LRUCache. 
    list.splice is helpful to move the most recently used element to the head of list.
*/

int main(){
      std::list a({1, 2, 3});
      a.splice(a.begin(), a, std::prev(a.end()));
      // a.splice(a.begin(), a, a.rbegin()); not work, a.rbegin() is type of reverse_iterator, not const_iterator
      // a.splice(a.begin(), a, a.back()); not work, a.back() is value type, aka int type
      printList(a);
}
