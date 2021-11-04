def gcd(a,b):
    while(b!=0):
        tmp = a
        a = b
        b = tmp%a
    return a

dem = 0
for i in range(1,356):
    if gcd(i,356) == 1:
        print(i,end='\t')
        if(dem % 30== 0):
            print()
        dem+=1
print('\n',dem)