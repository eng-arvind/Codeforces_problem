for t in range(int(input())):
    l=int(input())
    a=list(map(int,input().split()))
    a.sort()
    cA = 0
    A=[]
    cB = 0
    B=[]
    for i in range(2*l):
        if cA > cB:
            cB+=a[i]
            B.append(a[i])
        else:
            cA+=a[i]
            A.append(a[i])
    if len(A)%2 == 0:
        if len(A)<len(B):
            A.append(B[0])
            B.pop(0)
        else:
            B.append(B[0])
            A.pop(0)
    A.sort()
    B.sort()
    print(abs(A[(len(A)//2)]-B[(len(B)//2)]))
