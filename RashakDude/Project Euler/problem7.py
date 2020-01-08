def nth_prime(n):
    counter = 2
    for i in range(3, n**2, 2):
        k = 1
        while k*k < i:
            k += 2
            if i % k == 0:
               break
        else:
            counter += 1
        if counter == n:
            return i

print(nth_prime(10001))