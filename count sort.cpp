#include<iostream>
using namespace std;
//count sort algorithm
int main()
{
    int array[]={3,3,1,1,5,5,8,8,6,9,3,2};
    int size=sizeof(array)/sizeof(array[0]);
    
    //count sort
    //Maximum element of the array
    int i,j;
    int max=array[0];
    for(i=1;i<size;i++)
    {
        if(array[i]>max)
            max=array[i];
    }
    
    //Creating the count and output carry
    int out[size];
    int count[max+1];
    
    //initializing the count array
    for(i=0;i<=max;i++)
    {
        count[i]=0;
    }
    
    //Store the cumulative count of each element
    for(i=0;i<size;i++)
    {
        count[array[i]]++;
    }
    
    //Fetching the results
    i=0;
    j=0;
    while(i<max+1)
    {
        if(count[i]>0)
        {
            out[j]=i;
            j++;
            count[i]--;
        }
        else
        {
            i++;
        }
        
    }
    //fetching the elements from the output array
    for(i=0;i<size;i++)
    {
        cout<<out[i]<<" ";
    }
}