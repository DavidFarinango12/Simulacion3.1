/*
 *CAPITULO III: MODULOS DE COMUNICACION 
 *CODIGO 9:ENVIO DE MENSAJES POR COMUNICACION SERIAL
 *NOMBRE:RAFAEL FARINANGO
 *FUNCIONES DE PROGRAMACION:
 *Serial.begin(velocidad)->9600,19200,38400,57600
 *Serial.print(mensaje)->"HOLA",variable
 *Serial.println(mensaje)->salto de linea
 */

char vector[7]={'A','R','D','U','I','N','O'};//vector para ser enviado
int i;
char dato;//variable de recepcion de datos

void setup() {
  Serial.begin(9600);//habilita comunicacion serial
  Serial.println("INICIO");//mensaje de inicio
}

void loop() {
  for(i=0;i<7;i++){
    Serial.print(vector[i]);//imprime posicion i del vector
    delay(200);
    }
  if(Serial.available()>0) //revisa si existe mensajes en el registrode comunicacion serial
    dato=Serial.read();//en caso de tener mensajes, lo almacena en la variable
  if(dato=="A"){  
    for(i=0;i<7;i++){
      Serial.print(vector[i]);
      delay(200);
      }
    }
  Serial.println(" ");//mensaje en blanco
  for(i=0;i<10;i++){//contador del 0 al 9
    Serial.println(String("Contador: ")+String(i));//union de mensaje con variable
    delay(200);
    if(dato=="B"){
      Serial.println(" ");
      for(i=0;i<10;i++){
        Serial.println(String("Contador: ")+String(i));//union de mensaje con variable
        delay(200);
        }
      }
    }


}
