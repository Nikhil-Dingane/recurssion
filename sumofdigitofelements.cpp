#include<iostream>

using namespace std;

int sumOfDigitsOfElements(int arr[], int n)
{
    if(n < 0)
    {
        return 0;
    }

    return (arr[n] + sumOfDigitsOfElements(arr, n - 1));
}

int main()
{
    int arr[] = {3,53,42,93,6,74,7,8,36,342};
    cout<<sumOfDigitsOfElements(arr,sizeof(arr)/sizeof(int) - 1);
    return 0;
}
