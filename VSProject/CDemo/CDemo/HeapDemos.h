#pragma once

class HeapDemos
{
public:
	class HeapDS * heapData;
public:
	HeapDemos();
	~HeapDemos();
	HeapDS * buildHeap(int arrData[], int n);
	void percolateDown(HeapDS *  heap, int i);
	int deleteMax();
	int insertNewData(int data);
	int heapSort(int arr[],int n);

private:
	int leftChild(HeapDS * heap,int i);
	int rightChild(HeapDS * heap, int i);
	int parent(HeapDS * heap, int i);
};

