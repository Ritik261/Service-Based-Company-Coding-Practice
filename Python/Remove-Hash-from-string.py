# Remove # from string and append in front of the string

def hasRemove(arr):
    x = arr.count("#")
    arr = arr.replace("#","")
    return("#"*x + arr)

print("Enter String")
s = input()
out = hasRemove(s)
print("OutPut is" +" " +out)
