#include <stdio.h>
#include <stdlib.h>
main()
{
	int ch,v,flag=0;
	while(flag==0)
	{
		printf("\nEnter 1 for Enqueue,\tEnter 2 for Dequeue,\tEnter 3 for Display,\tEnter 4 to exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					printf("Enter the value to enqueue:\n");
					scanf("%d",&v);
					enqueue(v);
					break;
			case 2:
					dequeue();
					break;
			case 3:
					display();
					break;
			case 4:
					flag=1;
					break;
			default:
					printf("Wrong Input");
					break;
		
		}
	}
}
