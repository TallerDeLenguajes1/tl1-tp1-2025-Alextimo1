[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

# tp1
El archivo .gitignore es un archivo de configuración utilizado en Git para especificar qué archivos y directorios deben ser ignorados y no ser rastreados en un repositorio. Su uso es fundamental para evitar que archivos innecesarios o confidenciales sean añadidos al control de versiones
**¿Por qué es conveniente incluirlo?**
1. Evita archivos innecesarios en el repositorio

-Archivos generados automáticamente (ej. node_modules/, bin/, obj/, *.class).

-Archivos de configuración local (ej. .env, config.json con credenciales).

-Caché y dependencias externas (ej. vendor/ en PHP, venv/ en Python).

2. Mejora el rendimiento

-Evita que Git rastree archivos grandes o que cambian constantemente (logs, compilados).

-Reduce el tamaño del repositorio.

3. Facilita la colaboración en equipo

-Mantiene limpio el historial de cambios.

-Previene conflictos por archivos temporales o locales

 **¿Cuándo se debe hacer?**
-Antes de hacer el primer commit, para evitar que archivos no deseados sean rastreados.

-Al configurar un nuevo proyecto, estableciendo reglas para ignorar archivos generados por el sistema o dependencias.

-Si el proyecto cambia y necesita nuevas reglas (ej. si agregas un framework que genera nuevos archivos temporales)

 **¿Cómo configuraría el archivo .gitignore?**
El archivo .gitignore debe colocarse en la raíz del repositorio y contener patrones para ignorar archivos.