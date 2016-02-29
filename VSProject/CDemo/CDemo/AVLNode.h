#pragma once
class AVLNode
{
public :
	int data;
	class AVLNode * leftNode;
	class AVLNode * rightNode;
	int height;
public:
	AVLNode();
	AVLNode(int pdata);
	~AVLNode();
};

