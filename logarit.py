def decimalToBinary(n):
    return "{0:b}".format(int(n))

def mulPow(a,k,n):
    #return a^k mod n
    b = 1
    if k == 0 :
        return b
    K = decimalToBinary(k)[::-1]
    A = a
    if K[0]=='1':
        b = a
    for i in range(1,len(K)):
        A = A**2 %n
        if K[i] == '1':
            b = A*b%n
    return b

def logarit(g,a,p):
    #tim log g(a) tren Zp*
    for i in range (1,p):
        if mulPow(g,i,p)==a:
            print(i,end='\t')

# logarit(31,45,61)
# logarit(17,15,97)

while True:
    print('Tim logarit co so g cua a tren Zp')
    g = int(input('Nhap co so g: '))
    if g == 0:
        break
    a = int(input('Nhap a: '))
    p = int(input('Nhap p: '))

    print(f'Tren truong Z{p}: LOG{g}({a}) = ',end='')
    logarit(g,a,p)
    print('\n')