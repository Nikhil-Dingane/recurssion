#include<iostream>

using namespace std;

int fact(int no);

int main()
{
    cout<<fact(5);
    return 0;
}

int fact(int no)
{
    if(no == 1)
    {
        return 1;
    }
    else
    {
        return no * fact(no - 1);
    }
}
