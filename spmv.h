//This is a header file

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define Real double

typedef struct
{
    Real*   endtry;
    int*    column;
    int*    bandwidth;
    int     mrow;
    int     mnnz;
    int     mbandwidth;
}ELLRMatrix;


void ReadMatrix(ELLRMatrix aMatrix, const char aFileName[]);
