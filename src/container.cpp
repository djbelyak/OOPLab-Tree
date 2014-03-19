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