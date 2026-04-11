lst=[1,2,4,0,5,0,0,7,0,8]



for i in lst:
    if i==0:

        lst.remove(i)
        lst.append(i)

print(lst)
