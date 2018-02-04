#include<bits/stdc++.h>
using namespace std;

int main()
{
        string s ,s1;
        int t;
        cin >> t;
        while(t--)
        {
           cin >> s;
           cin >> s1;

            if(s == "Easy")
                printf("20\n");

            else if(s == "Medium")
                printf("40\n");

            else if(s == "Hard")
                printf("68\n");
        }

    return 0;
}
