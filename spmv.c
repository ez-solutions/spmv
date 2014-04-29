//This is the source file

#include "spmv.h"

void ReadMatrix(ELLRMatrix aMatrix, const char aFileName[])
{
    int mrow = 10;
    int mnnz = 50;
    int mbandwidth = 5;

    aMatrix.mrow = mrow;
    aMatrix.mnnz = mnnz;
    aMatrix.mbandwidth = mbandwidth;
}
