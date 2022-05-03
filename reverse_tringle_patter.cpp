#include<iostream>

using namespace std;

void revTringle(int row, int col)
{
    if(row == 0)
    {
        return;
    }

    if(col > 0)
    {
        cout<<"*";
    }
    else
    {
        if(row != 1)
        {
            cout<<endl;
        }
        col = row;
        row = row - 1;
    }

    revTringle(row, col - 1);
}

int main()
{
    revTringle(5,5);
    return 0;
}
