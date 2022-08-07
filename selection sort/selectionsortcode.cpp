#include<iostream>
using namespace std;

// function for sorting 
void selSort(int arr[],int num)
{

    for(int idx = 0; idx < num-1; idx++)
    {
        int minIndex = idx;

        for(int jdx = idx + 1; jdx < num; jdx++)
        {
            if(arr[jdx] < arr[minIndex]) minIndex = jdx;
        }
        swap(arr[minIndex], arr[idx]);
    }
}

// function for printing an array
void printArray(int arr[], int num)
{
    for (int idx = 0; idx < num; idx++)
    {
        cout << arr[idx] << " ";
    }
}

// Driver code
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    
    int num = sizeof(arr)/sizeof(arr[0]);

    selSort(arr,num);
    
    cout << "sorted array is :" << endl;
    
    printArray(arr,num);
    
    return 0;
}