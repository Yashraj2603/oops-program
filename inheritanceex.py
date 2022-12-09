class person:
    def __init__(self,fname,lname):
        self.firstname=fname
        self.lastname=lname
    def printname(self):
        print(self.firstname,self.lastname)
        
class Student(person):
    pass

s1=Student("yash","raj")
s1.printname()
