// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

#include "Shader.h"
#include "Vertice.h"

using namespace std;

Shader *shader;
GLuint posicionID;
GLuint colorID;

vector<Vertice> triangulo;
GLuint vertexArrayTrianguloID;
GLuint bufferTrianguloID;

vector<Vertice> cuadrado;
GLuint vertexArrayCuadradoID;
GLuint bufferCuadradoID;

vector<Vertice> piramide;
GLuint vertexArrayPiramideID;
GLuint bufferPiramideID;

void inicializarPiramide() {
	//1
	Vertice v1 = {
		vec3(-0.9, -0.5, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	Vertice v2 = {
		vec3(-0.9, -0.4, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	//2
	Vertice v3 = {
		vec3(-0.8, -0.4, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	Vertice v4 = {
		vec3(-0.8, -0.3, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	//3
	Vertice v5 = {
		vec3(-0.7, -0.3, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	Vertice v6 = {
		vec3(-0.7, -0.2, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	//4
	Vertice v7 = {
		vec3(-0.6, -0.2, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	Vertice v8 = {
		vec3(-0.6, -0.1, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	//5
	Vertice v9 = {
		vec3(-0.5, -0.1, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	Vertice v10 = {
		vec3(-0.5, 0.0, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	//6
	Vertice v11 = {
		vec3(-0.4, 0.0, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	Vertice v12 = {
		vec3(-0.4, 0.1, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	//7
	Vertice v13 = {
		vec3(-0.3, 0.1, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	Vertice v14 = {
		vec3(-0.3, 0.2, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	//8
	Vertice v15 = {
		vec3(-0.2, 0.2, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	Vertice v16 = {
		vec3(-0.2, 0.3, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	//9
	Vertice v17 = {
		vec3(-0.1, 0.3, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	//Parte arriba
	Vertice v18 = {
		vec3(-0.1, 0.45, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	Vertice v19 = {
		vec3(0.1, 0.45, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	Vertice v20 = {
		vec3(0.1, 0.3, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	//Segundos escalones
	//9
	Vertice v21 = {
		vec3(0.2, 0.3, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	//8
	Vertice v22 = {
		vec3(0.2, 0.2, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	Vertice v23 = {
		vec3(0.3, 0.2, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	//7
	Vertice v24 = {
		vec3(0.3, 0.1, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	Vertice v25 = {
		vec3(0.4, 0.1, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	//6
	Vertice v26 = {
		vec3(0.4, 0.0, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	Vertice v27 = {
		vec3(0.5, 0.0, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	//5
	Vertice v28 = {
		vec3(0.5, -0.1, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	Vertice v29 = {
		vec3(0.6, -0.1, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	//4
	Vertice v30 = {
		vec3(0.6, -0.2, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	Vertice v31 = {
		vec3(0.7, -0.2, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	//3
	Vertice v32 = {
		vec3(0.7, -0.3, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	Vertice v33 = {
		vec3(0.8, -0.3, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	//2
	Vertice v34 = {
		vec3(0.8, -0.4, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	Vertice v35 = {
		vec3(0.9, -0.4, 0.0),
		vec4(0.59, 0.48, 0.35)
	};
	//1
	Vertice v36 = {
		vec3(0.9, -0.5, 0.0),
		vec4(0.59, 0.48, 0.35)
	};


	piramide.push_back(v1);
	piramide.push_back(v2);
	piramide.push_back(v3);
	piramide.push_back(v4);
	piramide.push_back(v5);
	piramide.push_back(v6);
	piramide.push_back(v7);
	piramide.push_back(v8);
	piramide.push_back(v9);
	piramide.push_back(v10);
	piramide.push_back(v11);
	piramide.push_back(v12);
	piramide.push_back(v13);
	piramide.push_back(v14);
	piramide.push_back(v15);
	piramide.push_back(v16);
	piramide.push_back(v17);
	//parte arriba
	piramide.push_back(v18);
	piramide.push_back(v19);
	piramide.push_back(v20);
	//segundos escalones
	piramide.push_back(v21);
	piramide.push_back(v22);
	piramide.push_back(v23);
	piramide.push_back(v24);
	piramide.push_back(v25);
	piramide.push_back(v26);
	piramide.push_back(v27);
	piramide.push_back(v28);
	piramide.push_back(v29);
	piramide.push_back(v30);
	piramide.push_back(v31);
	piramide.push_back(v32);
	piramide.push_back(v33);
	piramide.push_back(v34);
	piramide.push_back(v35);
	piramide.push_back(v36);
}

void inicializarCuadrado() {
	Vertice v1 = {
		vec3(-0.8, 0.8, 0.0),
		vec4(0.4, 0.7, 0.1, 1.0)
	};
	Vertice v2 = {
		vec3(-0.4, 0.8, 0.0),
		vec4(0.4, 0.7, 0.1, 1.0)
	};
	Vertice v3 = {
		vec3(-0.4, 0.5, 0.0),
		vec4(0.4, 0.7, 0.1, 1.0)
	};
	Vertice v4 = {
		vec3(-0.8, 0.5, 0.0),
		vec4(0.4, 0.7, 0.1, 1.0)
	};
	cuadrado.push_back(v1);
	cuadrado.push_back(v2);
	cuadrado.push_back(v3);
	cuadrado.push_back(v4);
}

void inicializarTriangulo() {
	Vertice v1 =
	{
		vec3(0.0f, 0.3f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};
	Vertice v2 =
	{
		vec3(-0.3f, -0.3f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};
	Vertice v3 =
	{
		vec3(0.3f, -0.3f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	triangulo.push_back(v1);
	triangulo.push_back(v2);
	triangulo.push_back(v3);
}

void dibujar(){
	//Elegir el shader
	shader->enlazar();
	//Elegir un vertex array

	//Piramide
	glBindVertexArray(vertexArrayPiramideID);
	glDrawArrays(GL_LINE_LOOP, 0, piramide.size());

	//Soltar el vertex array
	glBindVertexArray(0);
	//Soltar el shader
	shader->desenlazar();
}

void actualizar() {

}

int main()
{
	//Creamos una ventana
	GLFWwindow *window;

	//Si no se puede inicializar glfw
	//Iniciamos ejecucion
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	//Si se pudo iniciar GLFW
	//entonces inicializamosla ventana
	window = glfwCreateWindow(1024, 768, "Ventana", NULL, NULL);
	//Si nopodemos iniciar la ventana
	//Entonces terminamos ejecucion
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Establecemos el contexto
	glfwMakeContextCurrent(window);

	//Una vez establecido el contexto activamos funciones modernas
	glewExperimental = true;
	GLenum errorGlew = glewInit();
	if (errorGlew != GLEW_OK) {
		cout << glewGetErrorString(errorGlew);
	}

	const GLubyte *versionGL = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << versionGL;

	inicializarTriangulo();
	inicializarCuadrado();
	inicializarPiramide();

	const char *rutaVertex = "VertexShader.shader";
	const char *rutaFragment = "FragmentShader.shader";

	shader = new Shader(rutaVertex, rutaFragment);

	//Mapeo de atributos
	posicionID = glGetAttribLocation(shader->getID(), "posicion");
	colorID = glGetAttribLocation(shader->getID(), "color");

	//Desenlazar el shader
	shader->desenlazar();

	//Crear un vertex array
	glGenVertexArrays(1, &vertexArrayTrianguloID);
	glBindVertexArray(vertexArrayTrianguloID);

	//Crear vertex buffer
	glGenBuffers(1, &bufferTrianguloID);
	glBindBuffer(GL_ARRAY_BUFFER, bufferTrianguloID);
	//llenar el buffer
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice) * triangulo.size(), triangulo.data(), GL_STATIC_DRAW);

	//Habilitar atributos de shader
	glEnableVertexAttribArray(posicionID);
	glEnableVertexAttribArray(colorID);
	//Especificar a OpenGL como se va a comunicar
	glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
	glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

	//Vertex array y buffer para el cuadrado
	glGenVertexArrays(1, &vertexArrayCuadradoID);
	glBindVertexArray(vertexArrayCuadradoID);
	glGenBuffers(1, &bufferCuadradoID);
	glBindBuffer(GL_ARRAY_BUFFER, bufferCuadradoID);
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice) * cuadrado.size(), cuadrado.data(), GL_STATIC_DRAW);


	//Habilitar atributos de shader
	glEnableVertexAttribArray(posicionID);
	glEnableVertexAttribArray(colorID);
	//Especificar a OpenGL como se va a comunicar
	glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
	glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

	//Vertex array y buffer para la piramide
	glGenVertexArrays(1, &vertexArrayPiramideID);
	glBindVertexArray(vertexArrayPiramideID);
	glGenBuffers(1, &bufferPiramideID);
	glBindBuffer(GL_ARRAY_BUFFER, bufferPiramideID);
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice) * piramide.size(), piramide.data(), GL_STATIC_DRAW);

	//Habilitar atributos de shader
	glEnableVertexAttribArray(posicionID);
	glEnableVertexAttribArray(colorID);
	//Especificar a OpenGL como se va a comunicar
	glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
	glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

	//Soltar vertex array y buffer
	glBindVertexArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	//ciclode dibujo (Draw loop)
	while (!glfwWindowShouldClose(window)) {
		//Establecer region de dibujo
		glViewport(0, 0, 1024, 768);
		//Establece el color de borrado
		glClearColor(0.3, 1, 0.8, 1);
		//Borramos
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo
		dibujar();
		actualizar();

		//Cambiar los buffers
		glfwSwapBuffers(window);
		//Reconocer si hay entradas
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();
    return 0;
}