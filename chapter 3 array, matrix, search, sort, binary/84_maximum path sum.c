#include <stdio.h>
#include <math.h>

int dx[2] = {0, 1};
int dy[2] = {1, 0};

int arr[200][200];
int n, m;


int main() 
{
    scanf("%d%d", &n, &m);
    int res[n][m];
    
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++)
         {
            scanf("%d", &arr[i][j]);
            res[i][j] = arr[i][j];
         }
        
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++)
        {
            if(i == 0 && j == 0)
                res[i][j] = arr[i][j];
            else if(i == 0)
                res[i][j]+=arr[i][j - 1];
            else if(j == 0)
                res[i][j]+=arr[i - 1][j];
            else
                res[i][j]+=fmax(res[i][j - 1], res[i - 1][j]);

        }

    printf("%d\n", res[n - 1][m - 1]);

    return 0;
}
