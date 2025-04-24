## Actividad 1.


**Código fuente:**

*Definición:* El código fuente es el conjunto de instrucciones y declaraciones escritas en un lenguaje de programación que es legible por humanos. Este código es lo que los programadores escriben y editan para crear programas y aplicaciones.
Fuente: GeeksforGeeks - Código fuente

**Código objeto:**

*Definición:* El código objeto es el resultado de la compilación del código fuente. Es un conjunto de instrucciones en un formato que puede ser entendido por la máquina, pero que aún no está completamente ejecutable, ya que puede requerir enlazado con otras bibliotecas o módulos.
Fuente: Tutorialspoint - Código objeto

**Lenguaje ensamblador:**

*Definición:* El lenguaje ensamblador es un lenguaje de programación de bajo nivel que está muy cerca del código máquina. Utiliza mnemotécnicos y símbolos para representar instrucciones de la CPU, lo que permite a los programadores escribir programas que son más comprensibles que el código máquina puro.
Fuente: IBM - Lenguaje ensamblador

**Compilador:**

*Definición:* Un compilador es un programa que traduce el código fuente escrito en un lenguaje de programación de alto nivel a un lenguaje de bajo nivel, como el código objeto o el código máquina, para que pueda ser ejecutado por una computadora.
Fuente: Khan Academy - Compiladores

**¿Cuál es la diferencia entre un lenguaje compilado y uno interpretado?:**

*Definición:* La principal diferencia entre un lenguaje compilado y uno interpretado radica en cómo se ejecuta el código. Un lenguaje compilado se traduce completamente a código máquina antes de ser ejecutado, lo que generalmente resulta en un rendimiento más rápido. En contraste, un lenguaje interpretado se traduce y ejecuta línea por línea en tiempo real, lo que puede hacer que la ejecución sea más lenta, pero permite una mayor flexibilidad y facilidad de depuración.
Fuente: Educative - Lenguajes compilados vs. interpretados

## Actividad 2.

**¿Cuál es la función principal del preprocesador en C?**

El preprocesador se encarga de preparar el código antes de que se compile. Esto incluye cosas como incluir archivos de encabezado y definir macros. Es como una primera revisión que hace que el código esté listo para el compilador.

**¿Por qué se dice que el código objeto (.o) no es directamente ejecutable?**

El código objeto no es ejecutable porque es un formato intermedio. Contiene instrucciones que la máquina puede entender, pero aún tiene referencias a funciones o variables que necesitan ser resueltas por el enlazador (linker) antes de que se pueda ejecutar.

**¿Qué diferencia existe entre el código ensamblador (.s) y el código objeto (.o)?**

La diferencia es que el código ensamblador es legible por humanos y usa mnemotécnicos para representar instrucciones, mientras que el código objeto es un formato binario que la máquina entiende, pero no es fácil de leer para nosotros. El código objeto es el resultado de compilar el código ensamblador.

**¿Para qué sirve la opción -S en GCC?**

La opción -S en GCC le dice al compilador que genere el código ensamblador en lugar de compilarlo directamente a código objeto. Así, obtienes un archivo con extensión .s que muestra el código ensamblador.

**¿Qué sucede si omitimos la etapa de linker?**

Si no usamos el linker, el código objeto no se convierte en un programa ejecutable. Esto pasa porque el linker es el que une todos los archivos de código objeto y resuelve las referencias entre ellos. Sin él, el programa no puede ejecutarse correctamente.