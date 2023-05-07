void ejerciciodedos() throws InterruptedException {
        var driver = createWebDriver();
        driver.get("file:///Users/ivangarcialozano/Downloads/10fastfingers-2023/index.html");
        WebElement t = driver.findElement(By.id("textDisplay"));
        driver.findElement(By.id("textInput")).sendKeys(t.getText() + " ");
        Thread.sleep(10_000);
        driver.quit();


    }