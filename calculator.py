from tkinter import *
import math

# this function works when a number is clicked and displayed in the box
def btn_Click(number):
    global value
    value = value + str(number)  # append the clicked number to the value
    data.set(value)  # display it in the text box

# clear button function
def btn_clear():
    global value
    value = ""
    data.set("")

# equal button function for calculating the result
# def btn_equal():
#     global value
#     try:
#         if '√' in value:  # Check if the square root symbol is in the expression
#             # value = value.replace('√', '')  # Replace it with math.sqrt()
#             array = value.split('√')
#             value = math.pow(float(array[1]), 1/float(array[0]))
#             # math.pow()

#             # value = str(math.sqrt(float(value)))
#         if '%' in value:
#             value = value.replace('%', '/100')  # replace '%' with division by 100
#         result = str(eval(value))  # Evaluate the expression
#         data.set(result)
#         value = result  # update the value to the result for further operations
#     except Exception as e:
#         data.set("Error")  # display error if any exception occurs
#         value = ""

def btn_equal():
    global value
    try:
        if '√' in value:  # Check if the square root symbol is in the expression
            array = value.split('√')
            return_value = math.pow(float(array[1]), 1/float(array[0]))

        if '%' in value:
            return_value = value.replace('%', '/100')  # replace '%' with division by 100
        result = str(eval(str(return_value)))  # Evaluate the expression
        data.set(result)
        return_value = result  # update the value to the result for further operations
    except Exception as e:
        data.set("Error")  # display error if any exception occurs
        return_value = ""
    except Exception as e:
        data.set("Error")  # display error if any exception occurs
        value = ""

# function for square root
def calculate_root():
    global value
    try:
        if value == "":  # if no value, assume it's the square root of the next input
            value = "√"
            data.set(value)
        else:
            number = float(value)  # if there's a value, calculate square root of it
            if number >= 0:
                result = str(math.sqrt(number))
                data.set(result)
                value = result
            else:
                data.set("Error")  # Display error for negative square root
                value = ""
    except Exception as e:
        data.set("Error")
        value = ""

root = Tk()  # main window of this application is root
root.title("My Calculator")  # title of the window
root.geometry("450x380+500+200")  # width x height + left + top (position of window)
value = ""  # initialize value as an empty string
data = StringVar()  # data is the text box of the calculator
display = Entry(root, bd=29, justify="right", textvariable=data, bg="powder blue", font=("ariel", 20), width=25)
display.grid(row=0, columnspan=5)

# Buttons creation

# row 1
btn7 = Button(root, text="7", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=lambda: btn_Click(7))
btn7.grid(row=1, column=0)

btn8 = Button(root, text="8", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=lambda: btn_Click(8))
btn8.grid(row=1, column=1)

btn9 = Button(root, text="9", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=lambda: btn_Click(9))
btn9.grid(row=1, column=2)

btnadd = Button(root, text="+", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=lambda: btn_Click("+"))
btnadd.grid(row=1, column=3)

btn_c = Button(root, text="C", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=btn_clear)
btn_c.grid(row=1, column=4)

# row 2
btn4 = Button(root, text="4", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=lambda: btn_Click(4))
btn4.grid(row=2, column=0)

btn5 = Button(root, text="5", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=lambda: btn_Click(5))
btn5.grid(row=2, column=1)

btn6 = Button(root, text="6", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=lambda: btn_Click(6))
btn6.grid(row=2, column=2)

btnsub = Button(root, text="-", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=lambda: btn_Click("-"))
btnsub.grid(row=2, column=3)

btn_percent = Button(root, text="%", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=lambda: btn_Click("%"))
btn_percent.grid(row=2, column=4)

# row 3
btn1 = Button(root, text="1", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=lambda: btn_Click(1))
btn1.grid(row=3, column=0)

btn2 = Button(root, text="2", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=lambda: btn_Click(2))
btn2.grid(row=3, column=1)

btn3 = Button(root, text="3", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=lambda: btn_Click(3))
btn3.grid(row=3, column=2)

btnmul = Button(root, text="*", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=lambda: btn_Click("*"))
btnmul.grid(row=3, column=3)

btn_power = Button(root, text="^", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=lambda: btn_Click("**"))
btn_power.grid(row=3, column=4)

# row 4
btn0 = Button(root, text="0", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=lambda: btn_Click(0))
btn0.grid(row=4, column=0)

btnpoint = Button(root, text=".", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=lambda: btn_Click("."))
btnpoint.grid(row=4, column=1)

btn_sqrt = Button(root, text="√", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=lambda: btn_Click('√'))
btn_sqrt.grid(row=4, column=2)

btndiv = Button(root, text="/", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=lambda: btn_Click("/"))
btndiv.grid(row=4, column=3)

btnequl = Button(root, text="=", font=("ariel", 12, "bold"), bd=12, height=2, width=6, command=btn_equal)
btnequl.grid(row=4, column=4)

# main loop to run the application
root.mainloop()

