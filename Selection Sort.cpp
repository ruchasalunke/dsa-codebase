#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0; i<n-1; i++)
    {
        int minIndex = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        if(arr[minIndex] != arr[i])
            swap(arr[minIndex],arr[i]);
    }
}
