balance = 0

def deposit(D):
    global balance
    balance = balance + D
    print("Current amount in account is", balance)

def withdraw(W):
    global balance
    if balance - W >= 0:
        print("Withdrawal successful")
        balance = balance - W
        print("Current amount in account is", balance)
    else:
        print("You don't have sufficient amount in account.")
        balance = 0

flag = 1
while flag == 1:
    amount = input("Enter the amount ('D amount' for deposit, 'W amount' for withdrawal, 'Q' to quit): ")
    lst = amount.split()
    if lst[0] == 'D':
        deposit(int(lst[1]))
    elif lst[0] == 'W':
        withdraw(int(lst[1]))
    if amount == 'Q':
        print("Current amount in account is", balance)
        break
