def gcd(a,b):
    while(b!=0):
        tmp = a
        a = b
        b = tmp%a
    return a

def zStar(n):
    zS = []
    for i in range(1,n):
        if gcd(i,n) == 1:
            zS.append(i)
    return zS

def ord(a,n):
    for i in range(1,n):
        if a**i%n == 1:
            return i


print('\nTim cap cua cac phan tu trong Z* cua n')
n = int(input('Nhap n: '))

zS = zStar(n)
print('%-15s'% 'a thuoc z*:',end='\t')
for i in zS:
    print('%-6s'%i,end='')
print('\n%-15s'% 'ord(a):',end='\t')
for i in zS:
    print('%-6s' % ord(i,n),end='')

input('\n\n....')