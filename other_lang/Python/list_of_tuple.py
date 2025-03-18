
l = [(2,3),(4,1),(3,2)]
sizee = len(l)
p = [0,0,0]
temp = [0]

for i in range(3) :
	
	p[i] = list(l[i])

	
for i in range(2) :
	if p[i][1] > p[i+1][1] : 
		temp = p[i]
		p[i] = p[i+1]
		p[i+1] = temp
				
print(p)
