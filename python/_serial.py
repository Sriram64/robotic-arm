import serial
import time

arduino = serial.Serial(port='/dev/ttyACM0', baudrate=9600, timeout=.1)
def write(x):
    arduino.write(bytes(x, 'utf-8'))
    time.sleep(0.05)
    return

#while True:
    #num = input("Enter the angle: ")

    #val = write(num)
    
