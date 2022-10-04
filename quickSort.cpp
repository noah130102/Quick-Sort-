#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
void swap(int arr[], int a , int b){
    int temp = arr[a];
    arr[a]=arr[b];
    arr[b] = temp;
}

int pivotPartition(int arr[], int a , int b){
    int pivot = arr[b];
    int i = a-1;
    for (int j = a; j < b; j++)
    {
        if (arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
        
    }
    swap(arr,i+1,b);
    return i+1;
    
}
void quickSort(int arr[], int a , int b){
    if (a<b)
    {
        int p = pivotPartition(arr,a,b);
        quickSort(arr,a,p-1);
        quickSort(arr,p+1,b);

    }
    
} 
int main()
{
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);

    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}