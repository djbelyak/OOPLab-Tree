#include "container.h"

void FreeBTree(BTree* &Node) // ����������� ������
{
  if(Node != NULL)
  {
	// ����������� �����������
    FreeBTree(Node->left);
    FreeBTree(Node->right);
	// ����������� ������ � ����
    delete Node->data;
    delete Node;

    Node = NULL; 
  }
}

void InitBTreeNode(BTree* &Node, char* data) // ������������� ���� ������
{
  Node = new BTree;
  // ������������� ������
  Node->data = NULL;
  if(data != NULL)
  {
	  Node->data = new char[strlen(data)];
	  strcpy(Node->data, data);
  }
  // ������������� �����������
  Node->left = NULL;
  Node->right = NULL;
}
                  
void AddBTreeNode(BTree* &Node, char *data) // ���������� ���� � ������
{
  if(Node == NULL) // ���� ���� ����
	  InitBTreeNode(Node, data); // ������ ����� ���� �� ����� �������
  else
  {
    if(strcmp(data, Node->data) < 0)  // ���� ����� ���� "������" ����� �������� ����
      AddBTreeNode(Node->left, data); // ��������� � ����� ���������
    else
      AddBTreeNode(Node->right, data); // ��������� � ������ ���������
  }
}

BTree* SearchBTree(BTree* Root, char* data) // ����� ��������
{
	if(Root != NULL) // ���� ���� �� ����
	{
		int compare = strcmp(data, Root->data); // �������� �����

		if(compare == 0)
			return Root; // ������� ������

		if(compare < 0) // ���� ������� ���� ������ ����� �������� ����
			return SearchBTree(Root->left, data); // ���������� ����� � ����� ���������

		if(compare > 0)// ���� ������� ���� ������ ����� �������� ����
			return SearchBTree(Root->left, data); // ���������� ����� � ������ ���������
	}

	return NULL; // ������� �� ������
}