from tkinter import *
from selenium import webdriver
import time
import os


root = Tk()
root.title("classmacro")
root.geometry("250x130")

lable = Label(root, text="id")
lable.grid(row=0, column=0)
ident = Entry(root, width = 20, show='*')
ident.grid(row=0, column=1)

lable = Label(root, text="pwd")
lable.grid(row=1, column=0)
pwdent = Entry(root, width = 20, show='*')
pwdent.grid(row=1, column=1)

lable = Label(root, text="과목 1")
lable.grid(row=2, column=0)
subject1 = Entry(root, width = 20)
subject1.grid(row=2, column=1)
subject1_ = Entry(root, width = 10)
subject1_.grid(row=2, column=2)

lable = Label(root, text="과목 2")
lable.grid(row=3, column=0)
subject2 = Entry(root, width = 20)
subject2.grid(row=3, column=1)
subject2_ = Entry(root, width = 10)
subject2_.grid(row=3, column=2)

lable = Label(root, text="과목 3")
lable.grid(row=4, column=0)
subject3 = Entry(root, width = 20)
subject3.grid(row=4, column=1)
subject3_ = Entry(root, width = 10)
subject3_.grid(row=4, column=2)

def macro():
    subject = [subject1.get(),subject1_.get(),subject2.get(),subject2_.get(),subject3.get(),subject3_.get()]
    m_id = ident.get()
    m_pwd = pwdent.get()

    path = os.path.dirname(os.path.realpath(__file__)).replace("\\", "/")
    browser = webdriver.Chrome("{}/chromedriver.exe".format(path))
    browser.get("http://sugang.kongju.ac.kr/")
    browser.switch_to_frame("Main")
    browser.find_elements_by_id("id")[0].send_keys(m_id)
    browser.find_element_by_id("pwd").send_keys(m_pwd)
    browser.find_element_by_xpath("//*[@id='btn_login']").click()
    #사이트 실행 및 로그인

    browser.switch_to_frame("contentFrame")
    browser.switch_to_frame("topFrame")
    browser.find_element_by_xpath('//*[@id="cssmenu"]/ul/li[4]/a').send_keys('\n')
    #수강신청 탭

    browser.switch_to_window(browser.window_handles[0])
    browser.switch_to_frame("Main")
    browser.switch_to_frame("contentFrame")
    browser.switch_to_frame("mainFrame")
    for i in range(len(subject))[::2]:
        if(subject[i]):
            sub = browser.find_elements_by_id("gwamok")[0]
            ban = browser.find_elements_by_id("ban")[0]
            sub.clear()
            ban.clear()
            sub.send_keys(subject[i])
            ban.send_keys(subject[i+1])
            browser.execute_script("fastSave()")
            browser.find_element_by_xpath('/html/body/div[4]/div[3]/div/button/span').click()
        else:
            break
    #수강신청

btn1 = Button(root, text="실행", width = 5, command = macro)
btn1.grid(row=5, column=0)
root.mainloop()

