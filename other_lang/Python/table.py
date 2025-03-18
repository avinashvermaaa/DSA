## PARAMETERIZED FUNCTION


def print_table_of(num):
    for i in range(1,11):
        print(num,' x ', i, ' = ',num*i)


def main():
    while True:
        input_num = int(input("Please Enter A Number To Print Its Multiplication Table: "))
        if input_num in range(2,21):
            for table_num in range(2,input_num + 1):
                print(f"\nTable Of {table_num}")
                print_table_of(table_num)

        else:
            print("Please Enter Table In range Of 2 to 20 Only.")

        print("")



main()
