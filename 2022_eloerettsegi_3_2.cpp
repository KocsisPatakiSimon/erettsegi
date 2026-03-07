#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int tomb[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>tomb[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(i == j)
            {
                tomb[i][j]=tomb[i][j+1];
            }
            if( tomb[i][j]== tomb[i][j-1])
            {
                tomb[i][j]=tomb[i][j+1];

            }

        }
    }
    for(int j=0; j<n; j++)
    {
        tomb[j][3]=0;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            cout<<tomb[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
