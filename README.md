# raspberry RGB——LED
线上交作业的我也很无奈

欢迎来围观！！！

# 使用方法

  - RGB LED X1
![image](https://github.com/caikunyou/LED/blob/master/led.png)
  - raspberry 2B X1
![image]（https://github.com/caikunyou/LED/blob/master/GPIO.png）

* LED_R---------pin36           *
* LED_G---------pin38           *
* LED_B---------pin40           *
* GND-----------pin6            *


代码（実行方法）
```
$ make
$ sudo insmod myled.ko
$ sudo chmod 666 /dev/myled0
$ sudo echo R > /dev/myled0
$ sudo echo G > /dev/myled0
$ sudo echo B > /dev/myled0
$ sudo echo C > /dev/myled0
$ sudo rmmod myled.ko
```
说明：
LED RED红色的时候 

LED 赤色の時が
```
$ sudo echo R > /dev/myled0
```
LED green绿色的时候 

LED 緑色の時が
```
$ sudo echo  G > /dev/myled0
```
LED BLUE蓝色的时候 

LED 青色の時が
```
$ sudo echo B > /dev/myled0
```

结束需要卸载模块
```
sudo rmmod myled.ko
```
参考资料 ：https://github.com/ryuichiueda/robosys2019

视频（video） ：https://youtu.be/EuCUbTCZ9hc
