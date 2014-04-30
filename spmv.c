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

    FILE* myfile;
    if((myfile=fopen(aFileName, "r"))==NULL)
	{
		fprintf(stderr, "\nError opening %s!\n", aFileName);
		exit(0);
	}
	else
	{
	    char sdummy[MAXLEN];
		fscanf(myfile, "%s\t%s\t%s", sdummy, sdummy, sdummy);
		//!read mRow, totalNNZ, mBandWidth
		fscanf(myfile, "%d\t%d\t%d", &aMatrix.mrow, &aMatrix.mnnz, &aMatrix.mbandwidth);
		printf("mRow = %d\ntotalNNZ = %d\nmBandWidth = %d\n", aMatrix.mrow, aMatrix.mnnz, aMatrix.mbandwidth);
		//!initialize COEF, JCOEF, bandWidthOccu with -1s
		//aMatrix.SetupMatrix();
	}



}


void FreeMatrix(ELLRMatrix aMatrix)
{
    if(sizeof(aMatrix.entry) != 0)
    {
        free(aMatrix.entry);
        free(aMatrix.column);
        free(aMatrix.bandwidth);
        aMatrix.mrow = 0;
        aMatrix.mnnz = 0;
        aMatrix.mbandwidth = 0;
    }
