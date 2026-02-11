#include <iostream>

using namespace std;

void NrImp (int x, int y, int &nr)
{
    int counter=0;
    for(int i=x; i<=y; i++)
    {

        counter=0;



        for(int j=1; j<=y; j+=2)
        {
            if(i%j==0)
            {
                counter++;
            }

        }

        if(counter==3)
        {
            nr+=1;

        }
    }



}



int main()
{
    int x,y,nr;
    cin>>x>>y;
    nr=0;
    NrImp(x,y,nr);
    cout<<nr;
    return 0;
}
