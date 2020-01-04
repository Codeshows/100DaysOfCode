def pali(num):
    return str(num) == str(num)[::-1]
def largest(a,b):
    z = 0
    for x in range(b,a,-1):
        for y in range(b,a,-1):
            if pali(x*y):
                if x*y > z:
                    z = x*y
    return z

print(largest(900,999))