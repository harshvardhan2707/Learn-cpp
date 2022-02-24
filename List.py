a =[1,2,[3,4,5,[6,7,8]],[9,10]]
def count(n) :
    counts = 0
    for j in range (len(n)):
        if type(n[j]) ==list :
            counts+=count (n[j])
        else:
            counts += n[j]
    return counts
print(count (a))