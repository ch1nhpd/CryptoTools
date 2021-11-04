
print('Tim can bac hai cua a mod n')
print('(Tim cac x de x^2 = a mod n)')
while True:
    a = int(input('Nhap a: '))
    if a == 0:
        break
    n = int(input('Nhap n: '))
    print(f'Cac can bac hai cua {a} mod {n} la: ')
    for i in range(1,n):
        if i**2 % n == a:
            print('%8s'% i,end='')
    print()