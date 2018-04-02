#include<iostream>
using namespace std;

int main()
{
	int N = 0;
	int S = 0;
	int s = 0;
	cin >> N;
	int left[100];
	int right[100];
	for (int i = 0; i < N; i++)
	{
		cin >> left[i];
		cin >> right[i];
	}
	for (int i = 0; i < N; i++)
	{
		S += (right[i] - left[i])*(right[i] - left[i]);
		if (i == N - 1)
			break;
		else
		{
			if (right[i] > left[i + 1])
				if ((right[i] - left[i]) < (right[i + 1] - left[i + 1]))
					s += (right[i] - left[i + 1])*(right[i] - left[i]);
				else
					s += (right[i] - left[i + 1])*(right[i + 1] - left[i + 1]);
		}

	}
	cout << S - s << endl;

	return 0;
}