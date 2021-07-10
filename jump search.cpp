#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int array[]={1,2,3,4,5,6,7,8,9,10,11,12,14,15,16};
    int n=16;
    int i,j,key=13;
    int jump=(int)floor(sqrt(n));
    for(i=0;i<n;)
    {
        if(array[i]>key)
        {
            break;
        }
        else
        {
            i+=jump;
        }
    }
    for(j=i;j>=0;j--)
    {
        if(array[j]==key)
        {
        printf("The element is found\n");
        break;
        }
    }

}
