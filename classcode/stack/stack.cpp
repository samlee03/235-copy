#include "stack.h"


// issues:
// no error checking, no bounds checkint etc.

void stack::push(int item){
  a[topindex] = item;
  topindex++;
}

int stack::pop(){
  int tmp = a[topindex-1];
  topindex--;
  return tmp;
}

int stack::top(){
  return a[topindex-1];
}
bool stack::is_empty(){
  return topindex==0;
}
