def deposit(num):
    global balance
    balance += num

def withdrawal(num):    
    global balance
    if balance >= num:
        balance -= num
    else:
        print("Not enough balance")

balance = 0

while True:
    print("Enter 'D amount' for deposit, 'W amount' for withdrawal, 'Q' to quit:")
    data = input().split()

    if data[0] == 'Q':
        break

    if data[0] == 'D':
        deposit(int(data[1]))

    elif data[0] == 'W':
        withdrawal(int(data[1]))

print("Final balance:", balance)

