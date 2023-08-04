#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int i = 0;
    while(i < n)
    {
        int j = i + 1;
        int c = 1;
        
        while(j < n)
        {
            if(arr[i] == arr[j])
            {
                c++;
                arr[j] = 0;
            }
            j++;
        }
        
        if(c > 1 && arr[i] != 0)
        {
            printf("%d ", arr[i]);
        }
        
        i++;
    }
    
    printf("\n");
    
    return 0;
}

