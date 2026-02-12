#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string szoveg;
    ofstream out("out.txt");

    getline(cin,szoveg);

    out<<szoveg;
    out.close();
    ifstream in("out.txt");
    string szo,vegso;
    while(in >> szo)
    {
        if(szo[szo.length()-1]=='.')
        {
            if(szo[0] == 'F')
            {
                vegso+= "fam. ";
            }
            else if(szo[0] == 'G')
            {
                vegso+= "gen. ";
            }
            else if(szo[0] == 'S')
            {
                vegso+= "spe. ";
            }
        }
        else
        {
            vegso+= szo +' ';
        }

    }

    cout<<vegso;


    return 0;
}
