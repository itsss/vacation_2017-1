#include <stdio.h>

int main()
{
	long long int a, arr[100001], tmp;
	scanf("%d", &a);
	
	for(int i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	int i=0, j=0;    
 
	for(i=0; i<a-1; i++)
	{
		for(j=0; j<a-i-1; j++)
		{
			if(arr[j]<arr[j+1])       
            {
                int t=arr[j];      
                arr[j]=arr[j+1];   
                arr[j+1]=t;       
            }
		}
	}
        
	for(int i = 0; i < a; i++)
	{
		printf("%d ", arr[i]);
	}
}
