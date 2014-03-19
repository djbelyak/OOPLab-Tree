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

void InitBTreeNode(BTree* &Node, char* data) // инициализаци€ узла дерева
{
  Node = new BTree;
  // инициализаци€ данных
  Node->data = NULL;
  if(data != NULL)
  {
	  Node->data = new char[strlen(data)];
	  strcpy(Node->data, data);
  }
  // инициализаци€ поддеревьев
  Node->left = NULL;
  Node->right = NULL;
}
                  
void AddBTreeNode(BTree* &Node, char *data) // добавление узла в дерево
{
  if(Node == NULL) // если узел пуст
	  InitBTreeNode(Node, data); // создаЄм новый узел на месте пустого
  else
  {
    if(strcmp(data, Node->data) < 0)  // если новый ключ "меньше" ключа текущего узла
      AddBTreeNode(Node->left, data); // добавл€ем в левое поддерево
    else
      AddBTreeNode(Node->right, data); // добавл€ем в правое поддерево
  }
}
