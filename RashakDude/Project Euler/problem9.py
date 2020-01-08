for a in range(1,1001):
    for b in range(1,1001-a):
        for c in range(1,1001-b-a):
            if (a+b+c)==1000 and (a*a)+(b*b)==(c*c):
                print(a*b*c)
                break
