#include <stdio.h>
#include <stdlib.h>

int gcd_euclide(long x, long y)
{
	if(y!=0)
		return gcd_euclide(y,x%y);
	else
		return x;
}

int main()
{
	long x,y;
	while(1)
	{
		printf("Chuong trinh tim UCLN \n");
	    printf("Nhap hai so: ( HOAC nhap 0 0 de thoat! ) ");
	    scanf("%ld%ld",&x,&y);
	    if(x == 0 || y ==0)
	   	 	break;
	    printf("gcd = %d\n",gcd_euclide(x,y));
	    printf("PRESS ENTER TO CONTINUE! \n\n");
	    getch();	
	}
	
    return 0;
}
