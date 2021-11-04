#include <stdio.h>
#include <stdlib.h>

long inverInFp(long a, long p)
{
	int u,v,x,x1,x2,r,q;
	u = a;
	v = p;
	x1 = 1;
	x2 = 0;
	while(u!=1)
	{
		q = v/u;
		r = v%u;
		x = x2-q*x1;

		v = u;
		u = r;
		x2= x1;
		x1 = x;
	}
	return x1;
}
int main()
{
	int a,p,x1,y1,x2,y2,x3,y3;
	printf("--Tinh tong hai diem (ECC)--\n");
	printf("Nhap a,p : ");
	scanf("%d%d",&a,&p);
	while(1){
        printf("\nNhap x1,y1: ( HOAC 0 0 de thoat! ) ");
        scanf("%d%d",&x1,&y1);
        if(x1==0 && y1 ==0 )
        	break;
        printf("Nhap x2, y2: ");
        scanf("%d%d",&x2,&y2);
        if(x2<x1)
        {
        	int  tmp = x2;
        	x2 = x1; x1= tmp;
        	tmp = y2;y2=y1;y1=tmp;
		}
        int lamda ;
        if(x1 == x2 && y1==y2)
        {
        	int tmp1 = 2*y1;
        	int tmp = (int) inverInFp(tmp1,p);
            lamda = (3*x1*x1+a)*tmp%p;
        }else
        {
        	int tmp2 = x2-x1;
        	int tmp3 = (int)inverInFp(tmp2,p);
            lamda = (y2-y1)*tmp3%p;
        }
        printf("lamda = %d",lamda);
        x3 = (lamda*lamda - x1 - x2)%p;
        y3 = (lamda*(x1-x3) - y1)%p;
        if(x3<0)x3+=p;
        if(y3<0)y3+=p;
        printf("\nP3(x3,y3) = (%d,%d)" ,x3, y3);
   		printf("\nPRESS ENTER TO CONTINUE!\n\n");
    	getch();
	}
}
