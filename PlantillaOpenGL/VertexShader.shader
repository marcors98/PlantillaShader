#version 330 core
//La primera linea SIEMPRE es la version

//Atributos de entrada (vienen desde c++)
in vec3 posicion;
in vec4 color;

//Atributos de salida (Van hacia el fragment shader)
out vec4 fragmentColor;

//Funcion main
void main() {
	//Es la posicion de salida del vertice
	//
	gl_Position.xyz = posicion;
	gl_position.w = 1.0;

	//Establecer valores de atributos de salida
	fragmentColor = color;
}