from tkinter import *
import math
# this function work when click a number show in box
def btn_Click(number):
    global value #click value store in "value" named global variable
    value = value + str(number) #convert this value in string format and store in this global variablr
    data.set(value) #display in text box 

def btn_clear():
    global value    
    value=""
    data.set("")

# Equal button function for calculating the result
def btn_equal():
    global value
    try:
        # Replace % symbol for percentage calculation
        if '%' in value:
            value = value.replace('%', '/100')  # Replace '%' with division by 100
        result = str(eval(value))  # Evaluate the expression
        data.set(result)
        value = result  # Update the value to the result for further operations
    except Exception as e:
        data.set("Error")  # Display error if any exception occurs
        value = ""

# Function for square root
def btn_root():
    global value
    try:
        # Extract the number from the value and calculate the square root
        if value:
            number = float(value)  # Convert current value to float
            result = str(math.sqrt(number))  # Calculate the square root
            data.set(result)
            value = result
    except Exception as e:
        data.set("Error")
        value = ""

  
          

root = Tk()  # main window of this application is root 
root.title("My Calculator")   #title of this window 
root.geometry("450x380+500+200")  #width(pixel) x hight(pixel)  + left + top 
# posiion of window in screen , 500pixels from  left of the screen and 200 pixels from top of the screen 
value=""  #value is string o define have to pass null by this  way
data= StringVar()  #data is text box of calculator 
display = Entry(root,bd=29,justify= "right",textvariable=data,bg="powder blue",font=("ariel",20),width=25)
display.grid(row=0,columnspan=5)



# button maiking >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
# row 1
# command=lambda:btn_Click(7)
# in GUI , in tkinter , when we want to call a funtion using comman by argument 
# must have to use "lambda:" function
btn7= Button(root,text="7",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=lambda:btn_Click(7))
btn7.grid(row=1,column=0)

btn8= Button(root,text="8",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=lambda:btn_Click(8))
btn8.grid(row=1,column=1)

btn9= Button(root,text="9",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=lambda:btn_Click(9))
btn9.grid(row=1,column=2)

btnadd= Button(root,text="+",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=lambda:btn_Click("+"))
btnadd.grid(row=1,column=3)

btn_c= Button(root,text="c",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=btn_clear)
btn_c.grid(row=1,column=4)

# row 2
btn4= Button(root,text="4",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=lambda:btn_Click(4))
btn4.grid(row=2,column=0)

btn5= Button(root,text="5",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=lambda:btn_Click(5))
btn5.grid(row=2,column=1)

btn6= Button(root,text="6",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=lambda:btn_Click(6))
btn6.grid(row=2,column=2)

btnsub= Button(root,text="-",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=lambda:btn_Click("-"))
btnsub.grid(row=2,column=3)

btn_percent= Button(root,text="%",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=lambda:btn_Click("%"))
btn_percent.grid(row=2,column=4)

# row3
btn1= Button(root,text="1",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=lambda:btn_Click(1))
btn1.grid(row=3,column=0)

btn2= Button(root,text="2",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=lambda:btn_Click(2))
btn2.grid(row=3,column=1)

btn3= Button(root,text="3",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=lambda:btn_Click(3))
btn3.grid(row=3,column=2)

btnmul= Button(root,text="*",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=lambda:btn_Click("*"))
btnmul.grid(row=3,column=3)

btn_power= Button(root,text="^",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=lambda:btn_Click("**"))
btn_power.grid(row=3,column=4)

# row 4
btn0= Button(root,text="0",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=lambda:btn_Click(0))
btn0.grid(row=4,column=0)

btnpoint= Button(root,text=".",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=lambda:btn_Click("."))
btnpoint.grid(row=4,column=1)

btn_root= Button(root,text="√",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=lambda:btn_Click("√"))
btn_root.grid(row=4,column=2)

btndiv= Button(root,text="/",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=lambda:btn_Click("/"))
btndiv.grid(row=4,column=3)

btnequl= Button(root,text="=",font=("ariel",12,"bold"),bd=12,height=2,width=6,command=btn_equal)
btnequl.grid(row=4,column=4)


# function of button >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>



root.mainloop()