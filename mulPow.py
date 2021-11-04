def decimalToBinary(n):
    return "{0:b}".format(int(n))
def printArr(Arr,name):
    print('%5s'%name,end='')
    for i in Arr:
        print('%10s'%i,end='')
    print()
def mulPow(a,k,n):
    #return a^k mod n
    Ap=[]
    Bp=[]
    b = 1
    if k == 0 :
        return b
    K = decimalToBinary(k)[::-1]
    A = a
    if K[0]=='1':
        b = a
    Ap.append(A)
    Bp.append(b)
    for i in range(1,len(K)):
        A = A**2 %n
        if K[i] == '1':
            b = A*b%n
        Ap.append(A)
        Bp.append(b)
    printArr(range(0,len(K)),'i')
    printArr(K,'Ki')
    printArr(Ap,'A')
    printArr(Bp,'b')
    return b
while True:
    print('\nTinh a^k mod n')
    a = int(input('Nhap a: '))
    if a == 0:
        break
    k = int(input('Nhap k: '))
    n = int(input('Nhap n: '))
    print('\nKQ= ',mulPow(a,k,n))