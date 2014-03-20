#include "stdafx.h"
#include "container.h"

int main(int argc, char** argv)
{
	BTree* Root = NULL; // инициализация корня дерева
	InitBTree(Root); // инициализация дерева

	FreeBTree(Root); // уничтожение дерева
	return 0;
}