class Person: #Person이라는 클래스 생성
  def __init__(self, name, age): #init에 name과 age의 매개를 줌.
    self.이름 = name
    self.나이 = age

  def say_hello(self, to_name):
    print("안녕! " + to_name + "  나는 " + self.이름)

  def introduce(self):
    print("내 이름은 " + self.이름 + "이고 " + str(self.나이) + "살이야")

Wonbin = Person("원빈", 25)
Wonbin.introduce()