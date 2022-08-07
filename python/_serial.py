import serial
import time

arduino = serial.Serial(port='/dev/ttyACM0', baudrate=9600, timeout=.1) 

def write(x):
    arduino.write(bytes(x, 'utf-8')) # sending data to arduino
    time.sleep(0.05)
    return x


    
