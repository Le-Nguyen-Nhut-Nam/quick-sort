#include <iostream>
using namespace std;
int taomang(int a[],int left,int mid)
{
    int* b= new int[50];
    int k=0;

    for(int i=0;i<=mid;i++)
    b[i]=a[i];

    for(int i=0;i<mid;i++)
    cout<<b[i]<<" ";
    cout<<endl;

  
}
void chiamang(int a[],int left,int right)

{
    int mid;
    mid=(left+right)/2;
    if(left<mid)
    {
        taomang(a,left,mid);
        chiamang(a,left,mid);
        chiamang(a,mid+1,)
    }
    
}

int main()
{
    int array[]={9,7,5,3,1,2,4,6,8,10};
    int right;
    
    right=sizeof(array)/sizeof(array[0]);
    chiamang(array,0,right);
}