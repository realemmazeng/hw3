#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

// part a 
// recursion to end, hits base case, builds small and large 

void llpivot (Node*& head, Node*& smaller, Node*& larger, int pivot){
  if (head == nullptr){
    smaller = nullptr;
    larger = nullptr;
    return;
  }
  // curr node gives u info on where to insert 
  Node* curr = head;

  llpivot (head->next, smaller, larger, pivot);
  if (head->val <= pivot){
    // attach node to list 
    curr->next = smaller;
    // assign front 
    smaller = curr;
  } else {
    curr->next = larger;
    larger = curr;
  }
  head = nullptr;
}

