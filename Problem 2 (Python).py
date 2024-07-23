b = str(input())
a = int(input())

for i in range(len(b)):
    if i==a-1:print("T",end='')
    else : print(b[i],end='')