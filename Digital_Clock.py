import tkinter as tk
# tkinter = Module ,that use to make GUI (Graphical User Interface) of Python 
from time import strftime 
# we use time date as nmy own way 

# >>>>>>>>Create Root window , where we can display time
root = tk.Tk() 
# create root object in tkinter class 
root.title("Digital Clock")
# "Title" attribute of Root Object is assigned by "Digital clock" string


# >>>>>>Function define which update the time date ,and display in label 
def time():
    Time_clock = strftime('%H:%M:%S %p\n %D')
    # label object ar config module diye text attribute ar sahajje Time variable diye assign korte hobe 
    label.config(text=Time_clock)
    label.after(1000,time)
    # using after method ,call time() function 1000 milisec times 

# Label object create to design the label of digital clock insude root window
label = tk.Label(root, font=('calibri', 50, 'bold'), background='green', foreground='black')
# label meth k root window te pack korar jonno 
# pack method is a method of tkinter module that helps to pack the arrange the elements
label.pack(anchor='center') 

time()
root.mainloop()
# mainloop method tkinter module er , ja woot window k loop e rakhe er update korte thake , wait for a user input to terminate