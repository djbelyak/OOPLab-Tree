#include <iostream>

struct BTree // �������� ���� ������
{
	char* data; // ������ ���� (������)
	BTree* left; // ����� ���������
	BTree* right; // ������ ���������
};

void FreeBTree(BTree*&); // ����������� ������