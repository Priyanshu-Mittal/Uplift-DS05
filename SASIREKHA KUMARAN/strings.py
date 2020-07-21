def Count(str):
    a = [0, 0, 0, 0]
    for i in range(len(str)):
        if str[i].isupper():
            a[0] = a[0] + 1
        elif str[i].islower():
            a[1] += 1
        elif str[i].isdigit():
            a[2] += 1
        else:
            a[3] += 1
    print(a)
    print('Upper case letters:', a[0])
    print('Lower case letters:', a[1])
    print('Number:', a[2])
    print('Special characters:', a[3])

Count("UPLiftproJECT2020@")
