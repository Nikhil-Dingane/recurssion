#include<iostream>

using namespace std;

void pattern(int,int,int);
void pattern2(int,int);

int main()
{
    pattern(1,1,4);
    pattern2(4,4);
    return 0;
}

void pattern(int row, int col, int limit)
{
    if(row > limit)
    {
        return;
    }

    if(col <= row)
    {
        cout<<"*";
    }

    if(col > limit)
    {
        cout<<endl;
        col=0;
        row++;
    }

    pattern(row,++col,limit);
}

void pattern2(int row,int col)
{
    if(row == 0)
    {
        return;
    }
    if(col == 0)
    {
        col = row;
        row = row - 1;
    }

    pattern2(row,col - 1);

    if(col <= row)
    {
        cout<<"*";
    }

    if((row != 0) && (col == (row + 1)))
    {
        cout<<endl;
    }
}
