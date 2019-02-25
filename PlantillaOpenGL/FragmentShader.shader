#version 330 core
//Primera linea SIEMPRE es la version

//Atribuos de entrada (vienen desde el Vertex shader)
in vec fragmentColor;

//Atributos d salida
out vec4 salidaColor;

//Funcion main()
void main() {
	salidaColor = fragmentColor;
}