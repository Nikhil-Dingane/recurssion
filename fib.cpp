#include<iostream>

using namespace std;

void fib(int, int, int, int);
void fibr(int, int, int, int);
int fib2(int n);

int main()
{
    fib(0,1,0,10);
    cout<<endl;
    fibr(0,1,0,10);
    cout<<endl;
    fib2(5);
    return 0;
}

void fib(int first, int second, int third, int limit)
{
    if(third >= limit)
    {
        return;
    }

    cout<<third<<"\t";

    fib(second, third, second + third,limit);
}

void fibr(int first, int second, int third, int limit)
{
    if(third >= limit)
    {
        return;
    }

    fibr(second, third, second + third,limit);
    cout<<third<<"\t";
}

int fib2(int n)
{
    int num = 0;
    if(n <= 0)
    {
        return 0;
    }

    if(n == 1)
    {
        return 1;
    }

    num = fib2(n - 1) + fib2(n - 2);

    cout<<num<<"\t";

    return num;
}

