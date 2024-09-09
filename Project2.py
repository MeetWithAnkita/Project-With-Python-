person= input("Enter the no of person live in room? =>")
room_rent= input("Per Month Room Rent? =>")
E_unit= input("Spend Unit in one month? =>")
E_Unit_Cost= input("Per unit electric cost? =>")
food= input("Odered food total charge? =>")

electric= E_unit*E_Unit_Cost
pay_person= (room_rent+ electric+ food)//person

print("Each person have to pay :",pay_person)