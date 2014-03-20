#include <iostream>

struct BTree // �������� ���� ������
{
	char* data; // ������ ���� (������)
	BTree* left; // ����� ���������
	BTree* right; // ������ ���������
};

void FreeBTree(BTree*&); // ����������� ������
void InitBTree(BTree*&); // ������������� ������
void AddBTreeNode(BTree*&, char*); // ���������� ���� � ������
void InitBTreeNode(BTree*&, char*); // ������������� ���� ������
BTree* SearchBTree(BTree*, char*); // ����� ��������
