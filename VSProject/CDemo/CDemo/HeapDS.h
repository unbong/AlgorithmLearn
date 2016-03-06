#pragma once

#include <stdlib.h>
#include <stdio.h>

class HeapDS{

public:
	int * arrayd;
	int count;
	int capacity;
	int heapType;
public:
	HeapDS();
	HeapDS(int pcapacity, int pheapTyepe);
	~HeapDS();
};

