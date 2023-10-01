n=int(input())
lst = []
for x in range(n):
    x = input()
    lst.append(x)

sum=0
for i in lst:
    if i=='Tetrahedron' in lst:
        sum=sum+4
    if i=='Cube' in lst:
        sum=sum+6
    if i=='Octahedron' in lst:
        sum=sum+8
    if i=='Dodecahedron' in lst:
        sum=sum+12
    if i=='Icosahedron' in lst:
        sum=sum+20


print(sum)