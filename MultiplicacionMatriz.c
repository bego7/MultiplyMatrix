#include <stdlib.h>
#include <stdio.h>
struct fraction
{
	int numerator;
	int denominator;
};
int main(){
	int col1, row1, col2, row2;
	scanf("%d\n",&row1);
	scanf("%d\n",&col1);
	scanf("%d\n",&row2);
	scanf("%d",&col2);

	if(col1!=row2){
		printf("The operation is impossible\n");
	}
	else{
		
		struct fraction *intento1= malloc(sizeof(int)*row1*col1);
		struct fraction *matrix1= malloc(sizeof(intento1)*row1*col1);
		printf("Tam en bytes de matriz 1 es :%ld\n",sizeof(matrix1));
		printf("Direccion de matrix1:%p\n",matrix1);
		struct fraction *baMatrix1= matrix1;
		int *ptMatrix1 = (int *)matrix1;
		int tamMatrix1 = (row1*col1);
		// printf("Tam de matrix 1 es: %d\n", tamMatrix1);
		struct fraction *matrix2= malloc(sizeof(int)*row2*col2);
		int counter1=1;

		while(counter1<=tamMatrix1){
			scanf("%d\n",&matrix1->numerator);
			printf("%d\n",matrix1->numerator);
			matrix1++;


			scanf("%d\n",&matrix1->denominator);
			printf("%d\n",matrix1->denominator);
			matrix1++;
		
			counter1++;
		}
		
		// printf("Direccion de base adrress:%p\n",baMatrix1);
		// ptMatrix1= (int *)baMatrix1;
		// printf("%d\n",baMatrix1->numerator);
		// baMatrix1++;
		// printf("%d\n",baMatrix1->denominator);
		printf("Direccion de pointer matrix:%p\n",ptMatrix1);
		printf("Direccion de matrix1:%p\n",matrix1);
		for(int i=0;i<row1;i++){
			for(int j=0;j<col1;j++){
				printf(" %d",baMatrix1->numerator);
				baMatrix1++;
				printf(" %d",baMatrix1->denominator);
				baMatrix1++;
			}
			printf("\n");
		}

		// while(matrix1<(row1*col1)){
		// 	scanf("%d\n",&matrix1->numerator);
		// 	scanf("%d\n",&matrix1->denominator);
		// 	matrix1++;
		// }
		// for(int i=0;i<row1;i++){
		// 	for(int j=0;j<col1;j++){
		// 		scanf("%d\n",&matrix2->numerator);
		// 		scanf("%d\n",&matrix2->denominator);
		// 	}
		// }
		// struct fraction *newMatrix= malloc(sizeof(int)*row1*col2);
		// struct fraction *pMatrix= newMatrix;
		// int counter =1;
		// int tamNewMatrix = (row1)*(col2);
		
		

		// while(counter<=(row1)*(col2)){
		// 	*pMatrix=counter;
		// 	pMatrix++;
		// 	counter++;
		// }

	}

	return 0;
}