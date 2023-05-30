# Video: https://youtube.com/shorts/px9bDhdMJI4


# Tutorial
1. Obtenga las piezas, instale [Arduino IDE] (https://www.arduino.cc/en/Main/Software), instale los controladores para Arduino (si tiene un clon de Arduino Y está utilizando Windows)
2. Copie y pegue [el código](https://github.com/ROBTRT421/Sensor-De-Distancia-Arduino/blob/main/sensor%20de%20distancia%20con%20buzz.ino.ino) en la IDE de Arduino
3. Instalar la librería 'LiquidCrystal_I2C' usando Arduino IDE [Library Manager](https://www.arduino.cc/en/Guide/Libraries#toc2)
4. Conecte todo _(vea el diagrama de cableado)_
5. Conecte su Arduino y selecciónelo en 'Tools > Board' y 'Tools > Port'
6. Carguelo a la placa
7. _(opcional)_ Modifica las variables, explora el código :guiño:


# Partes
Part Name            |      Amazon link       | Note
:------------------- | ---------------------- | :------------------------------------------------
Arduino UNO  (clone) | https://shre.ink/HqM3
Display LCD          | https://shre.ink/HGgu
Interfaz I2c         | https://shre.ink/HGgu 
Buzzer               | https://shre.ink/HGgl
Jumpers              | https://shre.ink/HGp8 |
Sensor HC-SR04       | https://shre.ink/HGoC | 
Protoboard           | https://shre.ink/HGpI | 



# Wiring diagram
Pin           | Arduino UNO
:------------ | :------------------
I2c SDA       | A4
I2c SCL       | A5
HC-SR04 ECHO  | 10
HC-SR04 TRIG  | 9
BUZZER  +     | 7


![wiring diagram]( https://github.com/ROBTRT421/Sensor-De-Distancia-Arduino/blob/main/Sensor%20de%20Distancia.png "wiring diagram")

El orden exacto de los pines para el RC522 o el SERVO puede ser diferente del que se muestra en la imagen, así que sea inteligente y use la tabla anterior.

