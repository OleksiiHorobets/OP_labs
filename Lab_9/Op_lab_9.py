def isUniqueCheck(str, index):
    isUnique = True
    i = 0
    while i<len(str) and isUnique:
        if str[i] == str[index] and i != index:
            isUnique = False
        i+=1
    return isUnique
            

str = input("Enter string: ")
for i in range(0, len(str)):
    if isUniqueCheck(str, i):
        print("Unique char index: ", i)