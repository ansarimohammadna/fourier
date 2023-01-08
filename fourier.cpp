#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
	for (;;)
	{
		int m, n, l; //m: no. of entries, n: term no. of fourier, l: selects the kibd of x, l=1 for x in degree, l=2 for x in arbitrary number
		int i, j, p; //counters for loops
		float k, L; //k is argument for sine-cosine functions, L is the L in cos[npix/L]
		float pi = 3.14;
		m = 6;
		n = 4;
		
		
		cout << "enter L: ";
		cin >> L;
		cout << "enter l: "; //1 if x is in degree, 2 if x is arbitrary;
		cin >> l;
		



		m = m + 1;
		float x[m], y[m], a[m], b[m]; //cos—>a, sin—>b
		float maca, macb;		//sigma a=maca, sigmab=macb
		

		cout << "enter x: "<<endl;
		for (i = 1; i < m; i++)
		{
			cin >> x[i];
			if (l == 1)
			{
				x[i] = (x[i] * 0.01745);
			}
		}
		cout << "enter y: "<<endl;
		for (i = 1; i < m; i++)
		{
			cin >> y[i];
		}
		
		
		

		//full fourier
		for (j = 1; j < (n + 1); j++)
		{
			for (i = 1; i < m; i++)
			{
				k = ((j * pi * x[i]) / L);
				a[i] = (y[i] * cos(k));
				b[i] = (y[i] * sin(k));
			}
			maca = 0;
			macb = 0;
			for (p = 1; p < m; p++)
			{
				maca = (maca + a[p]);
				macb = (macb + b[p]);
			}
			cout << "a" << j << "=" << ((2 * maca) / (m - 1)) << ", ";
			cout << "b" << j << "=" << ((2 * macb) / (m - 1)) << endl
				 << endl;
		}
	}
}