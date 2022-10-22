"""Calulator --- Adding (List Version)"""
"""NOT A GOOD VERSION, USING A GLOBAL VARIABLE IS RECOMMENDED"""

from tkinter import *

root = Tk()
root.title("Simple Calculator")

e = Entry(root, width=35, borderwidth=5)
e.grid(row=0, column=0, columnspan=3)
#e.insert(0, " ")

L1=[] 
i = len(L1)-1                                                              #Saving the value of the previous value in a list make this a lot easier...

def Click(num):
    #e.delete(0, END)
    current = e.get()
    e.delete(0, END)
    e.insert(0, str(current) + str(num))
    
def Clear():
    e.delete(0, END)
    
def Adding():
    temp1 = e.get()
    L1.insert(0, temp1)
    e.delete(0, END)
    return L1
    
def Result():
    temp2 = e.get()
    e.delete(0, END)
    ans = int(L1[i]) + int(temp2)
    myLabel = Label(root, text="The Answer is: " + str(ans))
    myLabel.grid(row=0, column=0)
      
#Button Structures
Button_1 = Button(root, text="1", padx=20, pady=15, command=lambda: Click(1))
Button_2 = Button(root, text="2", padx=20, pady=15, command=lambda: Click(2))
Button_3 = Button(root, text="3", padx=20, pady=15, command=lambda: Click(3))
Button_4 = Button(root, text="4", padx=20, pady=15, command=lambda: Click(4))
Button_5 = Button(root, text="5", padx=20, pady=15, command=lambda: Click(5))
Button_6 = Button(root, text="6", padx=20, pady=15, command=lambda: Click(6))
Button_7 = Button(root, text="7", padx=20, pady=15, command=lambda: Click(7))
Button_8 = Button(root, text="8", padx=20, pady=15, command=lambda: Click(8))
Button_9 = Button(root, text="9", padx=20, pady=15, command=lambda: Click(9))
Button_0 = Button(root, text="0", padx=20, pady=15, command=lambda: Click(0))

Button_clear = Button(root, text="C", padx=20, pady=15, command=Clear)
Button_sum = Button(root, text="+", padx=55, pady=15, command=Adding)
Button_result = Button(root, text="=", padx=55, pady=15, command=Result)

#Put the Buttons on the screen
Button_1.grid(row=3,column=0)
Button_2.grid(row=3,column=1)
Button_3.grid(row=3,column=2)

Button_4.grid(row=2,column=0)
Button_5.grid(row=2,column=1)
Button_6.grid(row=2,column=2)

Button_7.grid(row=1,column=0)
Button_8.grid(row=1,column=1)
Button_9.grid(row=1,column=2)

Button_0.grid(row=4,column=0)

Button_clear.grid(row=5,column=0)
Button_sum.grid(row=4,column=1,columnspan=2)
Button_result.grid(row=5,column=1,columnspan=2)

#End The looping mechanism
root.mainloop()
