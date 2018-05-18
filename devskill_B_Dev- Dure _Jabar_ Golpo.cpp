#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t , n , j,c ,c1;
    string k, d;
    k = "Kache Eso";
    d = "Dure Giya Mor";

    cin >> t;

    while(t--)
    {

    c =1;
    c1 = 0;
       cin >> n >> j;

       int x[n + 5];

       for(int i = 1; i <= n; i++)
       {
           cin >> x[i];
       }

       cout << k << endl;

       for(int i = 1; i <= n; i++)
       {
           if(x[i] > j){
            cout<< i <<" ";
           }
       }

            cout << endl;

       cout << d << endl;

       for(int i = 1; i <= n; i++)
       {
           if(x[i] <= j){
            cout<< i << " ";

           }

       }
            cout << endl;

    }


    return 0;
}
