#include "stdafx.h"
#include "container.h"

int main(int argc, char** argv)
{
	BTree* Root = NULL; // ������������� ����� ������
	InitBTree(Root); // ������������� ������

	FreeBTree(Root); // ����������� ������
	return 0;
}