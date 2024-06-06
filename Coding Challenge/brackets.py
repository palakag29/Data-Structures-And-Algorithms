def isBalanced(s):
    while(len(s)!=0):
        s=s.replace('()','')
        s=s.replace('[]','')
        s=s.replace('{}','')
    if(len(s)==0):
        return True
    else:
        return False
    
braces = []
n = int(input())
for _ in range(n):
    brace = input("Enter the braces string: ")
    braces.append(brace)

# Output
for brace in braces:
    print(isBalanced(brace))