while True:
    try:
        n = int(input("Height: "))
        if (n >= 1) and (n <= 8):
            break
    except:
        print("", end="")

for i in range(1,n+1):
    print(" " * (n-i) + "#" * i)

