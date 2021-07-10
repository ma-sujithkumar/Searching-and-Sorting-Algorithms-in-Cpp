#include<iostream>
using namespace std;
//Insertion sort



int main()
{
    int array[]={8,2,1,3,2,5};
    int n=6;
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=array[i];
        j=i-1;
        
        //comparing and shifting
        while(j>=0 && array[j]>key)
        {
            array[j+1]=array[j];
            j=j-1;
        }
        
        array[j+1]=key;
    }
    
    
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}
