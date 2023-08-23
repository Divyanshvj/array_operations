//find the duplicate numbers in the array .
#include<iostream>
#include<string>
using namespace std;
int duplicate(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
			   return arr[i];
			}
		}
	}
}
int main()
{
	int arr[2000];
	int n;
	cout<<"Enter the no. of elements: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Duplicate no. is : "<<duplicate(arr,n);
}
