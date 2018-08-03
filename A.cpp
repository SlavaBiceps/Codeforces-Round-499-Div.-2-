#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,res,kol,y,x;
    string s;
    cin >> n >> k;
    vector<char> mas(n);
    cin >> s;
    for(int i=0;i<n;i++) {
        mas[i]=s[i];
    }
    sort(mas.begin(), mas.end());
    x=mas[0]-'a';
     x++;
    res=x;
    kol=1;
    for(int i=1;i<n;i++)
    {
        if(kol==k)
            break;
        y=mas[i]-'a';
        y++;
        if(y>x+1)
        {
            kol++;
            res+=y;
            x=y;
        }
    }
    if(kol==k)
        cout << res << endl;
    else
        cout << "-1" << endl;
}