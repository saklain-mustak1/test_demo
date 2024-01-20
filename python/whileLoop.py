

i=0
while True:
    print(i)
    i+=1
    if i==9:
        break

 # pop and clear list
my_list = [1,6,7,8,9,4,10,2,5]
print("delete list", my_list)
while len(my_list)>0:
    item = my_list.pop()
    print(item)

print(my_list)
