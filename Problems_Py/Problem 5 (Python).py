num = int(input())
hudle = list()

for i in range(num):
    inp = int(input())
    hudle.insert(i,inp)

can = int(input())
hp = int(input())

cnt = 0

for i in range(num):
    temp = 1
    
    if hudle[i] > can:
        temp = hudle[i] - can
    
    if temp > hp:
        break
    else:
        hp = hp-temp
        print(hp,"   hweofijwe")
        cnt += 1
    
print(cnt)