class A:
    def show(a):
        print("given", a)
    def show(a,b):
        print("given", a,b)
    def show(a,b,c):
        print("given", a,b,c)

obj = A()
obj.show(10)
obj.show(10,20)
obj.show(10,20,30)