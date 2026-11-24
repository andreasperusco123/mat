#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>



typedef struct {
    int rows;
    int cols;
    int *data;
}mat_t;


void print_mat(mat_t *mat){
    for(int i=0;i<mat->rows;i++){
        for(int j=0;j<mat->cols;j++){
            printf("%d ", mat->data[i*mat->cols+j]);
        }
        printf("\n");

    }

}

mat_t *eye(int dim){
//creates an identity matrix on the heap and returns a pointer to it;


    
}


int main(void){

mat_t a={.rows=3, .cols=3, .data=(int[]){1,2,3,4,5,6,7,8,9}};


print_mat(&a);




}