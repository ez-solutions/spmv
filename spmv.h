//!lib Files
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define Real    double
#define MAXLEN  100
#define MSIZE   16

typedef struct
{
    Real*   entry;
    int*    column;
    int*    bandwidth;
    int     mrow;
    int     mnnz;
    int     mbandwidth;

    //void SetupMatrix()
    //{
//        if((mrow!=0) && (mnnz!=0) && (mbandwidth!=0))
//        {
//            entry = (Real*)malloc(mrow*mbandwidth*sizeof(Real));
//            column = (int*)malloc(mrow*mbandwidth*sizeof(int));
//            bandwidth = (int*)malloc(mrow*sizeof(int));
//            memset(entry, 0, mrow*mbandwidth*sizeof(Real));
//            memset(column, -1, mrow*mbandwidth*sizeof(int));
//            memset(bandwidth, -1, mrow*sizeof(int));
//        }
//        else
//        {
//            printf("\nERROR: mrow, mnnz or mbandwidth is not set!!!\n");
//            exit(1);
//        }
    //}
    void testfunc()
    {

    };
}ELLRMatrix;

//! \func Function accepts ELLR matrix format, free memories
void FreeMatrix(ELLR aMatrix);
