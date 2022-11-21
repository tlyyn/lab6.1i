#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void Create(int p[], const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		p[i] = Low + rand() % (High - Low + 1);
}

void Print(int p[], const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << p[i];
	cout << endl;
}

int Sum(int* p, const int size, int& count)
{
	int S = 0;
	for (int i = 0; i < size; i++)

		if (p[i] % 2 == 0 || i % 2 == 0)
		{
			S += p[i];
			count++;
			p[i] = 0;
		}

	return S;
}

int main()
{
	srand((unsigned)time(NULL));

	const int n = 24;

	int p[n];

	int Low = -10;
	int High = 14;
	Create(p, n, Low, High);
	Print(p, n);
	int count = 0;

	cout << "Sum = " << Sum(p, n, count) << endl;
	cout << "Count = " << count << endl;

	Print(p, n);

	return 0;
}
