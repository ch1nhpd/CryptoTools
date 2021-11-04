def shiftLeft(x):
    x = x[1:]
    x += '0'
    return x

def xor(x,y):
    #y = '00011011'
    rs = ''
    for i in range(0, 8):
        if x[i] == y[i]:
            rs += '0'
        else:
            rs += '1'
    return rs

def xtime(x):
    if x[0] == '0':
        x = shiftLeft(x)
    else:
        x = shiftLeft(x)
        x = xor(x,'00011011')
    return x

print('Tinh (a) nhan (b) !')
while True:
    a = input('Nhap a: ( HOAC nhap 0 de thoat) ')
    if a == '0':
        break
    b = input('Nhap b: ')

    A = "{0:08b}".format(int(a, 16))
    B = "{0:08b}".format(int(b, 16))[::-1]
    rs = ''
    for i in range(0,7):
        if B[i]=='1':
            tmp = A
            for j in range(0,i):
                tmp = xtime(tmp)
            if rs =='':
                rs = tmp[:]
            else :
                rs = xor(rs,tmp)
    decimal_representation = int(rs, 2)
    hexadecimal_string = hex(decimal_representation)
    print(f'({a})*({b}) = {rs} ({hexadecimal_string[2:].upper()})')
    print('\nTiep tuc nao')
