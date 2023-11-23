#include<iostream>
using namespace std;
int main()
{
int i,n,a[n],sum=0;
cout<<"Enter no. of integers\n";
cin>>n;
cout<<"Enter array elements\n";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
cout<<"The sum of array elements is\n "<< sum;
return 0;
}
