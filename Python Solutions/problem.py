from timeit import repeat

import math
while True:
 try:
   x = input("Enter a number to get x + xx + xxx: ")
   if(math.isnan(int(x))):
    print("Please put a valid number")
   else:
    y = int(x) + int(str(x) + str(x)) + int(str(x) + str(x) + str(x)) 
    print("The result is: " + str(y))
 except:
    print("I guess it is not a number")
    break