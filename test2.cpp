
#include <iostream>
using namespace std; 

void tron(int b[],int k, int c[], int l, int temp[], int &m)
{
	int i=0;
	int j=0;

	
	while((i<=k)&&(j<=l))
	{
	if (((i<k) &&(j<l) &&(b[i]<c[j]) ) || j>=m)
		temp[m++]=b[i++];
	else
	   temp[m++]=c[j++];
	}
    
	cout<<"End Tron"<<endl;
}
void merge(int a[],int left, int mid, int right)
{
	int* b=new int[mid-left+1];
	int k;
	int* c= new int[right-mid];
    int l;
	int* temp=new int[right-left+1];
	int m;
    
	

	b=0;
	for(int i=left;i<=mid;i++)
	b[k++]=a[i];
    l=0;
	for(int i=mid+1;i<=right;i++)
	c[l++]=a[i];

	tron(b,k,c,l,temp,m);
	for(int i=0;i<m;i++)
	a[left+i]=temp[i];

	delete []b;
	delete []c;
	delete []temp;

	cout<<"End merge"<<endl;
}

void mergesort(int a[],int left,int right)
{
	int mid;
	
	if(left<right)
	{
		mid=(left+right)/2;
		mergesort(a,left,mid);
		mergesort(a,mid+1,right);
		merge(a,left,mid,right);
	}
	cout<<"End mergesort"<<endl;
}

void saptang(int a[],int n)
{
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}


int main()
{

 int a[]={7,5,1,3,2,4,9,8,10};
 int n;
 n=sizeof(a)/sizeof(a[0]);

 saptang(a,n);
 cout<<"END";

return 0;
}