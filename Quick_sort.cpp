#include <iostream>
using namespace std;

int Partition(int arr[],int low,int high)
{
    int i = low-1;
    int pivot = arr[high];
    for(int j=low;j<high;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}

void QuickSort(int arr[],int low,int high)
{
    if(low>=high)
    {
        return;
    }
    int pi = Partition(arr,low,high);
    QuickSort(arr,low,pi-1);
    QuickSort(arr,pi+1,high);
}

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    QuickSort(arr,0,n-1);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
