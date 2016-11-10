/*                                                CODEMAN
                                              Arif Khan Nihar
                                       Uva 10194 - Football (aka Soccer)
                                             date -> 22/10/2016

                                             */
#include<bits/stdc++.h>
using namespace std;

int match_result(int a,int b){
     if(a>b)return 1;
     else if(a==b)return 0;
     else return -1;
}

struct match_records{
            string t_name;
            string t_name_uppercase;
            int t_points,t_goal,t_w,t_t,t_l,t_g_eat,t_p_m;

    }team_records[51];

string oneTotwo(string s){
    size_t p;string s1;
    p = s.find('#');
    s1 = s.substr(0,p);
    return s1;
}

string oneTotwore(string s){
    reverse(s.begin(),s.end());
        size_t p;string s1;
        p = s.find('#');
        s1 = s.substr(0,p);
        reverse(s1.begin(),s1.end());
       return s1;
}

int value(string s1){
    size_t p;string s2;
    p = s1.find('#');
    s2 = s1.substr(1+p);
    int n = 0;
    istringstream(s2) >> n;
    return n;
}

int value1(string s1){
    size_t p;string s2;
    p = s1.find('#');
    s2 = s1.substr(0,p);
    int n = 0;
    istringstream(s2) >> n;
    return n;
}

int check(string a,int n){
    int k = 0;
    for(int i = 0; i<n ; i++){
        if(a == team_records[i].t_name){
            k = i;
            break;
        }
    }
   return k;
}

bool cmp(const match_records &x, const match_records &y){

  if (x.t_points != y.t_points)
       return x.t_points>y.t_points;

  if (x.t_w!= y.t_w)
       return x.t_w > y.t_w;

  if (x.t_goal - x.t_g_eat != y.t_goal - y.t_g_eat)
       return x.t_goal - x.t_g_eat > y.t_goal - y.t_g_eat;

  if (x.t_goal != y.t_goal)
       return x.t_goal > y.t_goal;

  if (x.t_p_m != y.t_p_m)
       return x.t_p_m < y.t_p_m;

  return x.t_name_uppercase < y.t_name_uppercase;

}

int main()
{
    //freopen("in.txt","r",stdin);

  int n,t_num,i,j,t_m_num;
  string touranment_name,team_name;
  string s2,s3;char ss[101];
  size_t p , p1;

  cin>>n;
  cin.ignore(101,'\n');
  while(n--){
    getline(cin,touranment_name);
    cin>>t_num;
    cin.ignore(101,'\n');

    for(i=0;i<t_num;i++){
         getline(cin,team_records[i].t_name);
         team_records[i].t_name_uppercase = team_records[i].t_name;
         transform(team_records[i].t_name.begin(),team_records[i].t_name.end(),team_records[i].t_name_uppercase.begin(),:: toupper);
    }

    cin>>t_m_num;
    cin.ignore(101,'\n');

    for(i=0;i<t_m_num;i++){
        getline(cin,s2);

        p = s2.find('@');
        s3 = s2.substr(0,p);
        s2 = s2.substr(p+1);

        string f_t_n = oneTotwo(s3);
        string s_t_n = oneTotwore(s2);

        int f_t_g_n = value(s3);
        int s_t_g_n = value1(s2);

        int k1 = 0;
        k1=check(f_t_n,t_num);
        team_records[k1].t_p_m ++;

        int k2 = 0;
        k2=check(s_t_n,t_num);
        team_records[k2].t_p_m ++;

    team_records[k1].t_goal +=f_t_g_n;
    team_records[k1].t_g_eat += s_t_g_n;
    team_records[k2].t_goal +=s_t_g_n ;
    team_records[k2].t_g_eat +=f_t_g_n;

    if(match_result(f_t_g_n,s_t_g_n)>0){
        team_records[k1].t_w += 1;
        team_records[k1].t_points +=3;
        team_records[k2].t_l +=1;
    }
    else if(match_result(f_t_g_n,s_t_g_n)==0){
        team_records[k1].t_t +=1;
        team_records[k2].t_t +=1;
        team_records[k1].t_points +=1;
        team_records[k2].t_points +=1;
    }
    else{
        team_records[k2].t_w += 1;
        team_records[k2].t_points +=3;
        team_records[k1].t_l +=1;
      }
   }
    stable_sort(team_records,team_records+t_num,cmp);

    cout<<touranment_name<<endl;
    for (int i = 0; i <t_num; i++) {
      cout << i+1 << ") " << team_records[i].t_name << " " << team_records[i].t_points << "p, " << team_records[i].t_p_m << "g (" << team_records[i].t_w << "-" << team_records[i].t_t << "-" << team_records[i].t_l << "), " << team_records[i].t_goal - team_records[i].t_g_eat << "gd (" << team_records[i].t_goal << "-" << team_records[i].t_g_eat << ")" << endl;
      team_records[i].t_name.clear(),team_records[i].t_points=0,team_records[i].t_p_m=0,team_records[i].t_w=0,team_records[i].t_t=0,team_records[i].t_goal=0,team_records[i].t_l=0,team_records[i].t_g_eat=0;
    }

   if(n)cout<<endl;
  }

    return 0;
}

