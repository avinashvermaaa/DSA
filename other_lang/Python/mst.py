a,b,c = input().split()

x = int(a)
y = int(b)
z = int(c) 

if x > y and x >z :
	print("The greatest of three input number is ",x)
elif y > x and y > z :
	print("The greatest of three input number is ",y) 
	
else :
	print("The greatest of three input number is ",z)	
	
	