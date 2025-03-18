

def calculate_area():
    pie = 22/7
    for i in range(10):
        radius = float(input("Enter the radius of the circle: "))
        area = pie * radius**2
        print("The area of the circle with radius", radius, "is", area)
        print("")

calculate_area()



## PARAMETERIZED FUNCTION
def calculate_area(radius):
    pie = 22/7
    area = pie * radius**2
    return area

for i in range(10):
    radius = float(input("Enter the radius of the circle: "))
    area = calculate_area(radius)
    print("The area of the circle with radius", radius, "is", area)
