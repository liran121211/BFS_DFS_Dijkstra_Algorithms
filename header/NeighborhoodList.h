#pragma once
#include "LinkedList.h"

LinkedList** createNeighborhoodList(size_t);
void addNeighbor(LinkedList**, int, int, int);
void printVertices(LinkedList**, int);