#include<bits/stdc++.h>
using namespace std;
int main()
{

 int n;
 double angle,h_angle,m_angle,h,m;
 string s,s1;
 size_t p;
 while( cin>>s && s!="0:00"){

 p = s.find(':');
 s1 = s.substr(0,p);
 s = s.substr(p+1);
 h = atoi(s1.c_str());
 m = atoi(s.c_str());
	if (h == 12) h = 0;
	if (m == 60) m = 0;

	      h_angle = 0.5 * (h*60 + m);
	      m_angle = 6*m;

	      angle = abs(h_angle - m_angle);

	      angle = min(360-angle, angle);

	printf("%.3lf\n",angle);
 }
	return 0;
}
