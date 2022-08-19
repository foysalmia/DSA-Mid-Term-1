#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;

    int arr[row][col];
    int brr[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(brr[i][j] != -1)
            {
                for(int k=0; k<row; k++)
                {
                    for(int l=0; l<col; l++)
                    {
                        if(i==k && j==l)continue;
                        if(arr[i][j]==arr[k][l])brr[k][l] = -1;
                    }
                }
            }

        }
    }

    cout<<endl;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(brr[i][j] == -1) cout<<brr[i][j]<<" ";
            else cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

