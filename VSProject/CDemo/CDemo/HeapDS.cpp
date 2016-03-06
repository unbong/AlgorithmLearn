#include "HeapDS.h"



HeapDS::HeapDS()
{
}

HeapDS::HeapDS(int pcapacity, int pheapTyepe)
{
	heapType = pheapTyepe;
	count = 0;
	capacity = pcapacity;
	arrayd = (int *)malloc(sizeof(int) * capacity);
	if (arrayd == NULL) {
		printf("Memory Error");
		return;
	}
	
}


HeapDS::~HeapDS()
{
	free(arrayd);
}
