T = int(input()) # 반복횟수 T를 입력받음.

for i in range(T): # 반복문으로 입력받은 T의 범위에 있을시, I의 횟수를 0부터 반복
  A,B = map(int,input().split()) # 정수형의 변수 A,B를 공백을 두고 입력
  num = A+B # A와 B의 합을 가지는 변수를 저장
  print("Case #%d: %d + %s = %d"%(i+1,A,B,num)) # i+1과 A와 B의 값을 T의 횟수 만큼 반복 출력