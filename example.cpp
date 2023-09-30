#line 2 "library/template/template.hpp"
#include<bits/stdc++.h>
#line 3 "library/template/macro.hpp"

#define SELECT4(a,b,c,d,e,...) e
#define SELECT3(a,b,c,d,...) d
#define REP1(a) for(ll i=0;i<(ll)(a);++i)
#define REP2(i,a) for(ll i=0;i<(ll)(a);++i)
#define REP3(i,a,b) for(ll i=(ll)(a);i<(ll)(b);++i)
#define REP4(i,a,b,c) for(ll i=(ll)(a);i<(ll)(b);i+=(ll)(c))
#define rep(...) SELECT4(__VA_ARGS__,REP4,REP3,REP2,REP1)(__VA_ARGS__)
#define RREP1(a) for(ll i=(ll)(a)-1;i>=0;--i)
#define RREP2(i,a) for(ll i=(ll)(a)-1;i>=0;--i)
#define RREP3(i,a,b) for(ll i=(ll)(b)-1;i>=(ll)(a);--i)
#define rrep(...) SELECT3(__VA_ARGS__,RREP3,RREP2,RREP1)(__VA_ARGS__)
#define all(v) std::begin(v),std::end(v)
#define rall(v) std::rbegin(v),std::rend(v)
#define INT(...) int __VA_ARGS__;scan(__VA_ARGS__)
#define LL(...) ll __VA_ARGS__;scan(__VA_ARGS__)
#define STR(...) string __VA_ARGS__;scan(__VA_ARGS__)
#define CHR(...) char __VA_ARGS__;scan(__VA_ARGS__)
#define DBL(...) double __VA_ARGS__;scan(__VA_ARGS__)
#define LD(...) ld __VA_ARGS__;scan(__VA_ARGS__)
#define pb push_back
#define eb emplace_back
#line 3 "library/template/alias.hpp"

using ll=long long;
using ull=unsigned long long;
using ld=long double;
using pi=std::pair<int,int>;
using pl=std::pair<ll,ll>;
using vi=std::vector<int>;
using vl=std::vector<ll>;
using vs=std::vector<std::string>;
using vc=std::vector<char>;
using vvl=std::vector<vl>;
using vd=std::vector<double>;
using vp=std::vector<pl>;
using vb=std::vector<bool>;
template<typename T>
struct infinity{
  static constexpr T max=std::numeric_limits<T>::max();
  static constexpr T min=std::numeric_limits<T>::min();
  static constexpr T value=std::numeric_limits<T>::max()/2;
  static constexpr T mvalue=std::numeric_limits<T>::min()/2;
};
template<typename T>constexpr T INF=infinity<T>::value;
constexpr ll inf=INF<ll>;
constexpr ld EPS=1e-8;
constexpr ld PI=3.1415926535897932384626;
constexpr int dx[8]={1,0,-1,0,1,-1,-1,1};
constexpr int dy[8]={0,1,0,-1,1,1,-1,-1};
#line 5 "library/template/func.hpp"

