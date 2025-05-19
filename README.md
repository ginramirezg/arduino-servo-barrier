
# Barrera Automática con Arduino y Sensor Ultrasónico

Este proyecto consiste en una barrera automática controlada por un **Arduino Uno**, un **servo motor** y un **sensor ultrasónico HC-SR04**. Además, se incluye el diseño e impresión 3D de las piezas que componen la base y la barrera.

##  Componentes

- Arduino Uno R3  
- Sensor ultrasónico HC-SR04  
- Servo motor (SG90 o similar)  
- LEDs (verde, amarillo, rojo)  
- Resistencias  
- Cables de conexión  
- Base y barrera impresas en 3D (archivos STL incluidos)

## Funcionamiento

La barrera utiliza el sensor ultrasónico para detectar objetos a una distancia determinada:

- **>18 cm**: la barrera está **cerrada** (LED rojo encendido).
- **15–18 cm**: se activa el LED **amarillo**, indicando una posible presencia.
- **<6 cm**: se abre la barrera (servo a 90°) y se enciende el LED **verde**.

## Archivos incluidos

### Código Arduino

- `barrera_automatica.ino`: contiene el código fuente para el Arduino Uno.

### Modelos 3D

- `Base_barrera.STL`: base de la barrera impresa en 3D.  
- `barrera.STL`: pluma/mástil de la barrera.

##  Impresión 3D

Las piezas fueron diseñadas y preparadas para impresión con **Ultimaker Cura**. Recomendaciones:

- Material: PLA  
- Altura de capa: 0.2 mm  
- Relleno: 20%  
- Soportes: según orientación  


## Esquema de conexión

| Componente | Pin Arduino |
|------------|-------------|
| HC-SR04 - Trig | D2 |
| HC-SR04 - Echo | D3 |
| LED Rojo | D7 |
| LED Amarillo | D6 |
| LED Verde | D5 |
| Servo | D9 |

