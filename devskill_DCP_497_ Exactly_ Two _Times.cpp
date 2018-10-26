
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t, n;
    cin >> t;

    while(t--)
    {
        cin >> n;

        int x[n+3];

        for(int i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        for(int i = 0; i < n ; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(x[i] == x[j])
                {

                    cout << x[i] << endl;
                    break;
                }
            }

        }


    }



    return 0;
}
