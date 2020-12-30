#ifndef BINARYTREE_H
#define BINARYTREE_H


class treeNode
{
public:
	treeNode(int k) :key(k), leftChild(0), rightChild(0) {};
private:
	int key;
	treeNode* leftChild;
	treeNode* rightChild;
};

class binaryTree
{
public:
	void insert();
	void search();
};


#endif // !BINARYTREE_h