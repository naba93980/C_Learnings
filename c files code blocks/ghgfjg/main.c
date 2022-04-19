#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int A[20];
void swap(int a, int b) {
    int temp = A[a];
    A[a] = A[b];
    A[b] = temp;
}
int partition(int start, int end){
    int i = start + 1;
    int j = i;
    int pivot = start;

    for (; i< end; i++) {
        if (A[i] < A[pivot]) {
			swap(i, j);
			j++;
        }
    }
    if (j <= end)	swap(pivot, j-1);

    return j - 1;
}
void quick_sort(int start, int end, int K) {
    int part;
    if (start < end) {
        part = partition(start, end);
        if (part == K - 1)
printf("Median is : %d ", A[part+1]);
        if (part > K - 1)
quick_sort(start, part, K);
        else
quick_sort(part + 1, end, K);
    }
    return;
}
int main(int argc, char **argv) {
    int i;
	time_t sec;
    time(&sec);
	srand((unsigned int) sec);
    int N;
	printf("Enter the length of the array: ");
	scanf("%d",&N);

	printf("\nEnter the array elements:\n");
    for (i = 0; i< N; i++)	scanf("%d", &A[i]);
	int k;
	k = N/2;
	quick_sort(0, N, k);
	return 0;
}
