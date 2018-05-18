
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string q,s,d,in;
    int t;
    cin >> t;

    q = "I am going to ask you this one time, where is Gamora?";
    s = "I will do you one better, who is Gamora?";
    d = "I will do you one better, why is Gamora?";


    while(t--){

    cin >> in;

    if(in == "Quill")
        cout << q << endl;

    else if(in == "Stark")
        cout << s << endl;

    else if(in == "Drax")
        cout << d << endl;

        else
            cout << "What is Gamora?"<<endl;

    }
    return 0;
}
