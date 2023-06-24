from tkinter import *


def submit():
    gender = gender_var.get()
    indian = indian_var.get()
    print("Gender:", gender)
    print("Indian or Not:", indian)


root = Tk()
root.title("Radio Buttons Example")
gender_var = StringVar()
indian_var = StringVar()
lable = Label(root, text="Gender:").pack()
radbtn = Radiobutton(root, text="Male", variable=gender_var, value="Male").pack()
radbtn1 = Radiobutton(root, text="Female", variable=gender_var, value="Female").pack()
radbtn2 = Radiobutton(root, text="Other", variable=gender_var, value="Other").pack()
label = Label(root, text="Indian or Not:").pack()
indradi = Radiobutton(root, text="Yes", variable=indian_var, value="Yes").pack()
indradi = Radiobutton(root, text="No", variable=indian_var, value="No").pack()
submit = Button(root, text="Submit", command=submit).pack()
root.mainloop()
