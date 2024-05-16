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
print(2 + 2 * 3)
obj = A(10)
obj.show()
print(A.__dict__) # show the property of hte class