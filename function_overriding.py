class A:
    def show(a):
        print("given", a)
class B(A):
    def show(a):
        print("given",a*20)

obj = B()
obj.show(10)