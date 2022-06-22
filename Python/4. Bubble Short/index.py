def bubleShort(array, n):
    for i in range(0, n):
        for j in range(0, n-i-1):
            if array[j] > array[j + 1]:
                temp = array[j]
                array[j] = array[j+1]
                array[j+1] = temp
                
    print(array)


if __name__ == "__main__":
    temp = 0
    array = [5, 1, 4, 2, 8, 10, 76, 56, 43, 12]

    n = len(array)

    bubleShort(array,n)