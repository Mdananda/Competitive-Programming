#include <bits/stdc++.h>
using namespace std;

int fnc(int pos)
{
    if(pos == 1)
        return 1;
    int r = fnc((pos)/2)+1;
    return r;
}
int main()
{
    cout<<fnc(10)<<endl;



    return 0;
}
