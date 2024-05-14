class A:
    name = None
    def __init__(self,name) -> None:
        self.name = name
    def show(self):
        print(self.name)
            
class B():
    age = 10
class C(A,B):
    def __init__(self, name) -> None:
        A.__init__(name)
    def show(self):
        print(self.age)
obj = B("Rocky")
obj.show()
