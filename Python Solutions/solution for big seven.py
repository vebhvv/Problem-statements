n1=int(input("Enter The First number : "))
n2=int(input("Enter The Second number : "))
n3=int(input("Enter The Third number : "))
if (n1>n2) and (n1>n3):
    print("Result : ",n1,"is biggest number")
elif (n2>n1) and (n2>n3):
    print("Result : ",n2,"is biggest number")
else:
    print("Result : ",n3,"is biggest number")
