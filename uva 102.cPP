#include <iostream>
#include <string>

using namespace std;

int main (void) {
	unsigned int bottles[9];
     int bcg[9],bgc[9],cbg[9],cgb[9],gcb[9],gbc[9],i;
	while (cin >> bottles[0]) {
            int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0;
        string minimum = "BGC";
	 	for ( i = 1; i < 9; i++) {
        cin >> bottles[i];
        bcg[i]=bottles[i],bgc[i]=bottles[i];
        cgb[i]=bottles[i],cbg[i]=bottles[i];
        gcb[i]=bottles[i],gbc[i]=bottles[i];
	}

        bcg[0]=0,bgc[0]=0,bcg[5]=0,bcg[7]=0,bgc[4]=0,bgc[8]=0;
        cbg[0]=bottles[0],cgb[0]=bottles[0],cbg[2]=0,cbg[3]=0;cbg[7]=0,cgb[2]=0,cgb[6]=0,cgb[4]=0;
         gcb[0]=bottles[0],gbc[0]=bottles[0],gbc[8]=0,gcb[1]=0,gcb[5]=0,gcb[6]=0,gbc[1]=0,gbc[3]=0;

		unsigned int min = 1 << 31;

		for( i=0;i<9;i++) sum1+=bcg[i],sum2+=bgc[i],sum3+=cbg[i],sum4+=cgb[i],sum5+=gbc[i],sum6+=gcb[i];

		if (sum1 < min)minimum = "BCG",min = sum1;

		if (sum2 < min)minimum = "BGC",min = sum2;

		if (sum3 < min)minimum = "CBG",min = sum3;

		if (sum4 < min)minimum = "CGB",min = sum4;

		if (sum5 < min)minimum = "GBC",min = sum5;

		if (sum6 < min)minimum = "GCB",min = sum6;


		cout << minimum << " " << min << endl;
	}

	return 0;
}

