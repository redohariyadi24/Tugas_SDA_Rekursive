#include<iostream>
using namespace std;
int jmlnol(int angka)
{
static int count=0;
    if(angka>0)
    {

        if(angka%10==0)
        count++;

        jmlnol(angka/10);
    }
    return count;
}
int main()
{
    int i;
    cout<<"Masukkan bilangan :";
    cin>>i;
    cout<<"Banyak angka nol : "<<jmlnol(i);
}
