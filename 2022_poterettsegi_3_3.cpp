#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int szam,prev, counter=1,max_hossz=0,max_hossz_szam=0;
    ifstream in("bac.txt");
    in>>prev;
    while(in>>szam)
    {
        if(szam%2 == prev%2)
        {
            counter++;
            prev=szam;
        }
        else
        {
            if(counter >= max_hossz)
            {
                max_hossz_szam++;
                max_hossz=counter;
            }
            counter=1;
            prev=szam;
        }
    }
    cout<<max_hossz_szam<<" "<<max_hossz;
    return 0;
}
