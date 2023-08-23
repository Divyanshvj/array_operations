#include<iostream>
using namespace std;

int linearSearch(int arr[],int size, int n)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==n)
		return i;
	}
	return -1;
	
}

int binarySearch(int arr[],int size,int n)
{
	int start=0;
	int end= size-1;
	int mid = start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==n)
		{
			return mid;
		}
	     if(arr[mid]>n)
		{
			end=mid-1;	
		}
		else{
			start=mid+1;
		}
		mid =start+(end-start)/2;
	}
	return -1;
}

void selectionSort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int minIndex= i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[minIndex])
            minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }
    
}

void bubbleSort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    
}

int main()
{
	int arr[100];
	int n;
	cout<<"Enter the no. of elements : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter your "<<i+1<<" "<<"element :"; 
		cin>>arr[i];
	}
	cout<<"Enter your choice : "<<endl<<"Press 1 for searching: \nPress 2 for sorting: ";
	int choice;
	cin>>choice;
	if(choice==1)
	{
		cout<<"Available searches are :- 1- Linear search: \n 2- Binary search: \n";
		cout<<"Press 1 for Linear search and Press 2 for Binary search: \n";
		int searchChoice, searchElement;
		cin>>searchChoice;
		cout<<"Enter the element you want to search : \n";
		cin>>searchElement;
		if(searchChoice==1)
		{
			if(linearSearch(arr,n,searchElement)==-1)
			{
				cout<<"The element you want to search does not exist. ";
			}
	    	
			else
			{
				cout<<"The element exist at index "<<linearSearch(arr,n,searchElement);
			}	 		
		}
		else if(searchChoice==2)
		{

			if(binarySearch(arr,n,searchElement)==-1)
	    		cout<<"The element you want to search does not exist. ";
			else
	 			cout<<"The element exist at index "<<binarySearch(arr,n,searchElement);
		}
		else
		{
			cout<<"Please enter a valid choice";
		}
	}
	else if(choice==2)
	{
		cout<<"Available sortings are : \n 1- Bubble Sort \n 2- Quick sort \n 3- Merge sort \n 4- Selection Sort \n 5- Insertion sort\n";
		cout<<"Press 1 for bubble sort , Press 2 for quick sort , press 3 for merge sort , press 4 for Selection sort , press 5 for insertion sort : ";
		int sortChoice;
		cin>>sortChoice;
		switch(sortChoice)
		{
			case 1 : 
				bubbleSort(arr,n);
				for(int i=0;i<n;i++)
				{
	    			cout<<arr[i]<<" ";
				}
			break;
			case 2: 
			//quicksort
			break;
			case 3:
			//mergesort
			break;
			case 4:
				selectionSort(arr,n);
				for(int i=0;i<n;i++)
				{
	    			cout<<arr[i]<<" ";
				}
			break;
			case 5:
			//Insertionsort
			break;
			default:
				cout<<"Please enter valid choice";
				
		}
	}
	else
	{
		cout<<"Please enter valid choice";
	}
}
