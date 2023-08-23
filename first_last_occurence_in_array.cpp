#include<iostream>
using namespace std;
int firstOccurence(int arr[],int n, int key){
	
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
	
	if (arr[mid]==key){
		ans=mid;
		e=mid-1;
	}
	else if(key>mid[arr]){
		s=mid+1;
	}
	else
	{
	e=mid-1;
	}
	mid=s+(e-s)/2;
}
return ans;	
	
}
int lastOccurence(int arr[],int n, int key){
	
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
	
	if (arr[mid]==key){
		ans=mid;
		s=mid+1;
	}
	else if(key>mid[arr]){
		s=mid+1;
	}
	else
	{
	e=mid-1;
	}
	mid=s+(e-s)/2;
}
return ans;	
}	
int main()
{
	int even[11]={1,2,3,3,4,5,6,3,4,3,1};
	cout<<"First occurence of 3 is : "<<firstOccurence(even,11,3)<<endl;
	cout<<"Last occurence of 3 is : "<<lastOccurence(even,11,3)<<endl;
	
	return 0;
}
