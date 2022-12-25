'''Experiment No. 1 : In a second year computer engineering class, group A students play cricket, group B students play
                   badminton and group C students play football.
                   Write a python program using functions to compute following:
                   a) List of students who play both cricket and badminton.
                   b) List of students who play either cricket or badminton but not both.
                   c) Number of students who play neither cricket nor badminton.
                   d) Number of students who play cricket and football but not badminton.
(NOTE : While realising the group, duplicate entries should be avoided. Do not use SET built-in functions)'''
group_a=[]
group_b=[]
group_c=[]
def cricket():
    n=int(input("enter the no. of student who want to play cricket: "))
    for i in range(n):
        roll_no=int(input("enter the roll no. of student: "))
        group_a.append(roll_no)
    print("list of student who wants to play cricket: ",group_a)
cricket()
def badminton():
    n1=int(input("enter the no. of student who wants to play badminton: "))
    for i in range(n1):
        roll_no=int(input("enter the roll no: "))
        group_b.append(roll_no)
    print("list of student who wants to play badminton: ",group_b)
badminton()
def football():
    n2=int(input("enter the no of student who wnts to play football: "))
    for i in range(n2):
        roll_no=int(input("enter the roll no: "))
        group_c.append(roll_no)
    print("list of student who wants to play football: ",group_c)
football()
list1=[]
def intersection():
    for i in group_a:
        if i in group_b:
            list1.append(i)
    print("List of students who play both cricket and badminton.",list1)
def union():
    list2=[]
    list3=[]
    list3=list1.copy()
    for i in group_a+group_b:
        if i not in list3:
            list2.append(i)
    print("List of students who play either cricket or badminton but not both.",list2)
def list():
    list4=[]
    for i in group_c:
        if i not in group_a+group_b:
            list4.append(i)
    print(" Number of students who play neither cricket nor badminton.",list4)
    print(" Number of students who play neither cricket nor badminton.",len(list4))
def lists():
    list5=[]
    for i in group_a+group_c:
        if i not in group_b:
            list5.append(i)
    list6=[]
    for i in list5:
        if i not in list6:
            list6.append(i)
    print("Number of students who play cricket and football but not badminton.",list6)
    print("Number of students who play cricket and football but not badminton.",len(list6))
while True:
    print("1) List of students who play both cricket and badminton.")
    print("2) List of students who play either cricket or badminton but not both.")
    print("3) Number of students who play neither cricket nor badminton.")
    print("4) Number of students who play cricket and football but not badminton.")
    ch=int(input("enter your choice: "))
    if ch==1:
        intersection()
    elif ch==2:
        union()
    elif ch==3:
        list()
    elif ch==4:
        lists()
    else:
        print("invalid....")

