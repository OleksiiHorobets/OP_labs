str = input("Enter string: ")
for i in range(0, len(str)):
    if str.count(str[i]) == 1:
        print("Unique char index: ", i)