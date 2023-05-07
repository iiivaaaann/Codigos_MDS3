void wakamole() throws InterruptedException  {
 var driver = createWebDriver();
        driver.get("file:///Users/ivangarcialozano/Downloads/Whack-a-Mole/index.html");
        while (Integer.parseInt(driver.findElement(By.id("score")).getText()) < 10000) {
            List<WebElement> l = driver.findElements(By.cssSelector(".mole"));
            for (WebElement w : l) {
                w.click();
            }
        }
        Thread.sleep(10_000);
        driver.quit();
        }
