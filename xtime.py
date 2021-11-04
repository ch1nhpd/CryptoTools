def shiftLeft(x):
    x = x[1:]
    x += '0'
    return x

def xor(x):
    y = '00011011'
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
        x = xor(x)
    return x

while True:
    ini_string = input('Xtime bao nhiêu? (hex) ( HOAC nhap 0 de thoat ) ')
    if ini_string == '0':
        break
    # Code to convert hex to binary
    x = "{0:08b}".format(int(ini_string, 16))
    print(f'{ini_string} = {x}')
    x = xtime(x)
    KQ = ''.join(x)
    # hex to bin
    decimal_representation = int(KQ, 2)
    hexadecimal_string = hex(decimal_representation)

    print(f'xtime({ini_string}) = {KQ} ({hexadecimal_string[2:].upper()})')
    print('\nTiep tuc nao')
