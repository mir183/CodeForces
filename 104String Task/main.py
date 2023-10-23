s=input("")
s=s.lower()
vowel="aeiouy"

for i in s:
    if i in vowel:
        s=s.replace(i,"")

for i in s:
    print("."+i, end="")



"""s=input("")
s=s.lower()  
vowels="aeiou"
result=""

for i in s:
    if i not in vowels:
        result+="."+i

print(result)
"""

