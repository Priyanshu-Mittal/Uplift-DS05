def swapping(a, b):
    print("The value of a before swapping :", a)
    print("The value of b after swapping :", b)
    a, b = b, a
    print("The value of a after swapping :", a)
    print("The value of b after swapping :", b)


def alternative_swapping(a, b):
    if a == b:
        return
    a = a + b
    b = a - b
    a = a - b
    print("The values after swapped", (a, b))


if __name__ == "__main__":
    swapping(5, 6)
    alternative_swapping(6, 5)
