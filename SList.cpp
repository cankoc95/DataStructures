#include "SList.h"

using std::vector;
using std::string;

void SList::insertFront(int val) {
  SListNode* tmp = head;
  SListNode n1 = new SListNode(val);
  head = n1;
  return;
}

void SList::insertEnd(int val) {
  SListNode n = new SListNode(val);
  SListNode cur = head;
  while (cur.next != NULL) {
    cur = cur.next;
  }
  cur.next = n;
  return;

}