inline constexpr int msb(ull x){
  int res=x?0:-1;
  if(x&0xffffffff00000000)x&=0xffffffff00000000,res+=32;
  if(x&0xffff0000ffff0000)x&=0xffff0000ffff0000,res+=16;
  if(x&0xff00ff00ff00ff00)x&=0xff00ff00ff00ff00,res+=8;
  if(x&0xf0f0f0f0f0f0f0f0)x&=0xf0f0f0f0f0f0f0f0,res+=4;
  if(x&0xcccccccccccccccc)x&=0xcccccccccccccccc,res+=2;
  return res+(x&0xaaaaaaaaaaaaaaaa?1:0);
}
inline constexpr int ceil_log2(ull x){return x?msb(x-1)+1:0;}
inline constexpr ull reverse(ull x){
  x=((x&0x5555555555555555)<<1)|((x&0xaaaaaaaaaaaaaaaa)>>1);
  x=((x&0x3333333333333333)<<2)|((x&0xcccccccccccccccc)>>2);
  x=((x&0x0f0f0f0f0f0f0f0f)<<4)|((x&0xf0f0f0f0f0f0f0f0)>>4);
  x=((x&0x00ff00ff00ff00ff)<<8)|((x&0xff00ff00ff00ff00)>>8);
  
  x=((x&0x0000ffff0000ffff)<<16)|((x&0xffff0000ffff0000)>>16);
  return (x<<32)|(x>>32);
}
inline constexpr ull reverse(ull x,int len){return reverse(x)>>(64-len);}
inline constexpr int popcnt(ull x){
#if __cplusplus>=202002L
  return std::popcount(x);
#endif
  x=(x&0x5555555555555555)+((x>>1)&0x5555555555555555);
  x=(x&0x3333333333333333)+((x>>2)&0x3333333333333333);
  x=(x&0x0f0f0f0f0f0f0f0f)+((x>>4)&0x0f0f0f0f0f0f0f0f);
  x=(x&0x00ff00ff00ff00ff)+((x>>8)&0x00ff00ff00ff00ff);
  x=(x&0x0000ffff0000ffff)+((x>>16)&0x0000ffff0000ffff);
  return (x&0x00000000ffffffff)+((x>>32)&0x00000000ffffffff);
}
template<typename T,typename U>
inline constexpr bool chmin(T&a,U b){return a>b&&(a=b,true);}
template<typename T,typename U>
inline constexpr bool chmax(T&a,U b){return a<b&&(a=b,true);}
inline constexpr ll gcd(ll a,ll b){
  if(a<0)a=-a;
  if(b<0)b=-b;
  while(b){
    const ll c=b;
    b=a%b;
    a=c;
  }
  return a;
}
inline constexpr ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
inline constexpr bool is_prime(ll n){
  if(n<=1)return false;
  for(ll i=2;i*i<=n;i++){
    if(n%i==0)return false;
  }
  return true;
}
inline constexpr ll my_pow(ll a,ll b){
  ll res=1;
  while(b){
    if(b&1)res*=a;
    a*=a;
    b>>=1;
  }
  return res;
}
inline constexpr ll mod_pow(ll a,ll b,const ll&mod){
  if(mod==1)return 0;
  a%=mod;
  ll res=1;
  while(b){
    if(b&1)(res*=a)%=mod;
    (a*=a)%=mod;
    b>>=1;
  }
  return res;
}
inline ll mod_inv(ll a,const ll&mod){
  ll b=mod,x=1,u=0,t;
  while(b){
    t=a/b;
    std::swap(a-=t*b,b);
    std::swap(x-=t*u,u);
  }
  if(x<0)x+=mod;
  return x;
}
template<typename T,typename U>
std::ostream &operator<<(std::ostream&os,const std::pair<T,U>&p){os<<p.first<<" "<<p.second;return os;}
template<typename T,typename U>
std::istream &operator>>(std::istream&is,std::pair<T,U>&p){is>>p.first>>p.second;return is;}
template<typename T>
std::ostream &operator<<(std::ostream&os,const std::vector<T>&v){for(auto it=std::begin(v);it!=std::end(v);){os<<*it<<((++it)!=std::end(v)?" ":"");}return os;}
template<typename T>
std::istream &operator>>(std::istream&is,std::vector<T>&v){for(T &in:v){is>>in;}return is;}
inline void scan(){}
template<class Head,class... Tail>
inline void scan(Head&head,Tail&... tail){std::cin>>head;scan(tail...);}
template<class T>
inline void print(const T &t){std::cout<<t<<'\n';}
template<class Head, class... Tail>
inline void print(const Head &head, const Tail &... tail){std::cout<<head<<' ';print(tail...);}
template<class... T>
inline void fin(const T &... a){print(a...);exit(0);}
#line 5 "library/template/util.hpp"

struct IOSetup{
  IOSetup(){
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    std::cout.tie(0);
    std::cout<<std::fixed<<std::setprecision(12);
    std::cerr<<std::fixed<<std::setprecision(12);
  }
};
template<typename F>
struct REC{
  private:
  F f;
  public:
  explicit constexpr REC(F&&f_):f(std::forward<F>(f_)){}
  template<typename... Args>
  constexpr auto operator()(Args&&...args)const{
    return f(*this, std::forward<Args>(args)...);
  }
};
template<typename T,typename Comp=std::less<T>>
struct compressor{
  private:
  std::vector<T>data;
  Comp cmp;
  bool sorted=false;
  public:
  compressor():compressor(Comp()){}
  compressor(const Comp&cmp):cmp(cmp){}
  compressor(const std::vector<T>&dat,const Comp&cmp=Comp()):data(dat),cmp(cmp){}
  compressor(std::vector<T>&&dat,const Comp&cmp=Comp()):data(std::move(dat)),cmp(cmp){}
  compressor(std::initializer_list<T>li,const Comp&cmp=Comp()):data(li.begin(),li.end()),cmp(cmp){}
  void push_back(const T&v){assert(!sorted);data.push_back(v);}
  void push_back(T&&v){assert(!sorted);data.push_back(std::move(v));}
  template<typename... Args>void emplace_back(Args&&...args){assert(!sorted);data.emplace_back(std::forward<Args>(args)...);}
  void push(const std::vector<T>&v){
    assert(!sorted);
    const int n=data.size();
    data.resize(v.size()+n);
    for(int i=0;i<(int)v.size();i++)data[i+n]=v[i];
  }
  void build(){
    assert(!sorted);sorted=1;
    std::sort(data.begin(),data.end(),cmp);
    data.erase(unique(data.begin(),data.end(),[&](const T&l,const T&r)->bool {return !cmp(l,r)&&!cmp(r,l);}),data.end());
  }
  const T&operator[](int k)const& {
    assert(sorted);
    return data[k];
  }
  int get_index(const T&v)const {
    assert(sorted);
    return int(lower_bound(data.begin(),data.end(),v,cmp)-data.begin());
  }
  void press(std::vector<T>&v)const {
    assert(sorted);
    for(auto&&i:v)i=get_index(i);
  }
  std::vector<int>pressed(const std::vector<T>&v)const {
    assert(sorted);
    std::vector<int>ret(v.size());
    for(int i=0;i<(int)v.size();i++)ret[i]=get_index(v[i]);
    return ret;
  }
  int size()const {
    assert(sorted);
    return data.size();
  }
};
#line 4 "library/template/debug.hpp"

