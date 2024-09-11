# <<<<<<<<<< Project: Stone , paper , scissor >>>>>>>>>>
import random
item_list= ["Stone" , "paper" , "scissor"]
user_choice = str(input("Enter your choice (stone , paper , scissor): "))
pc_choice= random.choice(item_list)

print(f"User choice: ",user_choice,"  ,  Computer choice: ",pc_choice)

if user_choice == pc_choice :
    print("Both choice same.==>   Result: TIE.")
elif user_choice == "scissor":
    if pc_choice == "stone":
        print("Stone break the scissor. Win: Stone   ==> Computer")
    elif pc_choice == "paper":
        print("Scissor cut the paper. Win: Scissor  ==> User")    

elif user_choice == "paper":
    if pc_choice == "Stone":
        print("Paper cover the stone. Win: Paper   ==> User")
    elif pc_choice == "scissor":
        print("Scissor cut the paper. Win: Scissor   ==> Computer")  

elif user_choice == "stone":
    if pc_choice == "scissor":
        print("Stone break the scissor. Win: Stone   ==> User")
    elif pc_choice == "paper":
        print("Paper cover the stone. Win: Paper   ==> Computer")    

