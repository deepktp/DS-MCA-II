#include<stdio.h>
#define MAX 5
int main(){
	int A[MAX]= {1, 2, 3, 4, 5};
	int B[MAX], i;
	printf("Elements of array a: ");
	//Traversal
	for(i=0; i<MAX; i++){
		printf("%d\t", A[i]);
	}

	printf("Enter elements of array b: \n");
	//Insertion
	for(i=0; i<MAX; i++)
		scanf("%d", &B[i]);
	return 1;
}
