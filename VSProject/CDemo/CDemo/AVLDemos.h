#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include "AVLNode.h"

class AVLDemos
{
private:
	class AVLNode * root = NULL;
public:
	AVLDemos();
	~AVLDemos();
	AVLNode * getRoot();
	void setRoot();

	AVLNode * addNewNode(AVLNode * root, AVLNode * parent,int  newData);

	void printNode(AVLNode * root);

	//create HB(0) BST
	AVLNode * buildHB0BST(int height, int * count);
	//create min node BST
	AVLNode * buildMinNodeBST(int height, int * count);
	void  rangeCount(AVLNode * rootNode, int a, int b, int * count);
private:
	class AVLNode *  createAVLNode();
	int Height(AVLNode * node);
	int getMiddleNode(int height);
	//‰ñ“]method
	AVLNode * singleNodeRotateLeft(AVLNode * node);
	AVLNode * doubleNodeRotateLeft(AVLNode * node);
	AVLNode * singleNodeRotateRight(AVLNode * node);
	AVLNode * doubleNodeRotateRight(AVLNode * node);

};

