from tkinter import *
root = Tk()  # main window of this application is root 
root.title("My Calculator")   #title of this window 
root.geometry("450x380+500+200")  #width(pixel) x hight(pixel)  + left + top 
# posiion of window in screen , 500pixels from  left of the screen and 200 pixels from top of the screen 
data= StringVar()
display = Entry(root,bd=29,justify= "right",textvariable=data,bg="powder blue",font=("ariel",20),width=25)
display.grid(row=0,columnspan=5)

# button maiking
# row 1
btn7= Button(root,text="7",font=("ariel",12,"bold"),bd=12,height=2,width=6)
btn7.grid(row=1,column=0)

btn8= Button(root,text="8",font=("ariel",12,"bold"),bd=12,height=2,width=6)
btn8.grid(row=1,column=1)

btn9= Button(root,text="9",font=("ariel",12,"bold"),bd=12,height=2,width=6)
btn9.grid(row=1,column=2)

btnadd= Button(root,text="+",font=("ariel",12,"bold"),bd=12,height=2,width=6)
btnadd.grid(row=1,column=3)

btn_c= Button(root,text="c",font=("ariel",12,"bold"),bd=12,height=2,width=6)
btn_c.grid(row=1,column=4)

# row 2
btn4= Button(root,text="4",font=("ariel",12,"bold"),bd=12,height=2,width=6)
btn4.grid(row=2,column=0)

btn5= Button(root,text="5",font=("ariel",12,"bold"),bd=12,height=2,width=6)
btn5.grid(row=2,column=1)

btn6= Button(root,text="6",font=("ariel",12,"bold"),bd=12,height=2,width=6)
btn6.grid(row=2,column=2)

btnsub= Button(root,text="-",font=("ariel",12,"bold"),bd=12,height=2,width=6)
btnsub.grid(row=2,column=3)

# row3
btn1= Button(root,text="1",font=("ariel",12,"bold"),bd=12,height=2,width=6)
btn1.grid(row=3,column=0)

btn2= Button(root,text="2",font=("ariel",12,"bold"),bd=12,height=2,width=6)
btn2.grid(row=3,column=1)

btn3= Button(root,text="3",font=("ariel",12,"bold"),bd=12,height=2,width=6)
btn3.grid(row=3,column=2)

btnmul= Button(root,text="*",font=("ariel",12,"bold"),bd=12,height=2,width=6)
btnmul.grid(row=3,column=3)

# row 4
btn0= Button(root,text="0",font=("ariel",12,"bold"),bd=12,height=2,width=6)
btn0.grid(row=4,column=0)

btnpoint= Button(root,text=".",font=("ariel",12,"bold"),bd=12,height=2,width=6)
btnpoint.grid(row=4,column=1)

btnequl= Button(root,text="=",font=("ariel",12,"bold"),bd=12,height=2,width=6)
btnequl.grid(row=4,column=2)

btndiv= Button(root,text="/",font=("ariel",12,"bold"),bd=12,height=2,width=6)
btndiv.grid(row=4,column=3)



root.mainloop()

