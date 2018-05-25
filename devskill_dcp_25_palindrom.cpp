#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string str,revs;

    cin >> t;

    while(t--)
    {
        cin >> str;
        revs = str;

         reverse(revs.begin(), revs.end());

        if(str == revs)
            cout << "Yes";
        else
            cout << "No";


    }


    return 0;
}
