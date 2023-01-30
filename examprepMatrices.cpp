#include <iostream>

using namespace std;

void printM(int** matrix, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
}

void replaceOver10s(int** matrix, int n, int m, int replaceWith)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] > 10)
			{
				matrix[i][j] = replaceWith;
			}
		}
	}
}

int** copyMatrix(int** matrix, int n, int m)
{
	int** newMatrix = new int* [n];
	for (size_t i = 0; i < n; i++)
	{
		newMatrix[i] = new int[m];
		for (size_t j = 0; j < m; j++)
		{
			newMatrix[i][j] = matrix[i][j];
		}
	}
	return newMatrix;
}

bool isEven(int element)
{
	return element % 2 == 0;
}

bool isRowMinusOne(int* row, int length)
{
	for (int i = 0; i < length; i++)
	{
		if (row[i] != -1)
			return false;
	}
	return true;
}

int main()
{
	int n, m;
	cout << "Rows: ";
	cin >> n;
	cout << "Cols: ";
	cin >> m;

	// ===== initialize matrix ===== //
	int** matrix = new int*[n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	// ===== input matrix ===== //
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}

	int** copy = copyMatrix(matrix, n, m);

	cout << "\nPrint:\n";
	// ===== print matrix ===== //
	printM(matrix, n, m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (isEven(matrix[i][j]))
			{
				matrix[i][j]++;
			}
		}
	}
	cout << "\nNo evens:\n";
	// ===== print matrix ===== //
	printM(matrix, n, m);

	replaceOver10s(matrix, n, m, -1);

	cout << "\nNo >10:\n";
	// ===== print matrix ===== //
	printM(matrix, n, m);

	int validRows = 0;
	for (int i = 0; i < n; i++)
	{
		if (!isRowMinusOne(matrix[i], m))
		{
			validRows++;
		}
	}

	int** newMatrix = new int* [validRows];
	for (int i = 0; i < validRows; i++)
	{
		newMatrix[i] = new int[m];
	}

	int currentRow = 0;
	for (int i = 0; i < n; i++)
	{
		if (!isRowMinusOne(matrix[i], m))
		{
			for (int j = 0; j < m; j++)
			{
				newMatrix[currentRow][j] = matrix[i][j];
			}
			currentRow++;
		}
	}
	cout << "\nEnd Result:\n";
	printM(newMatrix, validRows, m);

	cout << "\nOriginal:\n";
	printM(copy, n, m);


	for (size_t i = 0; i < n; i++)
		delete[] matrix[i];
	delete[] matrix;
}