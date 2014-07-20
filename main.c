#include "spmv.h"

int main()
{
    printf("Hello SpMV!\n");

    char VectorFile[MAXLEN];                            //! \var vector file name
    char MatrixFile[MAXLEN];                            //! \var matrix file name
    sprintf(MatrixFile, "%s%d", "amatrix", MSIZE);      //! \var create matrix file based on matrix size
    sprintf(VectorFile, "%s%d", "bvector",   MSIZE);    //! \var create vector file based on matrix size

    printf("\nMatrix file is: %s\n", MatrixFile);

    //!This change made in ELL branch
    //!This is csr branch

	//!Free matrix memory
//    FreeMatrix(AMatrix);
    return 0;
}
