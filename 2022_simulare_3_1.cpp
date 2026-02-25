#include <iostream>

using namespace std;

void schimb(int p , int x , int &n)
{
    int hatvany=1,  aux=0, szj=0;

    while(p>0){
        szj=n%10;
        n/=10;
        aux+=szj*hatvany;
        hatvany*=10;
        p--;

    }

    cout<<n<<" ";
    n/=10;
    n*=10;
    n+=x;
    n=n*hatvany*10;
    n+=aux;

}

int main()
{
    int n=12587;
    schimb(3,6,n);
    cout<<n;
    return 0;
}
