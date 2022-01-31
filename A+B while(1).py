A,B = map(int,input().split())
while 0<A and B<10: # A와 B의 값의 범위를 지정해주는 while문을 생성함.
  sum = A+B # A+B의 값을 저장해주는 변수 생성.
  if sum != 0: # sum의 값이 0이 아니라면, sum을 다시 입력을 받고 출력해주고, sum이 0이라면, While문을 멈추는 조건문을 작성함.
    print(sum)
    A,B = map(int,input().split())
    continue
  if sum == 0:
    break