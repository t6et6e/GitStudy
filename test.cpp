#include <stdio.h>
#include <iostream>

int main()
{
	int row, column;
	cin >> row >> column;
	int **arr;
	arr = new int*[row];
	for (int i = 0 ; i < row ; i++)
		arr[i] = new int*[column];

	for (int i = 0 ; i < row ; i++)
	{
		for (int j = 0; j < column ; j++)
			cout << arr[i][j];

		cout << endl;
	}
}

