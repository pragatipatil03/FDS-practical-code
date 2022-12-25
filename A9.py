'''a) Addition of two matrices
   b) substraction of two matrices
   c) multiplication of two matrices
   d) transpose of a matrix '''

def matrix(m,n):
    a=[]
    for i in range(m):
        row=[]
        for j in range(n):
            inp=int(input(f"enter the a[{i}][{j}]: "))
            row.append(inp)
        a.append(row)
    return a

def add(A,B):
    sum=[]
    for i in range(len(A)):
        row=[]
        for j in range(len(A[0])):
            x=A[i][j]+B[i][j]
            row.append(x)
        sum.append(row)
    print("addition is; ",sum)

def sub(A,B):
    substract=[]
    for i in range(len(A)):
        row=[]
        for j in range(len(A[0])):
            sub=A[i][j]-B[i][j]
            row.append(sub)
        substract.append(row)
    print("substraction is: ",substract)

def mult(A,B):
    sum=0
    mult=[]
    for i in range(0,len(A)):
        row=[]
        for j in range(0,len(A[0])):
            for k in range(0,len(B)):
                sum+=A[i][k]*B[k][j]
            row.append(sum)
            sum=0
        mult.append(row)
    print("mu,tiplication is: ",mult)

def transpose(A):
    print("transpose is: ")
    for i in range(len(A)):
        row=[]
        for j in range(len(A)):
            row.append(A[j][i])
        print(row)


m=int(input("enter the no of row; "))
n=int(input("enter the no of colum: "))
print("enter the matrix A is: ")
A=matrix(m,n)
print(A)
m=int(input("enter the no of row; "))
n=int(input("enter the no of colum: "))
print("enter the matrix B is:")
B=matrix(m,n)
print(B)


while True:
    print("1) addition is: ")
    print("2) substraction is: ")
    print("3)multiplication is: ")
    ch=int(input("enter the choice:"))
    if ch==1:
        add(A,B)
    elif ch==2:
        sub(A,B)
    elif ch==3:
        mult(A,B)
    elif ch==4:
        transpose(A)
    else:
        print("default value")
