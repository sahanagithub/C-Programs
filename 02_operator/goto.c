/*application:goto.c
 * brief:To check whether the number is even or odd using goto statement,take number from user
 * title:project engineer
 * author:sahana.s
 * date:25/03/2023
 */
 #include<stdio.h>
int  main()
{
	int x,y;
	printf("enter the number\n");
	scanf("%d",&x);
	 if(x%2==0)
		 goto even;
	 else
		 goto odd;

even:
	 printf("%d is even number\n",x);
	return 0;
odd:
	 printf("%d is odd number\n",x);
	 return 0;
}


