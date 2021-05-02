#include <bits/stdc++.h>
using namespace std;
bool flg;

int main()
{
    char inputPart[100];
    int n,len;
    cin>>inputPart;

    getchar();
    cin>>n;
    len = strlen(inputPart);
    string pageName[n];

    for(int i = 0; i < n; ++i)
    {
        char str[110];
        scanf("%s", str);
        pageName[i] = str;
        getchar();
    }

    sort(pageName, pageName+n);

    for(int i = 0; i < n; ++i)
    {
        if(pageName[i].length() < len)
            continue;
        int j = 0;
        for( ; j < len; ++j)
        {
            if(inputPart[j] != pageName[i][j])
                break;
        }
        if(j == len)
        {
            cout<<pageName[i]<<endl;
            flg = true;
            break;
        }
    }

    if(!flg)
      cout<<inputPart<<endl;

    return 0;
}

