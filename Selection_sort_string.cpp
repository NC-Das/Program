#include<stdio.h>
#include<string.h>

void selection_sort(char arr[][100],int n)
{
    int i, j, int_max=0;
    char temp[100];
    for(i=0; i<n; i++)
    {
        int_max = i;
        for(j=i+1; j<n ; j++)
        {
            if(strcmp(arr[j], arr[int_max])>0)
            {
                int_max = j;
            }
        }
        if(int_max != i)
        {
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[int_max]);
            strcpy(arr[int_max], temp);
        }
    }
}
int main()
{
    int n;
    char arr[100][100];
    printf("Enter the array Size: ");
    scanf("%d", &n);
    printf("Enter the array element: ");
    for(int i=0; i<n; i++)
    {
        scanf("%s", &arr[i]);
    }
    selection_sort(arr, n);
    printf("Sorted Element: ");
    for(int i=0; i<n; i++)
    {
        printf("%s" , arr[i]);
    }
    return 0;
}
