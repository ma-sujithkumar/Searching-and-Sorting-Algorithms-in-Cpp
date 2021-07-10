/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
int main()
{
    int array[]={3,3,1,1,5,5,8,8,6,9,3,2};
    int size=sizeof(array)/sizeof(array[0]);
    
    //count sort
    //Maximum element of the array
    int i,j;
    int out[size];
    int max=array[0];
    for(i=1;i<size;i++)
    {
        if(array[i]>max)
            max=array[i];
    }
    
    struct Node* bin[max+1];
  //  struct Node* n1=(struct Node*)malloc(sizeof(struct Node));
  
    for(i=0;i<=max;i++)
    {
        bin[i]=NULL;
    }
    
     for(i=0;i<size;i++)
    {
        struct Node* temp=bin[array[i]];
        struct Node* n1=(struct Node*)malloc(sizeof(struct Node));
        n1->data=array[i];
        if(temp==NULL)
        {
           
            bin[array[i]]=n1;
           
        }
        else
        {
            
        
        while(temp->next!=NULL)
        temp=temp->next;
        
       
        temp->next=n1;
       
        }
    }
    
  i=0;
    j=0;
    while(i<max+1)
    {
        if(bin[i]!=NULL)
        {
            out[j]=bin[i]->data;
            j++;
            bin[i]=bin[i]->next;
        }
        else
        {
            i++;
        }
        
    }
    
    for(i=0;i<size;i++)
    {
        printf("%d ",out[i]);
    }
}
