class A:
    x = 0 ## this a public encapsulation, by using __variable name make it private and only can accessable from the same class. _variable name makes it protected.
    def __init__(self,x) -> None: #works like a constructor
        self.x=x
        print("constructor")

    # starting a method by __ is called dunder method
    # frequently used methods are str,init,del etc

print("hello")

obj = A(5) # as python sysntex doesn't support data type for declare variable we should declare obj like this
