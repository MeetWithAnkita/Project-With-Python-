# <<<<<<<<<< Project : Rent Calculation >>>>>>>>>>

person= int(input("Enter the no of person live in room? =>"))
room_rent= int(input("Per Month Room Rent? =>"))
E_unit= int(input("Spend Unit in one month? =>"))
E_Unit_Cost= int(input("Per unit electric cost? =>"))
food= int(input("Odered food total charge? =>"))

electric= int(E_unit * E_Unit_Cost)
pay_person= (room_rent+ electric+ food)//person

print(">>>>>>>>>>*<<<<<<<<<<")
print("Each person have to pay :",pay_person)