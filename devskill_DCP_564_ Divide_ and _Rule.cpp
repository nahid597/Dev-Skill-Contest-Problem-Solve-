#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    string s;
    char ch[2000];

    cin >> t;

    while(t--)
    {

        cin >> n;
        if(n == 1)
            cout << "3" << endl;
        else if(n == 2)
            cout << "12" << endl;
        else
        {
           ch[0]='1';

           for(int i= 1; i < n-1;i++)
           {
                ch[i] = '0';
           }

           ch[n-1] = '2';

           for(int i = 0; i < n; i++)
           {
               cout << ch[i];
           }

           cout << endl;

        }


    }


    return 0;
}
