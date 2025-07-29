
string1=input()
cpy=string1[::-1]
lst=list(cpy)
found=False

for i  in range(0,len(lst),1):
    if(lst[i]=='0'):
        if(found):
            print(lst[i],end="")
    else:
        print(lst[i],end="")
        found=True
print()
if(string1==cpy):
    print("YES")
else:
    print("NO")   

