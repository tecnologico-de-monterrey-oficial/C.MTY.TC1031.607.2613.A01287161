## ¿En qué casos notaste que la versión recursiva fue más lenta o usó más memoria que la iterativa? ¿A qué se debió?
= Si queriamos hacer una secuencia fibonacci muy grande o algo así, podría tardarse más, pero por lo general las recursivas son más eficientes, pero cuando esto pasa, se debe a la memoria, ya que como que no se guardan como tal los calculos.

## Para la suma 1..n, sumFormula resuelve en un solo paso lo que a sumIterative y sumRecursive les toma n pasos. ¿Qué te dice esto sobre buscar una fórmula antes de escribir código?
= Pues que con las herramientas correctas, podríamos ahorrarnos mucho tiempo, en vez de quebrarnos la cabeza inventando una solución, puede que ya exista una ideal para nuestro problema a resolver.

## Si bacteriasRecursive tuviera que calcular n = 100,000 días, ¿qué problema esperarías encontrar y cómo lo resolverías?
= El principal problema, yo creo que sería que nos va a devolver un numero de tipo int, tendríamos que cambiarlo a double, ya que esperamos numeros largos, y otros problemas podrían ser los mismos de la memoria, al ser números grandes, podría tardarse mucho.
