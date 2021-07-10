//Iterative Implementation of Binary Search
#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int first=0;
    int last=size-1;
    int mid=(first+last)/2;
    int key=5;
    //looping
    while(arr[mid]!=key || first<=last) //arr[mid]==search or first>last - stopping conditions
    {
        mid=(first+last)/2;
        
        //case 1 : middle element==key
        if(arr[mid]==key)
        {
            
            printf("The element is found at %d",mid);
            break;
        }
        
        //case 2: arr[mid]<key - ignore the left part of the array
        if(arr[mid]<key)
        {
            first=mid+1;
        }
        //case 3: arr[mid]>key - ignore the right part of the array
        else
        {
            last=mid-1;
        }
        
    }
}