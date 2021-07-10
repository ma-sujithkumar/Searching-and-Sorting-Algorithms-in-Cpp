#include<iostream>
using namespace std;
//Recursive Way of Implementation of BS
int BinarySearch(int arr[],int key,int first,int last)
{
    int mid=(first+last)/2;
    
    //case 1 - base case of recursive call
    if(arr[mid]==key)
    {
        return mid;
    }
    
    //case 2 - base case - I've reached the end of the array. 
    if(first>last)
    {
        return -1;
    }
    
    //Recursive cases - left part of the array
    if(arr[mid]>key)
    {
        return BinarySearch(arr,key,first,mid-1);
    }
    //right part of the array
    else
    {
        return BinarySearch(arr,key,mid+1,last);
    }
    
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int size=6;
    int key=4;
    int result=BinarySearch(arr,key,0,size-1);
    if(result==-1)
    {
        printf("The element is not found");
    }
    else
    {
        printf("The element is found at %d",result);
    }
}