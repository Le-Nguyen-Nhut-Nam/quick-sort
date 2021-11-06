#include <iostream>
using namespace std;

int partition(int a[],int left,int right)
{
  int pivot=a[right];
  int vt=(left-1);
  int c;

  for(int i=left;i<=right-1;i++)
  if(a[i]<pivot)
  {
  vt++;
  c=a[i];
  a[i]=a[vt];
  a[vt]=c;
  }
  vt++;

  c=a[right];
  a[right]=a[vt];
  a[vt]=c;
  return vt;
}
void quicksort(int a[],int left,int right)
{
    if(left<right)
    {
        int ipivot= partition(a,left,right);
        quicksort(a,left,ipivot -1);
        quicksort(a,ipivot +1,right);

        for(int i=1;i<=right;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
}
int main()
{
  int a[]={1,3,5,7,2,4,6,8,10};
  int n=sizeof(a)/sizeof(a[0]);
  quicksort(a,0,n);
  return 0;

}