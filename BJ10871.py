N,X = map(int,input().split()) # N과 X라는 변수에 공백을 두고 정수를 한개씩 입력 받음.
seq = list(map(int,input().split())) # 규칙성 수열을 만들기 위해 seq라는 list를 생성해 공백을 두고 변수 입력을 받음.

for i in range(N): # i가 0~N의 범위를 가지는 for문을 작성
  if seq[i] < X: # list인 seq[i]는 0~N 범위의 리스트이므로, < X 조건일 경우 X보다 작은 값을 출력하는 조건문을 작성함.
    print(seq[i], end=" ")