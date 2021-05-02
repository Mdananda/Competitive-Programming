/// Bubble sorting Algorithm

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[5] = {1, 4, 2, 3, 5};

    for(int i = 0; i < 5; ++i)
    {
        int k = 0;

        for(int j = 0; j < 5; j++)
        {
            if(ar[j] > ar[j+1])
            {
                swap(ar[j], ar[j+1]);
                k = 1;
            }

        }
        if(k == 1)
            break;
    }

    for(int i = 0; i < 5; ++i)
    {
        printf("%d ", ar[i]);
    }


    return 0;
}
