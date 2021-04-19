#include <iostream>
#include "Node.h"
#include "BSTree.h"
/*
 * 
 BST - Binary Search Tree

 ordered tree where it's either empty or given a node N, all the
 values in N's left subtree are less than the value in N and all the
 values in N's right subtree are greater than the value in N.




*/
BSTree::BSTree(){
  root = nullptr;
}


/*
 * Search for value in the BST.
 if the tree is null it's not there
 otherwise, keep going left or right until you find it or it's not there

 remember, normally you're not just storing an int. Normally you're
 storing a bunch of stuff like a whole struct or class and you're
 searching on part of it like look someone up by ID.

*/
int BSTree::search(int value){
  Node *t = root;

  while (t != nullptr){
    if (t->getData() == value){
      return value;
    } else if (t->getData() > value){
      t = t->getLeft();
    } else {
      t = t->getRight();
    }
      
  }
  // if we ever get here, t got to nullptr
  // so the value isn't in the tree.
  throw -1;
  
  return 0;
}

/*
 * insert a new node with value at its location. 

   Note that inserting into an empty tree is a special case and also
   that you can and should always insert new nodes as leaves rather than
   as interior nodes.

   To insert, you need to do something like the search but you need to get
   a pointer to the node above (or before) where the new node is going to 
   be a leaf and then add the new leaf.

*/
void BSTree::insert(int value){
  
  
}

std::string BSTree::gds_helper(Node *n){
  std::string a,b,c;
  
  if (n==nullptr){
    return "";
  } else {

    /*
      1. recursively process the left subtree
      2. Process the current node
      3. recursively process the right subtree

      This will traverse a BSTree in sorted order.

    */
    
      a =  gds_helper(n->getLeft());
      b = std::to_string(n->getData());
      c =  gds_helper(n->getRight());


    return a + ", " + b+ ", " + c;

     
  }
};

std::string BSTree::get_debug_string(){
  return gds_helper(root);
};

void BSTree::setup(){
  Node *n = new Node(10);
  root = n;
  n = new Node(20);
  root->setRight(n);
  Node *n2 = new Node(30);
  n->setRight(n2);
  n2 = new Node(15);
  n->setLeft(n2);
  n2 = new Node(5);
  root->setLeft(n2);
  n = new Node(3);
  n2->setLeft(n);
  n = new Node(7);
  n2->setLeft(n);
  
}

