import os
import webbrowser
from tkinter import *
root = Tk()
#Atleast 4 Options
def Study():
    webbrowser.open("https://www.youtube.com/c/Freecodecamp")
def Books():
    webbrowser.open("https://www.pdfdrive.com/")
def Tp():
    webbrowser.open("https://onefinewallet.com/transcription-jobs-from-home/")
def Anime():
    webbrowser.open("https://9anime.vc")
def Clicky():
    #We can make a nice if else statement here, clicking more time will result in different responses
    LaBel = Label(root, text="It's just a button, Why did you click it?").pack() 
def Quit():
    ####FUNCTION TO CLOSE THE WINDOW ON ITSELF, MAYBE TAUGHT IN AUTOMATION, FOR THE FUTURE
    LAbel = Label(root, text="THIS WILL DO NOTHING FOR NOW. TO BE PROGRAMMED LATER...").pack() 
myLabel = Label(root, text="Choose one...", padx=5, pady=5).pack()
myButton1 = Button(root, text="Study Materials", fg="Blue", padx=10, pady=10, command=Study).pack()
myButton2 = Button(root, text="Books", fg="Blue", padx=10, pady=10, command=Books).pack()
myButton3 = Button(root, text="Transcription", fg="Blue", padx=10, pady=10, command=Tp).pack()
myButton4 = Button(root, text="Click me when you have nothing to do...", fg="Blue",padx=10, pady=10, command=Anime).pack()
myButton5 = Button(root, text="JUST A BUTTON", fg="Blue", padx=10, pady=10, command=Clicky).pack()
myButton6 = Button(root, text="Exit", fg="Blue", padx=10, pady=10, command=Quit).pack()
root.mainloop()
