class A:
    val=0
    def __init__(self,val) -> None:
        self.val=val
    def show(self):
        print(self.val)
def msg(self): # outside method 
    print("hello")
A.msg =msg
A.val=10

obj = A()
obj.dec()
print(A.__dict__) # show the property of hte class