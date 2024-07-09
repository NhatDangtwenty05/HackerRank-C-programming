#include <stdio.h>

int dx[4] = {-1, 0 , 1, 0};
int dy[4] = {0, -1, 0, 1};

int arr[200][200];
int n, m;

void check(int i, int j) 
{
    arr[i][j] = 0;

    for (int index = 0; index < 4; index++) 
    {
        int i1 = i + dx[index];
        int j1 = j + dy[index];

        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && arr[i1][j1] == 1) 
            check(i1, j1);
    }
}

int main() 
{
    scanf("%d%d", &n, &m);
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if (arr[i][j] == 1) 
            {
                count++;
                check(i, j);
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
