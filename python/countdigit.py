n = 67895
count = 0

while(n > 0):
    lastdigit = n % 10
    count += 1
    print(lastdigit,end='')
    n = n // 10

print()
print(count,end='')