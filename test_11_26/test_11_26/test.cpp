#define  _CRT_SECURE_NO_WARNINGS 1
#include <bitsdc++.h>
using namespace std;

const int N = 100000;
int n, m;
int h[N], e[N], ne[N], idx, d[N];//»Î∂»
queue<int> q, top;

void add(int a, int b)
{
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx++;
}

void topsort()
{
	for (int i = 1; i <= n; i++)
	{
		if (d[i] == 0)
			q.push(i);
	}

	while (!q.empty())
	{
		int t = q.front();
		q.pop();
		top.push(t);
		for (int j = h[t]; j != -1; j = ne[j])
		{
			int end = e[j];
			d[end]--;
			if (!d[end])
				q.push(end);
		}
	}
	return;
}


int main()
{
	memset(h, -1, sizeof h);
	cin >> n >> m;
	int a, b;

	for (int i = 0; i < m; i++)
	{

		cin >> a >> b;
		add(a, b);
		d[b]++;
	}
	topsort();
	if (q.size() == 0)
	{
		while (!top.empty())
		{
			cout << top.front() << " ";
			top.pop();
		}
	}
	else
	{
		cout << -1 << endl;
	}


	return 0;
}