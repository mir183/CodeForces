s=input("")
s=s.lower()
vowel="aeiou"

for i in s:
    if i in vowel:
        s=s.replace(i,"")

for i in s:
    print("."+i, end="")