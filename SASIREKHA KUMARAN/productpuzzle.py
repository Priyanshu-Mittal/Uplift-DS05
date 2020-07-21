def puzzle(arr):
    temp = []
    value = 1
    for i in range(0, len(arr)):
        temp1 = 1
        for j in range(i + 1, len(arr)):
            temp1 = temp1 * arr[j]
        temp.append(value*temp1)
        value = value * arr[i]
    return temp


if __name__=="__main__":
    ans = puzzle([1,2,3,4,5])
    print(ans)
