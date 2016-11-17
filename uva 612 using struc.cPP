/*                                                CODEMAN
                                              Arif Khan Nihar
                                            Uva 612- DNA Sorting
                                             date -> 21/10/2016

                                             */
#include<bits/stdc++.h>
using namespace std;

//create structure
struct match_records{
            string t_name;
            int n1;

    }team_records[101];

//campere value for sorting
bool cmp(const match_records &x, const match_records &y)
{
  return x.n1 < y.n1;
}

//how many time change the position
int sorted(string s1){
    int t = 0;
    for(int i = s1.size()-1;i>=1 ;i--){
        for(int j=0;j<=i-1;j++){
            if(s1[j]>s1[j+1]){
                    swap(s1[j],s1[j+1]);
                t++;
            }
        }
    }

    return t;
}

int main()
{
    freopen("in.txt","r",stdin);
    int n,i,m,x;

    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&x,&m);
        for(i = 0 ;i < m ;i++){
            string s;
            cin>>s;
           team_records[i].t_name = s;
           team_records[i].n1 = sorted(s);
        }
        stable_sort(team_records,team_records+m,cmp);

        for(i = 0; i < m ;i++){
            cout<<team_records[i].t_name<<" = "<<team_records[i].n1<<endl;
        }
     if(n)cout << endl;
    }
    return 0;
}