template<typename T,typename=void>
struct is_specialize:std::false_type{};
template<typename T>
struct is_specialize<T,typename std::conditional<false,typename T::iterator, void>::type>:std::true_type{};
template<typename T>
struct is_specialize<T,typename std::conditional<false,decltype(T::first),void>::type>:std::true_type{};
template<typename T>
struct is_specialize<T,std::enable_if_t<std::is_integral<T>::value,void>>:std::true_type{};
inline void dump(const char&t){std::cerr<<t;}
inline void dump(const std::string&t){std::cerr<<t;}
inline void dump(const bool&t){std::cerr<<(t?"true":"false");}
template <typename T,std::enable_if_t<!is_specialize<T>::value,std::nullptr_t> =nullptr>
inline void dump(const T&t){std::cerr<<t;}
template<typename T>
inline void dump(const T&t,std::enable_if_t<std::is_integral<T>::value>* =nullptr){std::string tmp;if(t==infinity<T>::value||t==infinity<T>::max)tmp="inf";if(std::is_signed<T>::value&&(t==infinity<T>::mvalue||t==infinity<T>::min))tmp="-inf";if(tmp.empty())tmp=std::to_string(t);std::cerr<<tmp;}
template<typename T,typename U>
inline void dump(const std::pair<T,U>&);
template<typename T>
inline void dump(const T&t,std::enable_if_t<!std::is_void<typename T::iterator>::value>* =nullptr){std::cerr<<"{";for(auto it=std::begin(t);it!=std::end(t);){dump(*it);std::cerr<<(++it==t.end()?"":",");}std::cerr<<"}";}
template<typename T,typename U>
inline void dump(const std::pair<T,U>&t){std::cerr<<"(";dump(t.first);std::cerr<<",";dump(t.second);std::cerr<<")";}
inline void trace(){std::cerr<<std::endl;}
template<typename Head,typename... Tail>
inline void trace(Head&&head,Tail&&... tail){dump(head);if(sizeof...(tail))std::cerr<<",";trace(std::forward<Tail>(tail)...);}
#ifdef ONLINE_JUDGE
#define debug(...) (void(0))
#else
#define debug(...) do{std::cerr<<#__VA_ARGS__<<"=";trace(__VA_ARGS__);}while(0)
#endif
#line 4 "library/template/type-traits.hpp"

template<std::size_t size>
struct int_least{
  static_assert(size<=128,"size must be less than or equal to 128");
  using type=typename std::conditional<
    size<=8,std::int_least8_t,
    typename std::conditional<
      size<=16,std::int_least16_t,
      typename std::conditional<
        size<=32,std::int_least32_t,
        typename std::conditional<size<=64,std::int_least64_t,__int128_t>::type>::type>::type>::type;
};
template<std::size_t size>using int_least_t=typename int_least<size>::type;
template<std::size_t size>
struct uint_least{
  static_assert(size<=128,"size must be less than or equal to 128");
  using type=typename std::conditional<
    size<=8,std::uint_least8_t,
    typename std::conditional<
      size<=16,std::uint_least16_t,
      typename std::conditional<
        size<=32,std::uint_least32_t,
        typename std::conditional<size<=64,std::uint_least64_t,__uint128_t>::type>::type>::type>::type;
};
template<std::size_t size>using uint_least_t=typename uint_least<size>::type;
template<typename T>
using double_size_int=int_least<std::numeric_limits<T>::digits*2+1>;
template<typename T>using double_size_int_t=typename double_size_int<T>::type;
template<typename T>
using double_size_uint=uint_least<std::numeric_limits<T>::digits*2>;
template<typename T>using double_size_uint_t=typename double_size_uint<T>::type;
template<typename T>
using double_size=typename std::conditional<std::is_signed<T>::value,double_size_int<T>,double_size_uint<T>>::type;
template<typename T>using double_size_t=typename double_size<T>::type;
#line 9 "library/template/template.hpp"
using namespace std;
#line 2 "code.cpp"
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        vector<bool>f(k,0);
        int n=nums.size();
        ll cnt=0;
        rrep(i,n){
            nums[i]--;
            if(nums[i]<k){
                if(!f[nums[i]]){
                    f[nums[i]]=1;
                    cnt++;
                    if(cnt==k)return n-i;
                }
            }
        }
        return n;
    }
};