#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2;
    cin>>num1>>num2;

    if(num1 > num2)
        swap(num1, num2);
    while(true)
    {
        int tmp = num2 % num1;
        if(tmp == 0)
        {
            cout<<"The GCD = "<< num1 <<endl;
            break;
        }
        num2 = num1;
        num1 = tmp;
    }

    return 0;
}
