
#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s1, s2;
    s1 = "never be so happy when you are happy and never be so sad when you are sad";

  while(cin >> s2)
  {

    map <string,int> mp;

    mp["never"]++;
    mp["be"]++;
    mp["so"]++;
    mp["happy"]++;
    mp["when"]++;
    mp["you"]++;
    mp["are"]++;
    mp["and"]++;
    mp["sad"]++;

    mp[s2]++;

    if(mp[s2] > 1)
    {

        printf("YES\n");

    }

    else
         printf("NO\n");

  }


    return 0;
}
