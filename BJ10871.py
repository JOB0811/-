N,X = map(int,input().split())
B = list(map(int,input().split()))

for i in range(N):
  if B[i] < X:
    print(B[i], end=" ")