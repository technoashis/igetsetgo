class abc:
    def __init__(self, name1):
        self.name = name1
    
    def print_name(self):
        print (self.name)

obj = abc("Dipyaman")
obj1 = abc("Barusmita")

obj.print_name()
obj1.print_name()
