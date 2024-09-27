import tkinter as tk
from tkinter import filedialog, messagebox

# function create which helps to delete text-editor box when create a new file
# 1.0 means 1st letter of 1st sentence
# tk.END means  end of paragraph
def new_file():
    text.delete(1.0, tk.END)

#create function which helps to open a already created file
# filedialoge helps to catch the file path and open the file in text-editor

def open_file():
    file_path = filedialog.askopenfilename(defaultextension=".txt", filetypes=[("Text Files","*.txt")])
    if file_path :
        with open(file_path,'r') as file : #if file is not empty ,then open it in read mode and store the context in insert box 
            text.delete(1.0, tk.END)
            text.insert(tk.END, file.read())

# function to save the file ...colect the file_path  from filedialog and save the content of text_box
def save_file():
    file_path = filedialog.asksaveasfilename(defaultextension=".txt",filetypes=[("Text Files","*.txt")])
    if file_path :
        with open(file_path,'w') as file :
            file.write(text.get(1.0, tk.END))
            messagebox.showinfo("Info","File saves succesfully!!")

# create root window 

