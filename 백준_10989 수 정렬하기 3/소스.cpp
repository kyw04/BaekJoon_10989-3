#include <iostream>
#define N 10001
using namespace std;

int cut[N];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int i, n;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		cut[a]++;
	}
	for (i = 0; i < N; i++)
	{
		while (cut[i]) 
		{
			cout << i << '\n';
			cut[i]--;
		}
	}
}
