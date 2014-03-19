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

void InitBTreeNode(BTree* &Node, char* data) // инициализация узла дерева
{
  Node = new BTree;
  // инициализация данных
  Node->data = NULL;
  if(data != NULL)
  {
	  Node->data = new char[strlen(data)];
	  strcpy(Node->data, data);
  }
  // инициализация поддеревьев
  Node->left = NULL;
  Node->right = NULL;
}
                  
void AddBTreeNode(BTree* &Node, char *data) // добавление узла в дерево
{
  if(Node == NULL) // если узел пуст
	  InitBTreeNode(Node, data); // создаём новый узел на месте пустого
  else
  {
    if(strcmp(data, Node->data) < 0)  // если новый ключ "меньше" ключа текущего узла
      AddBTreeNode(Node->left, data); // добавляем в левое поддерево
    else
      AddBTreeNode(Node->right, data); // добавляем в правое поддерево
  }
}

BTree* SearchBTree(BTree* Root, char* data) // поиск элемента
{
	if(Root != NULL) // если узел не пуст
	{
		int compare = strcmp(data, Root->data); // сравнить ключи

		if(compare == 0)
			return Root; // элемент найден

		if(compare < 0) // если искомый ключ меньше ключа текущего узла
			return SearchBTree(Root->left, data); // продолжаем поиск в левом поддереве

		if(compare > 0)// если искомый ключ больше ключа текущего узла
			return SearchBTree(Root->left, data); // продолжаем поиск в правом поддереве
	}

	return NULL; // элемент не найден
}