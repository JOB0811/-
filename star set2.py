N = int(input()) # 반복횟수 T를 입력받음.
if 1<=N<=100: # N의 범위를 지정.
  for i in range(N):
    i = i+1
    print(" " * (N-i) + "*" * i) # N의 반복 횟수만큼 별을 찍음.