fruit = ["사과","사과","바나나","바나나","딸기","키위","복숭아","복숭아","복숭아"]

d = {} # d = {"사과" : 1}

for f in fruit: # f(사과 -> 복숭아)까지 돌리는 반복문
  if f in d: # f라는 key가 d의 값에 포함되어있어?
    d[f] = d[f] + 1 #포함되어있다면 value를 하나 늘려줘
  else:
    d[f] = 1 # 그렇지 않다면 d[f] = key로 주고, value값을 1로 줘.

print(d) # d라는 dictionary를 출력해줘.