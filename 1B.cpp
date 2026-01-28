#include <bits/stdc++.h>
using namespace std;
#define JAY ios_base::sync_with_stdio(false);
#define SHREE cin.tie(0);
#define KRISHNA cout.tie(0);
#define ll long long
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
int main() {
    JAY SHREE KRISHNA
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        bool ok=false;
        if(s[0]=='R') 
        {
            int i=1;
            if(i<s.size() && isdigit(s[i])) 
            {
                while(i<s.size() && isdigit(s[i])) i++;
                if(i<s.size() && s[i]=='C' && i<s.size()-1 && isdigit(s[i+1])) {
                    ok=true;
                }
            }
        }
        if(ok) 
        {
            int i=1;
            ll r=0,c=0;
            while(isdigit(s[i]) && i<s.size()) 
            {
                r=r*10+(s[i]-'0');
                i++;
            }
            i++;
            while(i<s.size()) 
            {
                c=c*10+(s[i]-'0');
                i++;
            }
            string cn = "";
            while(c>0) 
            {
                c--;
                cn.push_back(char('A'+(c%26)));
                c/=26;
            }
            reverse(cn.begin(),cn.end());
            cout<<cn<<r<<"\n";
        } 
        else 
        {
            int i=0;
            ll c=0,r=0;
            while(isalpha(s[i]) && i<s.size()) 
            {
                c=c*26+(s[i]-'A'+1);
                i++;
            }
            while(i<s.size()) 
            {
                r=r*10+(s[i]-'0');
                i++;
            }
            cout<<"R"<<r<<"C"<<c<<"\n";
        }
    }
    return 0;
}