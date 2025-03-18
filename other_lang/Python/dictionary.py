# wap to add two dictionary values.
# wap to find highest 3 values of corresponding key in dicitionary.




# wap to remove empty tuple from a list of tuples.
# wap to calculate the product of all the numbers of a given tuples.
# wap to convert of string values to tuple of int value.
# wap to check a if a specified element is present in a tuple of tuple


dict1={'a':100,'b':200,'c':300}
dict2={'a':100,'b':200,'c':300}
dictt = {}
for i in dict1 :
	dictt[i]  = dict1[i] + dict2[i]

print(dictt)	


sd = {'a':100,'b':200,'c':300,'d':400,'e':500,'f':600}
ok = {}

j=0
x=[0,0,0]
for j in range(3):
	for i in sd :
		if sd[i] > x[j]:
				x[j] = sd[i]
			
		
print(x)		
