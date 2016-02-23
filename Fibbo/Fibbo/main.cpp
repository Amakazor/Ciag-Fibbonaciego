#include <iostream>

using namespace std;

int main()
{
	int u_input;
	int output;

	cout << "=========================" << endl;
	cout << "Witaj!" << endl << "Ten program pokaze Ci wybrany wyraz Ciagu Fibbonaciego" << endl;
	cout << "=========================" << endl;
	cout << endl << "Ktory wyraz ciagu chcesz zobaczyc?" << endl;
	cin >> u_input;
	if (u_input == 0)
	{
		cout << "Ciag nie posiada zerowego wyrazu";
	}
	else
	{
		if ((u_input == 1) || (u_input == 2))
		{
			output = 1;
		}
		else
		{
			int l1 = 1, l2 = 1;
			for (int i = 3; i <= u_input; i = i + 2)
			{
				l1 = l1 + l2;
				l2 = l2 + l1;
			};
			if (u_input	% 2 == 0)
			{
				output = l2;
			}
			else
			{
				output = l1;
			};
		};
		cout << u_input << " wyraz Ciagu Fibbonaciego to: " << output;
	};
	system("pause");
	return 0;
};