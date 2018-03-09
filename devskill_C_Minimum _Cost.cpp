
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t, n, x[10000];

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(int i = 0; i < n; i++)
        {
            cin >> x[i];
        }


        int mn = x[0], sum = 0;

        for(int i = 1; i< n ; i++)
        {

            if(mn > x[i])
                mn = x[i];
        }

       for(int i = 0; i< n; i++)
       {
          sum += x[i] - mn;

       }

       cout<< sum << endl;

    }


    return 0;
}
