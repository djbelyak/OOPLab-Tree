#include "container.h"

void FreeBTree(BTree* &Node) // уничтожение дерева
{
  if(Node != NULL)
  {
	// уничтожение поддеревьев
    FreeBTree(Node->left);
    FreeBTree(Node->right);
	// уничтожение данных и узла
    delete Node->data;
    delete Node;

    Node = NULL; 
  }
}