from selenium import webdriver
from selenium.webdriver.common.by import By
import re

driver = webdriver.Chrome()
p=re.compile('\\bURJC\\b')
links=set()
vis=set()


def do_things(link):
    aux=0
    driver.get(link)
    html_eles = driver.find_elements(By.CLASS_NAME,"card")
    for ele in html_eles:
        for i in ele.find_elements(By.TAG_NAME, 'a'):
            tmp=i.get_attribute('href')
            if tmp not in vis:
                vis.add(tmp)
                links.add(tmp)
    posts = driver.find_elements(By.CLASS_NAME, "article-post")
    texts=[]
    for post in posts:
        texts.append(post.text)
        aux+=len(p.findall(post.text))
    return aux

if name == 'main':
    cnt=0
    links.add("https://r2-ctf-vulnerable.numa.host/")
    while len(links)!=0:
        link=links.pop()
        cnt+=do_things(link)
    print(cnt)
    driver.implicitly_wait(10)
    driver.close()