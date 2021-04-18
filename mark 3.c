#include<stdio.h>
main()

{
	printf("Enter your marks : ");
		int mark=0;
	scanf("%d",&mark);
	//2.Check on that mark
	if (mark>=80) 
	{
			//what happens if the conditon is true
		printf("Grade A");
	}
    else if (mark>=70 && mark<84)
    {
    	printf("Grade B ");
	}
    if (mark>=55 && mark<69)
	{
	    printf("Grade C ");	
	}
	else if (mark>=40 && mark<54)
	{
		printf("Grade D ");
	}
	if(mark<=40)
	{
		printf("Grade F ");
	}
		

	
}
