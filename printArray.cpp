#include<iostream>

using namespace std;

void printNNumbers(int arr[], int n);
void printNNumbersR(int arr[], int n);

int main()
{
    int arr[] = {3,53,42,93,6,74,7,8,36,342};
    printNNumbers(arr,sizeof(arr)/sizeof(int) - 1);
    cout<<endl;
    printNNumbersR(arr,sizeof(arr)/sizeof(int) - 1);
    return 0;
}

/*
    printNNumbers() => if(n < 0)
                            return
                       if(n <= size)
                            recurssive call;
*/
void printNNumbers(int arr[], int n)
{
    if(n < 0)
    {
        return;
    }

    printNNumbers(arr,n - 1);
    cout<<arr[n]<<"\t";
}

void printNNumbersR(int arr[], int n)
{
    if(n < 0)
    {
        return;
    }

    cout<<arr[n]<<"\t";
    printNNumbersR(arr,n - 1);
}
