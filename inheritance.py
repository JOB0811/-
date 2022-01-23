class Person: #Person이라는 클래스 생성
  def __init__(self, name, age): #init에 name과 age의 매개를 줌.
    self.이름 = name
    self.나이 = age

  def say_hello(self, to_name):
    print("안녕! " + to_name + "  나는 " + self.이름)

  def introduce(self):
    print("내 이름은 " + self.이름 + "이고 " + str(self.나이) + "살이야")

class Police(Person): #Person에서 선언했던 __init__, say_hello, introduce를 그대로 이어받아서 사용할수 있음.
  def arrest(self, to_arrest):
    print("넌 체포됬다, ",to_arrest)

class Programmer(Person): #Person에서 선언했던 __init__, say_hello, introduce를 그대로 이어받아서 사용할수 있음.
  def program(self, to_program):
    print("다음엔 뭘 만들지? 아 이걸 만들까?" + to_program)

Wonbin = Person("원빈",25)
jenny = Police("제니",27)
michael = Programmer("마이클",29)

jenny.arrest("마이클")