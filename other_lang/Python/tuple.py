# l = [1,2,'avc',4,5,6]

# print(l[2])

# l[2] = 'adc'
# print(l[2])

# t = (1,2,'avc')
# print(t[2])

# print(2 in l )

# print(2 not in l )
# print(l[2:5] )


# wap to get a list sorted in increasing order by the last element in each tuple 
# from a given list of non empty tuple.
'''
l = [(2,3),(4,1),(3,2)]
sizee = len(l)
p = [0,0,0]
temp = [0]
for i in range(3) :
	
	p[i] = list(l[i])
	temp = p[i][0] 
	p[i][0] = p[i][1]
	p[i][1] = temp
for i in range(2) :
	if p[i][0] > p[i+1][0] : 
		temp = p[i]
		p[i] = p[i+1]
		p[i+1] = temp
			
for i in range(3) :
	
	# p[i] = list(l[i])
	temp = p[i][0] 
	p[i][0] = p[i][1]
	p[i][1] = temp	
print(p)
'''  

# wap to print specified list after removing 0,4,5 element .

# l1 = input().split()
# l1.pop(0)
# l1.pop(3)
# l1.pop(3)
# print(l1)
