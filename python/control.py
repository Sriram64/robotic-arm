from tkinter import *
import _serial as main

root = Tk()
root.title("win")
root.geometry("300x300")

# sliders for controlling the robot
scale = Scale(root, from_=0, to=180, orient=HORIZONTAL) 
sc2 = Scale(root, from_=0, to=100, orient=HORIZONTAL)
sc3 = Scale(root, from_=0, to=100, orient=HORIZONTAL)
sc4 = Scale(root, from_=0, to=100, orient=HORIZONTAL)

scale.pack()
sc2.pack()
sc3.pack()
sc4.pack()


def r_val():
    x1 = scale.get()
    x2 = sc2.get()
    x3 = sc3.get()
    x4 = sc4.get()
    
    temp = [x1, x2, x3, x4]

    x = ":".join(str(tmp) for tmp in temp) # packing the values from the sliders to a string

    main.write(str(x)) # sending values to arduino 
    
btn = Button(root, text="write", command=r_val).pack() # button to write the changes ( move the servos )

root.mainloop()
