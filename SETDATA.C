#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int set1[30],set2[30],s1,s2,uni[30],inter[30],diff[30],i,ch;
clrscr();
printf("Enter number of elements in first set:");
scanf("%d",&s1);
printf("Enter elements in 1st set(only 0s&1s):");
for(i=0; i<s1; i++)
{
scanf("%d",&set1[i]);
}
printf("\n enter number of elements in second set:");
scanf("%d",&s2);
printf("Enter elements in second set(only 0s&1s):");
for(i=0; i<s2; i++)
{
scanf("%d", &set2[i]);
}
printf("\n 1.Union");
printf("\n 2.Intersection");
printf("\n 3.Difference");
printf("\n 4.Exit");
while(1)
{
printf("\n ENter choice:");
scanf("%d",&ch);
switch(ch)
{
case 1://UNION
      if(s1==s2)
      {
      printf("\n Elements after Union operation:");
      for(i=0; i<=s1; i++)
      {
      uni[i]=set1[i]|set2[i];
      printf("%d", uni[i]);
      }
      }
      else
      {
      printf("set union not possible as sets as of different size\n");
      }
      break;
case 2://INTERSECTION
      if(s1==s2)
      {
      printf("\n Elements after intersection operation:");\
      for(i=0; i<s1; i++)
      {
      inter[i]=set1[i]&set2[i];
      printf("%d",inter[i]);
      }
      }
      else
      {
      printf("set intersection not possiblr as set are different size\n");
      }
      break;
case 3://DIFFERENCE
      if(s1==s2)
      {
      printf("\n Elements after  difference operation:");
      for(i=0; i<s1; i++)
      {
      diff[i]=set1[i]&~set2[i];
      printf("%d",diff[i]);
      }
     }
     else
     {
      printf("set difference not possible as set are of difference size\n");
     }
     break;
case 4:
     exit(0);
default:
      printf("\n wrong choice,please select a valid choice");
      break;
      }
     }
    }
