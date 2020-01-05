def sum(num):
    prime = [True]*(num+1)
    p=2
    while p*p<num:
        if prime[p] == True:
            i = p * 2
            while i <= num:
                prime[i] = False
                i += p
        p += 1
    s=0
    for i in range(2, num + 1):
        if (prime[i]):
            s += i
    return s

print(sum(2000000))