class A:
    name = None
    def __init__(self,name) -> None:
        self.name = name
    def show(self):
        print(self.name)
            
class B(A):
    def __init__(self, name) -> None:
        super().__init__(name)

obj = B("Rocky")
obj.show()
