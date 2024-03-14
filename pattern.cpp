#include <iostream>
using namespace std;
main()
{
	// My solution using 3 for loops
	int row;
	cout << "Enter number of rows:" << endl;
	cin >> row;

	for (int i = 1; i <= row; i++)
	{
		for (int j = 0; j < row - i; j++)
		{
			cout << "*";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << k;
		}
		for (int x = i - 1; x != 0; x--)
		{
			cout << x;
		}
		for (int j = 0; j < row - i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

// Solution using while loop
// int n;
//   cout << "enter number of row\n";
//   cin >> n;
//   int row = 1;
//   while (n >= row)
//   {
//     int space = n - row;
//     while (space)
//     {
//       cout << "*";
//       --space;
//     }
//     int j = 1;
//     while (j <= row)
//     {
//       cout << j;
//       ++j;
//     }
//     int start = row - 1;
//     while (start)
//     {
//       cout << start;
//       --start;
//     }
//     int star = n - row;
//     while (star)
//     {
//       cout << "*";
//       --star;
//     }
//     ++row;
//     cout << "\n";
//   }