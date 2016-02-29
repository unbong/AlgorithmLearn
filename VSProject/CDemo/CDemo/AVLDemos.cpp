#include "AVLDemos.h"



AVLDemos::AVLDemos()
{
	root = createAVLNode();
}


AVLDemos::~AVLDemos()
{
}

AVLNode * AVLDemos::getRoot()
{
	return root;
}

void AVLDemos::setRoot()
{
}

AVLNode * AVLDemos::addNewNode(AVLNode * root, AVLNode * parent, int newData)
{
	if (!root) {
		AVLNode * node = new AVLNode(newData);
		if (node == NULL) {
			printf("Memory Error!");
			return NULL;
		}
		return node;
	}
	else if (newData<root->data) {
		root->leftNode=addNewNode(root->leftNode,root,newData);
		if (Height(root->leftNode)-Height(root->rightNode)==2) {
			if (newData < root->leftNode->data) {
				singleNodeRotateLeft(root);
			}
			else {
				doubleNodeRotateLeft(root);
			}
		}
	}

	else if (newData>root->data) {
		root->rightNode = addNewNode(root->rightNode, root, newData);
		if (Height(root->rightNode) - Height(root->leftNode) == 2) {
			if (newData > root->rightNode->data) {
				singleNodeRotateLeft(root);
			}
			else {
				doubleNodeRotateLeft(root);
			}
		}
	}

	root->height = std::max(Height(root->leftNode), Height(root->rightNode)) + 1;
	return root;
}
//‰E‰ñ“]@ˆê‰ñ
AVLNode * AVLDemos::singleNodeRotateLeft(AVLNode * node)
{
	AVLNode * leftNode = node->leftNode;
	node->leftNode = leftNode->rightNode;
	leftNode->rightNode = node;
	node->height = std::max(Height(node->leftNode), Height(node->rightNode))+1;
	leftNode->height = std::max(Height(leftNode->leftNode), Height(leftNode->rightNode)) + 1;
	return leftNode;
}
//‰E‰ñ“]@“ñ‰ñ
AVLNode * AVLDemos::doubleNodeRotateRight(AVLNode * node)
{
	node->leftNode=singleNodeRotateLeft(node->leftNode);
	return singleNodeRotateRight(node);
}
void AVLDemos::printNode(AVLNode * root)
{
	if (root == NULL) {
		return;
	}
	printNode(root->leftNode);
	printf("%d, ",root->data);
	printNode(root->rightNode);
}
AVLNode * AVLDemos::buildHB0BST(int height,int * count)
{
	if (height<0) {
		return NULL;
	}
	AVLNode  * rootNode  = new AVLNode();
	rootNode->leftNode = buildHB0BST(height - 1,count);
	rootNode->data = (*count)++ ;
	rootNode->height = height;
	rootNode->rightNode = buildHB0BST(height - 1,count);
	return rootNode;
}
AVLNode * AVLDemos::buildMinNodeBST(int height, int * count)
{
	if (height<0) {
		return NULL;
	}
	AVLNode * rootNode = new AVLNode();
	rootNode->leftNode = buildMinNodeBST(height-1,count);
	rootNode->data = (*count)++;
	rootNode->height = height;
	rootNode->rightNode = buildMinNodeBST(height - 2, count);
	return rootNode;
}
void  AVLDemos::rangeCount(AVLNode * rootNode, int a, int b, int * count)
{
	if (rootNode == NULL) {
		return ;
	}
	rangeCount(rootNode->leftNode, a, b, count);
	if (rootNode->data <= b && rootNode->data>= a) {
		(*count)++;
	}
	rangeCount(rootNode->rightNode, a, b, count);

}
//¶‰ñ“]@“ñ‰ñ
AVLNode * AVLDemos::doubleNodeRotateLeft(AVLNode * node)
{
	node->rightNode=singleNodeRotateRight(node->rightNode);
	return singleNodeRotateLeft(node);
}
//¶‰ñ“]@ˆê‰ñ
AVLNode * AVLDemos::singleNodeRotateRight(AVLNode * node)
{
	AVLNode * rightNode = node->rightNode;
	node->rightNode = rightNode->leftNode;
	rightNode->leftNode = node;
	node->height = std::max(Height(node->leftNode), Height(node->rightNode)) + 1;
	rightNode->height = std::max(Height(rightNode->leftNode), Height(rightNode->rightNode)) + 1;
	return rightNode;
}

//‚‚³
int AVLDemos::Height(AVLNode * node)
{
	if (!node) {
		return 0;
	}
	return node->height;
}

int AVLDemos::getMiddleNode(int height)
{
	return (int)pow(2,height);
}

AVLNode * AVLDemos::createAVLNode()
{
	AVLNode * left12 = new AVLNode(4);
	AVLNode * left11 = new AVLNode(1);
	left12->height = 0;
	left11->height = 0;

	AVLNode * right1 = new AVLNode(8);
	AVLNode * left1 = new AVLNode(2);
	left1->height = 1;
	right1->height = 1;


	left1->leftNode = left11;
	left1->rightNode = left12;
	
	AVLNode * root = new AVLNode(6);
	root->leftNode = left1;
	root->rightNode = right1;
	root->height = 2;

	right1->leftNode = new AVLNode(7);
	right1->rightNode = NULL;
	right1->leftNode->height = 0;

	left12->leftNode = NULL;
	left12->rightNode = NULL;
	left11->leftNode = NULL;
	left11->rightNode = NULL;

	return root;
}
