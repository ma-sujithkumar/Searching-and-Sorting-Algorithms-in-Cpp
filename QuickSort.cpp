#include<iostream>
using namespace std;
/* Quick Sort
1.Partitioning function
2. Quick Sort
3. Swapping function
*/
void swap(int* x,int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int partition(int array[],int first,int last)
{
    int pivot=array[first];
    int i=first;
    int j=last;
    
    do
    {
        do{i++;}while(array[i]<=pivot);
        do{j--;}while(array[i]>pivot);
        
        if(i<j)
        swap(&array[i],&array[j]);
        
    }while(i<j);
    
    //swapping the pivot element with current j
    swap(&array[first],&array[j]);
    return j;
}

void QuickSort(int array[],int first,int last)
{
    int j;
    if(first<last)
    {
        j=partition(array,first,last);
        QuickSort(array,first,j);
        QuickSort(array,j+1,last);
    }
}



int main()
{
    int array[]={10,2,34,21,45,13};
    int size=6;
    
    //printing the elements:
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    QuickSort(array,0,size-1);
    
    //printing the elements:
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
}
