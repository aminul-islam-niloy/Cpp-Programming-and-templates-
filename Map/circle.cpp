#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define getunique(v){ sort(v.begin(),v.end()); v.erease(unique(v.begin(),v.end()),v.end());}


//  int uniquesValue(ll div){
//     ll divs = div;
//     sort(divs.begin(), divs.end());
//     divs.erase(unique(divs.begin(), divs.end()), divs.end());

//     return div;
// }
 vector < ll>  getdivs(int n) {
vector<ll> divs;
for (ll i = 1; i*i <=n; i++) {
    
if (n % i == 0){
    divs.push_back(i);
    divs.push_back(n/i);
  }
}

// getunique(divs);

sort(divs.begin(), divs.end());
    divs.erase(unique(divs.begin(), divs.end()), divs.end());
    
return divs;

}


int main(){
    int n;
    cin>>n;
    vector<ll> d= getdivs(n);
    
    vector<ll>ans;
    
    for(ll g:d){
        ll len = n/g;
        ans.push_back(g*(len * (len -1)/2)+ len);
        
    }
    // getunique(ans);
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    
    for(ll x:ans){
        cout<<x<<" "<<endl;
    }
    
}
    
