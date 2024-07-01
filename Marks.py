In [5]:
#Write a Python program to store marks scored for first test of subject 'Data Stru#Compute-
#1.The average score of the class.
#2.Highest score and lowest score of the class.
#3.Count of students who were absent for the test.
#4.Display marks with highest frequency.
def absents(lst1):
count=0
for i in lst1:
if i=='AB':
count=count+1
return count
def avg(lst1):
present=0
avg1=0.0
sum=0
for i in lst1:
if i!='AB':
sum=sum + int(i)
present=n-(absents(lst1))
print("The total marks= ", sum)
avg1=sum/present
return avg1
def highest(lst1):
high=0
j=0
lst2=[]
for i in lst1:
if i!='AB':
lst2.append(i)
for i in lst2:
j=int(i)
if (j>high):
high=j
return high

def lowest(lst1):
lst2=[]
low=highest(lst1)
for i in lst1:
if i!='AB':
lst2.append(i)
for i in lst2:
j=int(i)
if j<low:
low=j
return low
def frequency(lst1):
lst2=[]
lst3=[]
hgst=0
b=0
for i in lst1:
if i!='AB':
lst2.append(i)
for i in lst2:
a=0
for j in lst2:
if(i==j):
a=a+1
lst3.append(a)
hgst=highest(lst3)
for i in range(0,len(lst3)):
if(lst3[i]==hgst):
b=i
return lst2[b]


n=int(input("Enter the number of students in class= "))
marklist=[]
print("Enter the marks(enter 'AB' if the student was absent)= ")
for i in range(0,n):
mark=input()
marklist.append(mark)
print("The marklist is= " +str(marklist))
#menu
flag=1
while(flag==1):
print("MENU")
print("1. Average score of the class.")
print("2. Highest and Lowest score of the class.")
print("3. Count of students who were absent for the test.")
print("4. Marks with highest frequency.")
print("5. Exit.")
ch=int(input("Enter the choice= "))
if ch==1:
avg1=avg(marklist)
print("The average score of the class is= ",avg1 )
print("Do you want to continue(yes/no)= ")
a=input()
if a=='yes':
flag=1
else:
flag=0
print("Thanks for using the program")
elif ch==2:
big=highest(marklist)
small=lowest(marklist)
print("The highest score is= ",big)
print("The lowest score is= ",small)
print("Do you want to continue(yes/no)= ")
a=input()
if a=='yes':
flag=1
else:
flag=0
print("Thanks for using this program")
elif ch==3:
abs=absents(marklist)
print("The number of students absent for the test= ", abs)
print("Do you want to continue(yes/no)= ")
a=input()
if a=='yes':
flag=1
else:
flag=0
print("Thanks for using the program")
elif ch==4:
hgst1=frequency(marklist)

23
23
AB
26
25
AB
24
23
29
The marklist is= ['21', '23', '23', 'AB', '26', '25', 'AB', '24', '23', '
29']
MENU
1. Average score of the class.
2. Highest and Lowest score of the class.
3. Count of students who were absent for the test.
4. Marks with highest frequency.
5. Exit.
Enter the choice= 1
The total marks= 194
The average score of the class is= 24.25
Do you want to continue(yes/no)=
yes
MENU
1. Average score of the class.
2. Highest and Lowest score of the class.
3. Count of students who were absent for the test.
4. Marks with highest frequency.
5. Exit.
Enter the choice= 2
The highest score is= 29
The lowest score is= 21
Do you want to continue(yes/no)=
yes
MENU
1. Average score of the class.
2. Highest and Lowest score of the class.
3. Count of students who were absent for the test.
4. Marks with highest frequency.
5. Exit.
Enter the choice= 3
The number of students absent for the test= 2
Do you want to continue(yes/no)=
yes
MENU
1. Average score of the class.
2. Highest and Lowest score of the class.
hgst1=frequency(marklist)
print("The score with highest frequency is= " ,hgst1)
print("Do you want to continue(yes/no)= ")
a=input()
if a=='yes':
flag=1
else:
flag=0
print("Thanks for using this program")
elif ch==5:
flag=0
print("Thanks for using this program")
else:
print("Wrong choice")
assign2 http://localhost:8888/nbconvert/html/assign2.ipynb?d...
3 of 4 08/09/23, 20:05
3. Count of students who were absent for the test.
4. Marks with highest frequency.
5. Exit.
Enter the choice= 4
The score with highest frequency is= 23
Do you want to continue(yes/no)=
yes
MENU
1. Average score of the class.
2. Highest and Lowest score of the class.
3. Count of students who were absent for the test.
4. Marks with highest frequency.
5. Exit.
Enter the choice= 5
Thanks for using this program
In [ ]:
assign2 http://localhost:8888/nbconvert/html/assign2.ipynb?d...
4 of 4 08/09/23, 20:05