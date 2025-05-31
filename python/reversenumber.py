n = int(input("enter a number"))
reverse = 0

while n > 0:
    ld = n % 10
    reverse = (reverse * 10) + ld
    n = n // 10

print()
print(reverse,end='')