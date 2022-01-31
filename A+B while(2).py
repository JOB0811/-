A,B = map(int,input().split())
while 0<A and B<10: # A와 B의 값의 범위를 지정해주는 while문을 생성함.
  try:
    print(A+B)
    A,B = map(int,input().split())
  except:
    break
