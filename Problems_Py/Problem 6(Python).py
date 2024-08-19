M = int(input())
A,B = map(int,input().split())


if B + M > 60:
    A += (B + M) // 60
    B += M - (B + M) // 60 * 60
else:
    B += M

if B - 1 < 0:
    A-=1
    B += 60
else : B-=1

if A > 23:
    A -= A - A // 24 * 24
    

print("%02d시 %02d분"%(A,B))