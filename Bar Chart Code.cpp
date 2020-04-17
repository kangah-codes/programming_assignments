#include<iostream>

using namespace std;

int main()
{
	int n;
	int female[n];
	int male[n];
	int total[n];
	
	cout << "Enter the number of Halls" << endl;
	cin >> n;
	
	for(int a = 0; a < n; a ++)
	{
		cout << "For hall " << a + 1 <<" Enter the number of males: " << endl;
		cin >> male[a];
		cout << "For hall " << a + 1 << " Enter the number of female: " << endl;
		cin >> female[a];
		total[a] = (male[a] + female[a])/10;
	}
	for(int b = 0; b < n; b ++)
	{
		cout << "For Hall " << b + 1 << " there are :";
		for(int c = 0; c < total[b]; c ++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	
	return 0;
}
