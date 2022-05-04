import pyautogui as auto
from time import sleep

text = 'salam dari binjai' 

words = text.split()
for word in words:
    auto.write(word)
    auto.press('enter')
    sleep(8)