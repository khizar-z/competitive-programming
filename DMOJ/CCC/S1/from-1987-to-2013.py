y = int(input())

def nextyear(year):
    while True:
        year+=1 
        a = list(str(year))
        s = set(a)
        if len(s) == len(a):
            return year
print(nextyear(y))