/**
 * Heap.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * demonstrates dynamically allocating memory
 */

 /*
  Memory for local variables  = stack
  Memory you are in charge of = heap
 */

#include <iostream>
using namespace std;

int* intOnHeap();   // returns an int on the heap
void leak1();       // creates a memory leak
void leak2();       // creates another memory leak

int main() {
  int* pHeap = new int;
  *pHeap = 10;
  cout << "*pHeap: " << *pHeap << endl << endl;

  int* pHeap2 = intOnHeap();
  cout << "*pHeap2: " << *pHeap2 << endl << endl;

  cout << "Freeing memory pointed to by pHeap." << endl << endl;
  delete pHeap;

  cout << "Freeing memory pointed to by pHeap2." << endl << endl;
  delete pHeap2;

  // get rid of dangling pointers
  pHeap  = 0;
  pHeap2 = 0;

  return 0;
}

int* intOnHeap() {
  int* pTemp = new int(20);
  return pTemp;
}

void leak1() {
  int* drip1 = new int(30);
}

void leak2() {
  int* drip2 = new int(50);
  drip2 = new int(100);
  delete drip2;
}
