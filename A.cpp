#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans,cnt,y,x;
    string s;
    cin >> n >> k;
    vector<char> v(n);
    cin >> s;
    for(int i=0;i<n;i++) {
        v[i]=s[i];
    }
    sort( v.begin(), v.end());
    x=v[0]-'a';
     x++;
    ans=x;
    cnt=1;
    for(int i=1;i<n;i++)
    {
        if(cnt==k)
            break;
        y=v[i]-'a';
        y++;
        if(y>x+1)
        {
            cnt++;
            ans+=y;
            x=y;
        }
    }
    if(cnt==k)
        cout << ans << endl;
    else
        cout << "-1" << endl;
}