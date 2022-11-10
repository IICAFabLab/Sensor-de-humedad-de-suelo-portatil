# Sensor de humedad de suelo portátil

Este proyecto fue creado con el fin de medir la humedad y detectar condiciones de escacez de agua en los suelos mediante el almacenamiento de datos asincrónicos. Consiste de un sistema embebido utilizando como unidad de procesamiento un microcrontrolador Arduino NANO el cual se utiliza para extraer los datos del sensor de humedad de suelo para posteriormente ser almacenados en una tarjeta SD integrada al circuito.

## Componentes del sistema

- Arduino NANO: Esta placa es la encargada de conectar los componentes periféricos entre sí, así como de recibir las señales del sensor capacitivo de humedad, convertirlas en lecturas porcentuales y almacenar los datos en una tarjeta SD.

- Sensor de humedad: Este sensor capacitivo mide la conductividad eléctrica del suelo, la cual se asocia a la cantidad de agua presente en el suelo.

- Adaptador de tarjeta SD: Este será utilizado para almacenar los datos provenientes del sensor de humedad y que será posteriormente analizado.

- Encapsulado protección IP64: Con el fin de proteger los componentes de la humedad y el polvo, el encapsulado será utilizado para almacenar las terminales del microcontrolador con el resto de componentes para evitar cables expuestos que puedan causar un malfuncionamiento del sistema.

- Fuente de energía: El sistema será energizado por medio de un par de baterías conectadas directamente con la placa.

## Diagrama eléctrico

<img src= "https://user-images.githubusercontent.com/111079577/200980836-75db8f8a-2048-4008-bb98-f8750898247d.png" width=450/>

<img src= "https://user-images.githubusercontent.com/111079577/200980861-217b71c0-9073-4196-8edf-85a0d8a56b04.png" width=450/>

## Diseño final del dipositivo

<img src= "https://user-images.githubusercontent.com/111079577/200980778-a18057bf-a607-492f-bbef-9193428bb4f4.png" width=450/>
