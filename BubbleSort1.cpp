#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>
		arr[i];
	}
	int Counter=1;
	while(Counter<n-1)
	{
		for(int i=0;i<n-Counter;i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		Counter++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" "; 
	}cout<<endl;
}