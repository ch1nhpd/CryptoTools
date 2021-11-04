long long mulPow(long long a, long long k, long long n)
{
    if(k==0)
    {
        return 1;
    }
    long long p =mulPow(a,k/2,n);
    if(k%2==0)
    {
        return (p*p)%n;
    }
    else
    {
        return (a*p*p)%n;
    }
}

int main()
{
	long long a,k,n;
	while(1)
	{
		printf("NHAN BINH PHUONG LAP: a^k mod n...\n");
		printf("Nhap a, k ,n: ( HOAC nhap 0 0 0 de thoat! ) ");
		scanf("%lld%lld%lld",&a,&k,&n);
		if(a == 0 || k <= 0 || n <= 0)
			break;
		printf("%lld ^ %lld  mod  %lld  =  %lld\n",a,k,n,mulPow(a,k,n));
	    printf("\nPRESS ENTER TO CONTINUE...!\n\n");
	    getch();
	}
	
}
