num = int(input("Enter a number : "))

revNum =0
while (num>0):
    lastDigit = num%10
    revNum = revNum * 10 +lastDigit
    num //= 10

print(revNum)