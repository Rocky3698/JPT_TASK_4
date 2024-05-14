class A:
    def __init__(self) -> None:
        print("from class A")
    
class B(A):
    def __init__(self) -> None:
        super().__init__()
        print("from class B")

class C(B):
    def __init__(self) -> None:
        super().__init__()
        print("from class C")
    

obj = C()

