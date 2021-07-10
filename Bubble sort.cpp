#include<iostream>
using namespace std;
//Implementation of Bubble Sort Algorithm
void swap(int* x, int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void BubbleSort(int array[],int size)
{
    int i,j;
    bool isSwapped;
    for(i=0;i<size-1;i++)
    {
        isSwapped=false;
        for(j=0;j<size-1-i;j++)
        {
            if(array[j]>array[j+1])
            {
                swap(&array[j],&array[j+1]);
                isSwapped=true;
            }
            
        }
        if(isSwapped==false)
        {
            break;
        }
    }
}

int main()
{
    int arr[]={2,4,3,7,6,9};
    int size=6;
    BubbleSort(arr,size);
    int i;
    for(i=0;i<=size-1;i++)
    {
        printf("%d ",arr[i]);
    }
}