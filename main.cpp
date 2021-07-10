#include<iostream>
#include<stdlib.h>
using namespace std;
//Bucket Sort Algorithm - a modified version of Count Sort
struct Node
{
    //2 fields
    int data;
    struct Node* next;
};
int main()
{
    int array[]={3,3,1,1,5,5,8,8,6,9,3,2};
    int size=sizeof(array)/sizeof(array[0]);
    
    //Maximum element of the array
    int i,j;
    int max=array[0];
    for(i=1;i<size;i++)
    {
        if(array[i]>max)
            max=array[i];
    }
    
     int out[size];
     struct Node* bin[max+1];
     
      for(i=0;i<=max;i++)
    {
        bin[i]=NULL;
    }
    
    for(i=0;i<size;i++)
    {
        struct Node* temp=bin[array[i]];
        struct Node* n1=(struct Node*)malloc(sizeof(struct Node));
        n1->data=array[i]
        
        if(temp==NULL)
        {
            bin[array[i]]=n1;
        }
        else
        {
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            
            temp->next=
            
            
        }
    }
     
}