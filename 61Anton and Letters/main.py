setx=input("")
setlen=len(setx)
setx=setx.replace(',','').replace('{','').replace('}','').replace(' ','')

setx=set(setx)
leng=len(setx)

print(leng)