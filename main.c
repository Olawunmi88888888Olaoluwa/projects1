#include <stdio.h>
#include <stdlib.h>

int rows1,columns1,rows2,columns2,matrixA[50][50],matrixB[50][50],matrixproduct[50][50],i,j,k,sum=0;
void getmatrixA(){
    printf("C program to multiply two matrices:\n");
    printf("Enter rows and columns of first matrix:");
    scanf("%i %i",&rows1,&columns1);
    printf("Enter first matrix of size %ix%i:",rows1,columns1);
    for(i=0;i<rows1;i++){
        for(j=0;j<columns1;j++){
            scanf("%i",&matrixA[i][j]);
        }
    }
}

void getmatrixB(){
    printf("Enter rows and columns of second matrix:");
    scanf("%i %i",&rows2,&columns2);
    printf("Enter second matrix of size %ix%i:",rows2,columns2);
    for(i=0;i<rows2;i++){
        for(j=0;j<columns2;j++){
            scanf("%i",&matrixB[i][j]);
        }
    }
}

void getmatrixproduct(){
    if(columns1==rows2){
        for(i=0;i<rows1;i++){
            for(j=0;j<columns2;j++){
                sum=0;
                for(k=0;k<columns1;k++){
                    sum=sum+matrixA[i][k]*matrixB[k][j];
            }
                    matrixproduct[i][j]=sum;
        }
        }
        printmatrixproduct();
    }
    else{
        printf("Number of columns of first matrix must be equal to number of rows of second matrix\n");

    }
}

void printmatrixproduct(){
    printf("Matrix multiplication:\n");
    for(i=0;i<rows1;i++){
        for(j=0;j<columns2;j++){
            printf("%i\t",matrixproduct[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    //c program for matrix multiplication
    while(1){
    getmatrixA();
    getmatrixB();
    getmatrixproduct();

    }
    return 0;
}
