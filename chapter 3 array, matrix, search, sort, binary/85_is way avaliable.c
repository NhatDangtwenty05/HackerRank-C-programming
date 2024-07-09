#include <stdio.h>

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int arr[200][200];
int n, m;

int check(int s, int t, int u, int v)
{
	arr[s][t] = 0;
	for(int i = 0;i < 4;i++)
	{
		int i1 = s + dx[i];
		int j1 = t + dy[i];
		if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && arr[i1][j1])
		{
			if(i1 == u && j1 == v)
				return 1;
			return check(i1, j1, u, v);
		}

	}

	return 0;
}

int main()
{
	scanf("%d%d", &n, &m);

	for(int i = 0;i < n;i++)
		for(int j = 0;j < m;j++)
			scanf("%d", &arr[i][j]);

	int s, t;
	int u, v;
	scanf("%d%d%d%d", &s, &t, &u, &v);

	if(check(s, t, u, v))
		printf("yes\n");
	else
		printf("no\n");

	return 0;
}
