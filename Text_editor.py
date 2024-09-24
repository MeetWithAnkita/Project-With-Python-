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
    