num=input()
ok=True
for i in num:
    if i not in ("14"):
        ok=False
        break

if(ok):
    print("YES")
else:
    print("NO")