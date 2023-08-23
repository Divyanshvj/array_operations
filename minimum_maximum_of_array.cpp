#include <iostream>
#include<algorithm>

using namespace std;

void minAndMaxElement(int arr[],int size)
{
    sort(arr, arr + size);
    cout<<"Minimum element is : "<<arr[0]<<endl;
    cout<<"Maximum element is : "<<arr[size-1];
}

int main()
{
    int arr[100];
    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    minAndMaxElement(arr,n);
    

    return 0;
}

