struct BTree // описание узла дерева
{
	char* data; // данные узла (строка)
	BTree* left; // левое поддерево
	BTree* right; // правое поддерево
};

void hello_world();