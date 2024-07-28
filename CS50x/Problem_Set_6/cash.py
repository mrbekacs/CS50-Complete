while True:
    try:
        dollar = float(input("Change: "))
        if (dollar > 0.0):
            break
    except:
        print("", end="")

n = round(dollar * 100)
num_coins = 0

while n > 0:
    if n > 24:
        n -= 25
        num_coins += 1
    elif n > 9:
        n -= 10
        num_coins += 1
    elif n > 4:
        n -= 5
        num_coins += 1
    else:
        n -= 1
        num_coins += 1

print(num_coins)
