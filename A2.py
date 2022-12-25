'''Experiment Number 2 : Write a python program to store marks stored in subject "Fundamentals of Data Structure" by
                         N students in the class. Write functions to compute following:
                         1. The average score of the class.
                         2. Highest score and lowest score of the class.
                         3. Count of students who were absent for the test.
                         4. Display mark with highest frequency.
'''
student_marks=[]
present_marks=[]
abs_marks=[]
def add_data():
    n=int(input("enter the no of student in class: "))
    print("A,a,-1 considered as absent marks")
    for i in range(n):
        marks=input(f"enter the no of marks with roll no {i+1}: ")
        student_marks.append(marks)
    for marks in student_marks:
        if marks in ('A','a','-1'):
            abs_marks.append(marks)
        else:
            present_marks.append(int(marks))

def avg_marks():
    sum=0
    n=0
    for marks in present_marks:
        sum+=marks
        n+=1
    print("enter the average marks of student: ",sum/n)

def min_max_marks():
    lowest=highest=present_marks[0]
    for marks in present_marks:
        if marks<lowest:
            lowest=marks
        if marks>highest:
            highest=marks
    print("highest marks is: ",highest)
    print("lowest marks is: ",lowest)

def highest_frq():
    mark=[]
    freq=[]
    for i in present_marks:
        if i not in mark:
            mark.append(i)
            freq.append(1)
        else:
            index=mark.index(i)
            freq[index]+=1
    max_marks=[]
    max=freq[0]
    for i in range(len(freq)):
        if freq[i]>max:
            max=freq[i]
    for i in range(len(freq)):
        if freq[i]==max:
            max_marks.append(mark[i])
    if len(max_marks)==1:
        print("highest frequency",max_marks[0])
    else:
        print("highest frequency", max_marks)

add_data()
while True:
    print("1. The average score of the class.")
    print(" 2. Highest score and lowest score of the class.")
    print("3. Count of students who were absent for the test.")
    print("4. Display mark with highest frequency.")
    ch = int(input("enter the choice: "))

    if ch == 1:
        avg_marks()
    elif ch == 2:
        min_max_marks()
    elif ch == 3:
        print("Count of students who were absent for the test.", len(abs_marks))
    elif ch == 4:
        highest_frq()
    else:
        print("invalid marks.....")




