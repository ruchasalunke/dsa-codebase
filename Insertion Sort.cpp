#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        while(j>=0)
        {
            if(arr[j] > arr[i])
                arr[j+1] = arr[j];
            else
                break;  
            j--;      
        }
        arr[j+1] = arr[i];
    }
}
