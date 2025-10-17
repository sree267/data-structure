#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],b[20],c[30],s1,s2,i,k;
clrscr();
printf("enter the size of first array");
scanf("%d",&s1);
printf("enter the elements of first array");
for(i=0; i<s1; i++)
{
scanf("%d",&a[i]);
c[i]=a[i];
}
k=i;
printf("enter the size of second array");
scanf("%d",&s2);
printf("enter the elements of second array");
for(i=0; i<s2; i++)
{
scanf("%d",&b[i]);
c[k]=b[i];
k++;
}
printf("\n merged array elements are:");
for(i=0; i<k; i++)
{
printf("%d\n",c[i]);
}
getch();
}