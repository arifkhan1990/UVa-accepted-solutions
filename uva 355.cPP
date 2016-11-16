/*
                                                  CODEMAN
                                              ARIF KHAN NIHAR
                                       uva 355 - The Bases are Loaded

*/
#include<bits/stdc++.h>
using namespace std;

// Math Start
#define PI acos(-1.0)
#define Pi 3.141592653589793
#define SQR(n) ( n * n )
#define CUBE(n) (SQR(n)*n)
// Math End

// Pair Start
#define ff first
#define ss second
#define mp make_pair
// Pair End

// Array Start
#define SET(a) memset( a, -1, sizeof a )
#define CLR(a) memset( a, 0, sizeof a )
#define MEM(a,val) memset( a, val, sizeof(a) )
// Array End

// Extra Start
#define nn '\n'
#define pb push_back
#define SS stringstream
#define ull unsigned long long
#define mod 1000000007
#define INF 2147483647
#define SIZE 2000001
#define _cin ios_base::sync_with_stdio(0); cin.tie(0);
#define sz(a) int((a).size())
#define space " "
#define all(x) (x).begin(), (x).end()
#define Ignore cin.ignore()
#define StringToInt if ( ! (istringstream(s) >> n) ) n = 0;
// Extra End

// Functions Start
template < class T > T Multiply( T a, T b ){return a * b ;}
template < class T > T larger( T a, T b ){return ( a > b ? a : b );}
template < class T > T smaller( T a, T b ){return ( a < b ? a : b );}
template<class T> T gcd(T a,T b){if(b == 0)return a;return gcd(b,a%b);}
template<class T> T lcm(T a, T b ){return (a*b)/gcd(a,b);}
template < class T > string converter( T n ){SS x;x << n;return x.str();}
// Functions End

// TypeDef Start
typedef long long int ll;
typedef map<string,int> msi;
typedef map<int,int>	mii;
typedef map<ll, ll> mll;
typedef map<char,int> mci;
typedef map<int,string>	mis;
typedef pair<int,int> pii;
typedef pair<string, int> psi;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char>	vc;
typedef vector<bool> vb;
typedef vector< pii > vii;
typedef set<int>s;
typedef multiset<int>ms;
// TypeDef End

// I/O Start
#define sf scanf
#define pf printf

#define sf1(a) scanf("%d", &a)
#define sf2(a,b) scanf("%d %d",&a, &b)
#define sf3(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define sf4(a,b,c, d) scanf("%d %d %d %d", &a, &b, &c, &d)

#define sf1ll(a) scanf("%I64d", &a)
#define sf2ll(a,b) scanf("%I64d %I64d", &a, &b)
#define sf3ll(a,b,c) scanf("%I64d %I64d %I64d", &a, &b, &c)
#define sf4ll(a,b,c, d) scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d)

#define READ freopen("input.txt", "r", stdin);
#define WRITE freopen("output.txt", "w", stdout);
// I/O End
char N[] = "0123456789ABCDEF";
int main()
{
    //READ
   long long int d,n1,n,i,j,l;
   int b1,b2;
    string re="";
    char s[101];
    while(sf("%d %d %s",&b1,&b2,&s)==3){
        string rt = s;
    if(rt != "0"){
    n = strlen(s);
      n1 = n - 1,l=d=0;
      for(i=0;n1>=0;i++,n1--){
        if(!isalpha(s[i]) && (((s[i]-48)>= 0) && ((s[i]-48) < b1))){
        l += ((s[i]-'0') * (powl(b1,n1)));
        }
        else if(isalpha(s[i])&& (((s[i]-65+10)>= 0) && (s[i]-65+10)<b1)){
        l += (10 + (s[i]-65))*powl(b1,n1) ;
        }else{
            l=0;
            break;
        }
       }
      if(l){
      while(l)
        re += (N[l%b2]),l/=b2;
    }
}else{
    re+= "0";
}
    if(!re.empty()){
      reverse(re.begin(),re.end());
      cout << s << " base " << b1 << " = " << re<< " base " << b2 << endl;
    }else{
        cout << s << " is an illegal base " << b1 << " number" << endl;
    }

      re.clear();
    }

	return 0;
}


