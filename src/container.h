#include <iostream>

struct BTree // �������� ���� ������
{
	char* data; // ������ ���� (������)
	BTree* left; // ����� ���������
	BTree* right; // ������ ���������
};

void FreeBTree(BTree*&); // ����������� ������
void AddBTreeNode(BTree*&, char*); // ���������� ���� � ������
void InitBTreeNode(BTree*&, char*); // ������������� ���� ������