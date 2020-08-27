from tkinter import *
from selenium import webdriver
import time
import os


root = Tk()
root.title("macro")
root.geometry("100x75")

lable1 = Label(root, text="id")
lable1.grid(row=0, column=0)
ident = Entry(root, width = 20)
ident.grid(row=0, column=1)

lable2 = Label(root, text="pwd")
lable2.grid(row=1, column=0)
pwdent = Entry(root, width = 20)
pwdent.grid(row=1, column=1)

def macro():
    m_id = ident.get()
    m_pwd = pwdent.get()
    path = os.path.dirname(os.path.realpath(__file__)).replace("\\", "/")
    browser = webdriver.Chrome("{}/chromedriver.exe".format(path))
    browser.get("https://portal.kongju.ac.kr/")
    browser.switch_to_frame("mainFrame")
    browser.find_elements_by_id("username")[0].send_keys(m_id)
    browser.find_element_by_id("password").send_keys(m_pwd)
    browser.find_element_by_class_name("btn_login").click()
    browser.find_element_by_id("Image7").click()

btn1 = Button(root, text="실행", width = 5, command = macro)
btn1.grid(row=3, column=0)

root.mainloop()

