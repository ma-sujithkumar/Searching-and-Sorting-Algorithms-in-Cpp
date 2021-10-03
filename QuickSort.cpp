#include<iostream>
using namespace std;
void swap(int* x,int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    do
    {
        do
        {
            i++;
        }while(arr[i]<=pivot);
        do
        {
            j--;
        }while(arr[j]>pivot);
        if (i<j)
        swap(&arr[i],&arr[j]);
    }while(i<j);
    swap(&arr[j],&arr[low]);
    return j;
}
void QuickSort(int arr[],int low,int high)
{
    if(low<high)
    {
    int p=partition(arr,low,high);
    QuickSort(arr,low,p);
    QuickSort(arr,p+1,high);
    }
}
int main()
{
    int arr[]={51,45,63,71,43,23,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0,n-1);
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
