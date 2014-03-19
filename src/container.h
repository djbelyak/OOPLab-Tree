#include <iostream>

struct BTree // описание узла дерева
{
	char* data; // данные узла (строка)
	BTree* left; // левое поддерево
	BTree* right; // правое поддерево
};

void FreeBTree(BTree*&); // уничтожение дерева
void AddBTreeNode(BTree*&, char*); // добавление узла в дерево
void InitBTreeNode(BTree*&, char*); // инициализация узла дерева