#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100
char queue[MAX];
int front=-1,rear=-1;
void enqueue(char ch)
{
if(rear==MAX-1)
{
printf("Queue overflow\n");
return;
}
if(front==-1) front=-0;
queue[++rear]=ch;
}
char dequeue_rear()
{
if(rear==-1)
{
printf("Queue Underflow \n");
return'\0';
}
return queue[rear--];
}
int main()
{
char str[MAX],Processed[MAX],reversed[MAX];
int i,len,k,idx=0;
printf("Enter a string:");
fgets(str,MAX,stdin);
str[strcspn (str,"\n")]='\0';
for(i=0; str[i]!='\0'; i++)
{
if(!isspace((unsigned char)str[i]))
{
Processed[idx++]=tolower((unsigned char)str[i]);
}
}
Processed[idx]='\0';
len=strlen(Processed);
//Enqueue each character
for(i=0; i<len; i++)
{
    enqueue(Processed[i]);
}
//Dequeue from rear to form reversed string
 k=0;
while(rear!=-1)
{
reversed[k++]=dequeue_rear();
}
reversed[k]='\0';
//Compare and print result
if(strcmp(Processed,reversed)==0)
{
printf("PALINDROME \n");
}
else
{
printf("Not a Palindrome \n");
}
return 0;
}