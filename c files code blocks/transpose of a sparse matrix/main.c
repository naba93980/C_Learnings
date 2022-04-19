#include <stdio.h>

int main() {

	int r, c;
	printf("Enter the number of rows and columns: ");
	scanf("%d %d", &r, &c);
	int i, j, zeroes = 0, arr[r][c];

	for(i=0; i<r; i++) {

		printf("Enter %d numbers for row number %d: ", c, i+1);

		for(j=0; j<c; j++) {

			scanf("%d", &arr[i][j]);

			if(arr[i][j] == 0)
                zeroes++;

		}

	}

	if(zeroes > (r*c)/2) {

		printf("\nThis is a sparse matrix.\n");
		printf("\nThis is the original matrix\n");

		for(i=0; i<r; i++) {

			for(j=0; j<c; j++) {

				printf("%d\t", arr[i][j]);

			}

			printf("\n");

		}

		printf("\nThis is the transpose of the original matrix\n");

		for(i=0; i<c; i++) {

			for(j=0; j<r; j++) {

				printf("%d\t", arr[j][i]);

			}

			printf("\n");

		}

	} else {
		printf("This is not a sparse matrix.");
	}
}
