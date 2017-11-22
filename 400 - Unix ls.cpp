#include <bits/stdc++.h>
using namespace std;

struct ans{
     string st;
}rec[1511];

bool cmp(const ans &x, const ans &y){
    return x.st < y.st;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
     int n;
     while(cin >> n){
            string s;
          int len =0, col = 0, row = 0;
        for(int i = 0; i < n; i++){
            cin >> rec[i].st;

            len = max(len,(int)rec[i].st.size());
        }

        stable_sort(rec,rec+n,cmp);

        col = 60 / len;
        while (len * col + 2 * (col - 1) > 60)
                   col--;

        row = n / col;
        if (row * col < n)
              row++;

        cout<<setfill('-')<<setw(60)<<"-"<<endl;

       for (int i = 0; i < row; i++) {
         for (int j = 0; j < col && j*row+i < n; j++) {
            cout << rec[j * row + i].st;

                cout <<setfill(' ') << setw((len - rec[j*row+i].st.size())) << " ";

                if (j < col - 1)
                cout << "  ";
            rec[j * row + i].st.clear();
         }
      cout << endl;
       }

     }

    return 0;
}
