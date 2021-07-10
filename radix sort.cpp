#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

//Radix Sort
struct Node
{
    int data;
    struct Node* next;
};
int main()
{
  
    int array[]={3,3,1,145,5,5,83,821,62,9,3,2};
    int size=sizeof(array)/sizeof(array[0]);

    //Maximum element of the array
    int i,j,k;
    int max=array[0];
    for(i=1;i<size;i++)
    {
        if(array[i]>max)
            max=array[i];
    }
    
    //Finding the number of digits in the maximum element
    int n=max;
    int count=0;
    while(n>0)
    {
        count++;
        n=n/10;
    }
 
    for(k=0;k<count;k++)
    {
        struct Node* bin[10];
        
        //Initializing with nulls
        for(i=0;i<=9;i++)
        {
            bin[i]=NULL;
        }
        
        for(i=0;i<size;i++)
        {
            double power=pow(10,k);
            int divisor=trunc(power);
            int ele=(array[i]/divisor)%10;
            struct Node* temp=bin[ele];
            struct Node* n1=(struct Node*)malloc(sizeof(struct Node));
            n1->data=array[i];
            if(temp==NULL)
            {
               
                bin[ele]=n1;
               
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
    while(i<10)
    {
            if(bin[i]!=NULL)
            {
                array[j]=bin[i]->data;
                j++;
                bin[i]=bin[i]->next;
            }
            else
            {
                i++;
            }
            
    }
       
        
        
    }
    
     for(i=0;i<size;i++)
    {
       printf("%d ",array[i]);
    }

    
}
