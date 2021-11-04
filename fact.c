#include <stdio.h>
#include <stdlib.h>

int fact(int n, int arr[10][10])
{
	int N = n;
    int flag = 0;
    int j =0;
    while(n%2==0)
    {
        if(flag ==0)
        {
            arr[0][j] = 2;
            arr[1][j] = 1;
            flag = 1;
        }
        else
        {
            arr[1][j]+=1;
        }
        n/=2;
    }
    if(flag ==1)
    {
        j++;
        flag =0;
    }
    for(int i =3; i<= n; i+=2)
    {
        while(n%i==0)
        {
            if(flag ==0)
            {
                arr[0][j] = i;
                arr[1][j] = 1;
                flag = 1;
            }
            else
            {
                arr[1][j]+=1;
            }
            n/=i;
        }
        if(flag ==1)
        {
            j++;
            flag =0;
        }
    }
    return j;
}

void printArr(int arr[10][10], int sizeArr)
{
	printf("So mu: ");
	for(int i = 1;i>=0;--i)
	{
		for(int j =0;j<sizeArr;++j)
		{
			printf("%d  ",arr[i][j]);
		}
		if(i==1)
		{
			printf("\nCo so: ");
		}

	}
}

int main()
{
    int n, arr[10][10];
    while(1)
    {
    	printf("Chuong trinh phan tich ra thua so nguyen to>\n");
	    printf("Nhap n: ( HOAC nhap 0 de thoat ) ");
	    scanf("%d",&n);
	    if(n == 0)
	    	break;
		int dem = fact(n,arr);
		printArr(arr,dem);
	    printf("\nPRESS ENTER TO CONTINUE!\n\n");
	    getch();
	}
    
    return 0;
}
