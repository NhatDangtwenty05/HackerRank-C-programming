#include <stdio.h>

int sym(int arr[], int left, int right)
{
    if(left >= right)
        return 1;
    
    if(arr[left] != arr[right])
        return 0; 
	
    return sym(arr, left + 1, right - 1);
}
int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}
	if(sym(arr,0 ,n - 1))
		printf("Yes");
	else
		printf("No");

	return 0;
}