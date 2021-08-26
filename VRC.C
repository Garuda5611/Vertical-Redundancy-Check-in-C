#include<stdio.h>
#include<conio.h>
void main()
{
  char str[100];
  int n,i,count=0,choice;
  clrscr();
  do{
  clrscr();
  printf("\t\t\t***VERTICAL REDUNDANCY CHECK***\n1. Even Parity\n2. Odd Parity\n3. Exit\n");
  printf("Enter your choice\n");
  scanf("%d",&choice);
  if(choice==3)
  goto xy;
  switch(choice)
  {
  case 1:
  {
  printf("\n\t\t****Vertical Redundancy Check (VRC)***\n");
  printf("\nEnter size of data\n");
  scanf("\t\t%d",&n);
  printf("\n\n\t\t***Rules to enter data***\n\t1. Enter one bit of data and press enter\n");
  printf("\t2. Enter the %d size of data in the binary form\n",n);
  printf("\nEnter your data here\n");
  for(i=0;i<=n-1;i++)
  {
     scanf("\t\t%d",&str[i]);
  }
  printf("\nYou Entered\n");
   for(i=0;i<=n-1;i++)
  {
     printf("%d",str[i]);
  }
  for(i=0;i<=n-1;i++)
  {
      if(str[i]==1)
	 count++;
  }
  if(count%2==0)
  {
     for(i=n-1;i>=0;i--)
     {
	 str[i+1]=str[i];
     }
     str[0]=0;
  }
  else
  {
     for(i=n-1;i>=0;i--)
     {
	 str[i+1]=str[i];
     }
     str[0]=1;
 }
  printf("\n\n\t\t*********************************************\n\n\t\t     Data transfered after VRC is ");
    for(i=0;i<=n;i++)
  {
     printf("%d",str[i]);
  }
  break;
  }
  case 2:
  {
  printf("\n\t\t****Vertical Redundancy Check (VRC)***\n");
  printf("\nEnter size of data\n");
  scanf("\t\t%d",&n);
  printf("\n\n\t\t***Rules to enter data***\n\t1. Enter one bit of data and press enter\n");
  printf("\t2. Enter the %d size of data in the binary form\n",n);
  printf("\nEnter your data here\n");
  for(i=0;i<=n-1;i++)
  {
     scanf("\t\t%d",&str[i]);
  }
  printf("\nYou Entered\n");
   for(i=0;i<=n-1;i++)
  {
     printf("%d",str[i]);
  }
  for(i=0;i<=n-1;i++)
  {
      if(str[i]==1)
	 count++;
  }
  if(count%2==0)
  {
     for(i=n-1;i>=0;i--)
     {
	 str[i+1]=str[i];
     }
     str[0]=1;
  }
  else
  {
     for(i=n-1;i>=0;i--)
     {
	 str[i+1]=str[i];
     }
     str[0]=0;
 }
  printf("\n\n\t\t*********************************************\n\n\t\t     Data transfered after VRC is ");
    for(i=0;i<=n;i++)
  {
     printf("%d",str[i]);
  }
  break;
  }
  case 3:
  break;
  default:
  printf("\nenter valid input");
  }
  getch();
  }
  while(choice!=3);
  xy:
  getch();
}