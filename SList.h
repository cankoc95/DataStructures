#ifndef GUARD_SList
#define GUARD_SList

#include <vector>
#include <string>

class SList {
    SListNode *head;
    int size;

  public:
    SList() {
      head = NULL;
      size = 0;
    }
    int getSize() const {return size;}
    bool isEmpty() const {return size == 0;}
    void insertFront(int);
    void insertEnd(int);

};

class SListNode {
public:
  SListNode *next;
  int val;
  SListNode() {next = NULL;}
  SListNode(int i) {
    next = NULL;
    val = i;
  }
}

#endif
