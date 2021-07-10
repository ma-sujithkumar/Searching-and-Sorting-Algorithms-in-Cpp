#include<iostream>
using namespace std;
//Selection Sort
void swap(int* x, int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void SelectionSort(int arr[],int size)
{
    int i,j,min; //three indices;
    for(i=0;i<size-1;i++) //keep track of the number of passes
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
}
int main()
{
    int arr[]={2,4,3,7,6,9};
    int size=6;
    SelectionSort(arr,size);
    int i;
    for(i=0;i<=size-1;i++)
    {
        printf("%d ",arr[i]);
    }
}
