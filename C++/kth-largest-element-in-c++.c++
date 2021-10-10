#include<iostream>
using namespace std;

int main()
{
int n,i,k,counter=1;
cout<<"Enter how much number you want to give as input\t";
cin>>n;

int arr[n];
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"Enter which kth largest value you want\t";
cin>>k;
while(n>counter)
{
    for(i=0;i<n-counter;i++)
    {
        if(arr[i]>arr[i+1])
        {
           int temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;
        }
    }
    counter++;
}
    cout<<arr[k-1]<<endl;
return 0;
}