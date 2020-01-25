def sum1(num):
    sum = 0
    for i in range(1, num + 1):
        sum += i
    return sum

def sum2(num):
    sum = 0
    for i in range(1, num + 1):
        sum += i*i
    return sum

print(sum1(100)*sum1(100)-sum2(100))