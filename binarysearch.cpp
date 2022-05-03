#include<iostream>

using namespace std;

int binarySearch(int arr[], int iStart, int iEnd,int num);

int main()
{
    int arr[] = {3,53,42,93,6,74,7,8,36,342};

    for(int i = 0; i < (sizeof(arr)/sizeof(int)); i++)
    {
        for(int j = (i + 1); j < (sizeof(arr)/sizeof(int)); j++)
        {
            if(arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < (sizeof(arr)/sizeof(int)); i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    cout<<binarySearch(arr,0,sizeof(arr)/sizeof(int), 8);
    return 0;
}

int binarySearch(int arr[], int iStart, int iEnd, int num)
{
    if(iStart > iEnd)
    {
        return -1;
    }

    int mid = (iStart + ((iEnd - iStart)/2));

    if(arr[iStart] == num)
    {
        return iStart;
    }
    else if(arr[iEnd] == num)
    {
        return iEnd;
    }
    else if(arr[mid] == num)
    {
        return mid;
    }

    if(num > arr[mid])
    {
        return binarySearch(arr,mid + 1, iEnd - 1, num);
    }

    return binarySearch(arr,iStart + 1, mid - 1, num);
}

