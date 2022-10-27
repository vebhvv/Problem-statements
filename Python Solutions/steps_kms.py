# start

def num_input():
    wel_str = "\nSelect any option from below\n\t1. Steps to KMs\n\t2. KMs to Steps\n\t3. Exit the program\n\n"
    n=int(input(wel_str))
    if (0<n<4):
        route(n)
    else:
        print("\n:: Select from given options only ::\n")
        num_input()

def route(n):
    if n==1:
        steps=float(input("\tEnter no. of Steps\n"))
        ms = steps//1.43
        ukm = f"{ms//1000} Kilometer and {ms%1000} meters"
        ms = steps//1.41
        dkm = f"{ms//1000} Kilometer and {ms%1000} meters"
        print(f"\tNearly between {ukm} and {dkm}\n")
        num_input()
    elif n==2:
        kms=float(input("\tEnter no. of Meters\n"))
        print(f"\tNearly between {int(kms*1.42)} and {int(kms*1.44)} Steps\n")
        num_input()
    elif n==3:
        n=0
    else:
	    num_input()

def main():
    num_input()
    print("exit......")

main()

# end
