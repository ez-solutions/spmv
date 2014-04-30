#include "spmv.h"

int main()
{
    printf("Hello SpMV!\n");

    char VectorFile[MAXLEN];                            //! \var vector file name
	char MatrixFile[MAXLEN];                            //! \var matrix file name
    sprintf(MatrixFile, "%s%d", "amatrix", MSIZE);      //! \var create matrix file based on matrix size
    sprintf(VectorFile, "%s%d", "bvector",   MSIZE);    //! \var create vector file based on matrix size

    printf("\nMatrix file is: %s\n", MatrixFile);
    ELLRMatrix AMatrix;
    ReadMatrix(AMatrix, MatrixFile);



    FreeMatrix(AMatrix);
    return 0;
}
