// Write a C Program to Sum of two One-Dimensional Arrays

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int main() {
	int i,n;
	int *a,*b,*c;
	printf("How many Elements in each array...\n");
	scanf("%d", &n);
	a = (int *) malloc(n*sizeof(int));
	b = (int *) malloc(n*sizeof(int));
	c =( int *) malloc(n*sizeof(int));
	printf("Enter Elements of First List\n");
	for (i=0;i<n;i++) {
		scanf("%d",a+i);
	}
	printf("Enter Elements of Second List\n");
	for (i=0;i<n;i++) {
		scanf("%d",b+i);
	}
	for (i=0;i<n;i++) {
		*(c+i) = *(a+i) + *(b+i);
	}
	printf("Resultant List is\n");
	for (i=0;i<n;i++) {
		printf("%d\n",*(c+i));
	}
}
