#include<stdio.h>
int main()
{
	int n;
	printf("enter the day number \n");
	scanf("%d",&n);
	switch(n)
	{
		case(1):
			printf("sunday");
		    break;
		    
		case(2):
			printf("monday");
		    break;
		    
		case(3):
			printf("tuesday");
		    break;
		    
		case(4):
			printf("wednesday");
		    break;
		    
		case(5):
			printf("thrusday");
		    break;
		    
		case(6):
			printf("friday");
		    break;
		    
		case(7):
			printf("saturday");
		    break;
			
		default:
			printf("enter the correct week number");
		
	}
}
