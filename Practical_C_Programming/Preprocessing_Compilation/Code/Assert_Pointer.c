#include<stdio.h>
#include<assert.h>

int findDeterminant(int *ptr);

int main() {
	
	int a[2][2];
	printf("Enter the values of the array: \n");
	for (int i=0; i<2; i++){

		for (int j=0; j<2; j++)

			scanf("%d", &a[i][j]);
	}

	int *ptr;
	ptr = &a[0][0];

	int determinant = findDeterminant(ptr);
	printf("The Determinant of the matrix is: %d", determinant);
	return 0;

}

int findDeterminant(int *ptr) {
	
	assert(ptr != NULL && "Pointer is not pointing");
	return (*(ptr + (0 * 2 + 0))) * (*(ptr + (1 * 2 + 1))) - (*(ptr + (0 * 2 + 1))) * (*(ptr + (1 * 2 + 0)));
}
