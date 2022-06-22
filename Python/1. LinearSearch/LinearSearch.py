# The Main Array
from asyncio.windows_events import NULL


arr = [10, 20, 80, 30, 60, 50, 110, 100, 130, 170]

number = input("Enter Your Number : ")
number = int(number)

n = len(arr)

for i in range(0,n):
    if(arr[i] == number):
        present = 1
        index = i
        break
    else:
        present = NULL

if(present == 1):
    print(f"Your Number Index is : {index + 1}")
else:
    print("Your Number Is not present Here")