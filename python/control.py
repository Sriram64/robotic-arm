from tkinter import *
import _serial as main

root = Tk()
root.title("win")
root.geometry("300x300")

scale = Scale(root, from_=0, to=180, orient=HORIZONTAL)
scale.pack()

def r_val():
    x = scale.get()

    main.write(str(x))
    
btn = Button(root, text="write", command=r_val).pack()

root.mainloop()