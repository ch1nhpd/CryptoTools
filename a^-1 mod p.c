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

long euclideEx(long a, long b, long* x, long* y)
{
	int d,x1,x2,y1,y2;
	long t1 = a;
	long t2 = b;
	printf("\n\t%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n","q","r","x","y","a","b","x1","x2","y1","y2");
	if(b==0)
	{
		d = a;
		*x =1;
		*y =0;
	}else
	{
		x2=1;x1=0;y2=0;y1=1;
		printf("\n\t%10s%10s%10s%10s%10ld%10ld%10ld%10ld%10ld%10ld\n","","","","",a,b,x1,x2,y1,y2);
		while(b>0)
		{
			int q = a/b;
			int r = a%b;
			*x = x2 - q*x1;
			*y = y2 - q*y1;

			a = b; b = r;
			x2 = x1; x1 = *x;
			y2 = y1; y1 = *y;
			printf("\n\t%10ld%10ld%10ld%10ld%10ld%10ld%10ld%10ld%10ld%10ld\n",q,r,*x,*y,a,b,x1,x2,y1,y2);
		}
		d = a; *x = x2; *y = y2;
	}
	if(a!=1)
	{
		printf("\n\tKhong co nghich dao!\n");
	}else
	{
		printf("\n--HE QUA--\n");
		printf("\n%li ^-1 mod %li = %li hoac %li\n", t1,t2,*x,*x+t2);
		printf("\n%li ^-1 mod %li = %li hoac %li\n\n", t2,t1,*y,*y+t1);
	}
	return d;
}

int main()
{
	while(1)
	{
	    long a,p,kq;
		printf("Tinh a^-1 mod p \n");
	    printf("Nhap a,p ( HOAC nhap 0 0 de thoat ):  ");
	    scanf("%ld%ld",&a,&p);
	    if(a == 0 || p ==0)
	    	break;
	    printf("\n--EUCLIDE_EXTEND--\n");
		long x,y;
		euclideEx(a,p,&x,&y);
		
		/*
		kq = inverInFp(a,p);
		printf("\n--KQ NHANH--\n\n");
		if(kq<0)
		{
			printf("%li ^-1 mod %li = %li  hoac  = %li\n", a,p,kq,kq+p);
		}else
		{
	    	printf("%li ^-1 mod %li = %li", a,p,kq);
		}*/
	    printf("\nPRESS ENTER TO CONTINUE!\n\n");
	    getch();
   	}
}
