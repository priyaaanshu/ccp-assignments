// Write a C program to input week number and print week day.


#include<stdio.h>
void main(){
	int wn;
	printf("Enter week number: ");
	scanf("%d",&wn);
	switch(wn){
		case 1:
		printf("Sunday");
		break;
		case 2:
		printf("Monday");
		break;
		case 3:
		printf("Tuesday");
		break;
		case 4:
		printf("Wednesday");
		break;
		case 5:
		printf("Thursday");
		break;
		case 6:
		printf("Friday");
		break;
		case 7:
		printf("Saturday");
		break;
		default:
		printf("Invalid!!!");
	}
}
