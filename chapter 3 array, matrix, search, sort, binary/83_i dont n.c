#include <stdio.h>

int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, -1, -1, -1, 0, 1, 1, 1};

int arr[200][200];
int n, m;

int check(int i, int j) 
{
    int temp = arr[i][j];

    for (int index = 0; index < 8; index++) 
    {
        int i1 = i + dx[index];
        int j1 = j + dy[index];

        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m) 
            if(arr[i1][j1] >= temp)
                return 0;
    }

    return 1;
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
            if (check(i, j)) 
                count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
