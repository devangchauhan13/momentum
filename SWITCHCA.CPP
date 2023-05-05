#include<stdio.h>

main()
{
	char c;
	printf("\npress s for sunday");
	printf("\npress m for monday");
	printf("\npress t for tuesday");
	printf("\npress w for wednesday");
	printf("\npress T for thursday");
	printf("\npress f for friday");
	printf("\npress S for saturday");
	printf("\nenter number among this:-");
	scanf("%c",&c);
	switch(c)
	{
		case 's':
			printf("1=sunday,S");
			break;
		case 'M':
			printf("2=monday,M");
			break;
		case 't':
			printf("3=tuesday,T");
			break;
		case 'W':
			printf("4=wednesday,W");
			break;
		case 'T':
			printf("5=thursday,T");
			break;
		case 'F':
			printf("6=friday,F");
			break;
		case 'S':
			printf("7=saturday,S");
			break;
		default :
			printf("plz enter valid choice!!");
	}


}