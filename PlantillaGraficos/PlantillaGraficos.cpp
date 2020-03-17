// PlantillaGraficos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

#include "Shader.h"
#include "Vertice.h"


#include <vector>

using namespace std;

//Cada elemento que queramos renderear necesita un vertex array y un buffer
vector<Vertice> triangulo;
GLuint vertexArrayTrianguloID;
GLuint bufferTrianguloID;

vector<Vertice> cuadrado;
GLuint vertexArrayCuadradoID;
GLuint bufferCuadradoID;

vector<Vertice> nube;
Vertice v[360];
GLuint vertexArrayNubeID;
GLuint bufferNubeID;



//Instancia del shader
Shader *shader;

//Identificadores para mapeo de atributos de entrada del vertex shader
GLuint posicionID;
GLuint colorID;

void inicializarCuadrado() {
	Vertice v1 = {
		vec3(-0.9f,-0.7f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};
	
	Vertice v2 = {
		vec3(-0.8f,-0.6f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	Vertice v3 = {
		vec3(0.8f,-0.6f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	Vertice v4 = {
		vec3(0.9f,-0.7f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	cuadrado.push_back(v1);
	cuadrado.push_back(v2);
	cuadrado.push_back(v3);
	cuadrado.push_back(v4);


}

void inicializarCuadrado2() {
	Vertice v1 = {
		vec3(-0.75f,-0.6f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	Vertice v2 = {
		vec3(-0.65f,-0.5f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	Vertice v3 = {
		vec3(0.65f,-0.5f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	Vertice v4 = {
		vec3(0.75f,-0.6f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	cuadrado.push_back(v1);
	cuadrado.push_back(v2);
	cuadrado.push_back(v3);
	cuadrado.push_back(v4);


}

void inicializarCuadrado3() {
	Vertice v1 = {
		vec3(-0.60f,-0.5f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	Vertice v2 = {
		vec3(-0.50f,-0.4f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	Vertice v3 = {
		vec3(0.50f,-0.4f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	Vertice v4 = {
		vec3(0.60f,-0.5f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	cuadrado.push_back(v1);
	cuadrado.push_back(v2);
	cuadrado.push_back(v3);
	cuadrado.push_back(v4);


}

void inicializarCuadrado4() {
	Vertice v1 = {
		vec3(-0.45f,-0.4f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	Vertice v2 = {
		vec3(-0.35f,-0.3f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	Vertice v3 = {
		vec3(0.35f,-0.3f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	Vertice v4 = {
		vec3(0.45f,-0.4f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	cuadrado.push_back(v1);
	cuadrado.push_back(v2);
	cuadrado.push_back(v3);
	cuadrado.push_back(v4);


}

void inicializarCuadrado5() {
	Vertice v1 = {
		vec3(-0.30f,-0.3f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	Vertice v2 = {
		vec3(-0.20f,-0.2f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	Vertice v3 = {
		vec3(0.20f,-0.2f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	Vertice v4 = {
		vec3(0.30f,-0.3f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	cuadrado.push_back(v1);
	cuadrado.push_back(v2);
	cuadrado.push_back(v3);
	cuadrado.push_back(v4);


}

void inicializarCuadrado6() {
	Vertice v1 = {
		vec3(-0.12f,-0.2f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	Vertice v2 = {
		vec3(-0.12f,-0.1f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	Vertice v3 = {
		vec3(0.12f,-0.1f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	Vertice v4 = {
		vec3(0.12f,-0.2f,0.0f),
		vec4(0.74f, 0.49f, 0.00f)
	};

	cuadrado.push_back(v1);
	cuadrado.push_back(v2);
	cuadrado.push_back(v3);
	cuadrado.push_back(v4);


}

void inicializarCuadrado7() {
	Vertice v1 = {
		vec3(-0.12f,-0.2f,0.0f),
		vec4(1.0f, 0.67f, 0.00f)
	};

	Vertice v2 = {
		vec3(-0.25f,-0.7f,0.0f),
		vec4(1.0f, 0.67f, 0.00f)
	};

	Vertice v3 = {
		vec3(-0.2f,-0.7f,0.0f),
		vec4(1.0f, 0.67f, 0.00f)
	};

	Vertice v4 = {
		vec3(-0.09f,-0.2f,0.0f),
		vec4(1.0f, 0.67f, 0.00f)
	};

	cuadrado.push_back(v1);
	cuadrado.push_back(v2);
	cuadrado.push_back(v3);
	cuadrado.push_back(v4);


}

void inicializarCuadrado8() {
	Vertice v1 = {
		vec3(0.12f,-0.2f,0.0f),
		vec4(1.0f, 0.67f, 0.00f)
	};

	Vertice v2 = {
		vec3(0.25f,-0.7f,0.0f),
		vec4(1.0f, 0.67f, 0.00f)
	};

	Vertice v3 = {
		vec3(0.2f,-0.7f,0.0f),
		vec4(1.0f, 0.67f, 0.00f)
	};

	Vertice v4 = {
		vec3(0.09f,-0.2f,0.0f),
		vec4(1.0f, 0.67f, 0.00f)
	};

	cuadrado.push_back(v1);
	cuadrado.push_back(v2);
	cuadrado.push_back(v3);
	cuadrado.push_back(v4);


}

void inicializarCuadrado9() {
	Vertice v1 = {
	vec3(-0.12f,-0.2f,0.0f),
	vec4(0.37f, 0.25f, 0.00f)
	};

	Vertice v2 = {
		vec3(-0.25f,-0.7f,0.0f),
	vec4(0.37f, 0.25f, 0.00f)
	};

	Vertice v3 = {
	vec3(0.25f,-0.7f,0.0f),
	vec4(0.37f, 0.25f, 0.00f)
	};


	Vertice v4 = {
	vec3(0.12f,-0.2f,0.0f),
	vec4(0.37f, 0.25f, 0.00f)
	};


	cuadrado.push_back(v1);
	cuadrado.push_back(v2);
	cuadrado.push_back(v3);
	cuadrado.push_back(v4);


}

void inicializarCuadrado10() {
	Vertice v1 = {
	vec3(-1.0f,-0.7f,0.0f),
	vec4(0.15f, 0.60f, 0.01f)
	};

	Vertice v2 = {
		vec3(-1.0f,-1.0f,0.0f),
	vec4(0.15f, 0.60f, 0.01f)
	};

	Vertice v3 = {
	vec3(1.0f,-1.0f,0.0f),
	vec4(0.15f, 0.60f, 0.01f)
	};


	Vertice v4 = {
	vec3(1.0f,-0.7f,0.0f),
	vec4(0.15f, 0.60f, 0.01f)
	};


	cuadrado.push_back(v1);
	cuadrado.push_back(v2);
	cuadrado.push_back(v3);
	cuadrado.push_back(v4);


}

void inicializarNube() {
	for (double i = 0; i < 360.0; i += 5.0)
	{
		int z = (int)i;
		v[z] = {
			vec3(0.2 * cos(i * 3.14159 / 180) - 0.4, 0.2 * sin(i * 3.14159 / 180) + 0.7, 0.0f),
			vec4(1.0f,1.0f,1.0f,1.0f)
		};

		nube.push_back(v[z]);
	}


}

void dibujar() {
	//Elegir shader
	shader->enlazar();
	//Elegir el vertex array
	glBindVertexArray(vertexArrayTrianguloID);
	//Dibujar

	//Triangulo
	glDrawArrays(GL_TRIANGLES, 0, triangulo.size());

	//Proceso de dibujado de Cuadrado
	glBindVertexArray(vertexArrayCuadradoID);
	glDrawArrays(GL_QUADS, 0, cuadrado.size());

	// Nubes
	glBindVertexArray(vertexArrayNubeID);
	glDrawArrays(GL_POLYGON, 0, nube.size());

	//Soltar vertex array
	glBindVertexArray(0);
	//Desenlazar shader
	shader->desenlazar();
}

int main()
{
	//Declarar una ventana
	GLFWwindow*window;

	//Si no se pudo iniciar GLFW 
	//Terminamos ejecucion.

	if (!glfwInit())
	{
		exit(EXIT_FAILURE);
	}
	//Si se puedo iniciar GLFW
	//Inicializmos la ventana
	//Todas las funciones especificas de GLFW tienen el sufijo glfw
	window = glfwCreateWindow(600,600,"Ventana",NULL,NULL);

	//Si no pudo crear la ventana
	//Terminamos ejecucion
	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	//Establecemos la ventana como contexto
	glfwMakeContextCurrent(window);

	//Una vex establecido el contexto
	//Se activan las funciones "Modernas" (gpu) 

	
	glewExperimental = true;

	GLenum errores = glewInit();
	if (errores != GLEW_OK)
	{
		glewGetErrorString(errores);
	}

	const GLubyte* versionGL = glGetString(GL_VERSION);
	inicializarCuadrado10();
	inicializarCuadrado();
	inicializarCuadrado2();
	inicializarCuadrado3();
	inicializarCuadrado4();
	inicializarCuadrado5();
	inicializarCuadrado6();
	inicializarCuadrado9();
	inicializarCuadrado7();
	inicializarCuadrado8();
	inicializarNube();





	const char* rutaVertexShader = "VertexShader.shader";

	const char* rutaFragmentShader = "FragmentShader.shader";
	shader = new Shader(rutaVertexShader, rutaFragmentShader);

	//Mapeo de atributos
	posicionID = glGetAttribLocation(shader->getID(), "posicion");

	colorID = glGetAttribLocation(shader->getID(),"color");

	shader->desenlazar();

	//Crear el vertex array del triangulo
	glGenVertexArrays(1,&vertexArrayTrianguloID);
	glBindVertexArray(vertexArrayTrianguloID);

	//Vertex Buffer
	glGenBuffers(1,&bufferTrianguloID);
	glBindBuffer(GL_ARRAY_BUFFER, bufferTrianguloID);


	//Asociar datos al buffer
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice) * triangulo.size(), triangulo.data(), GL_STATIC_DRAW);

	//Habilitar atributos de shader
	glEnableVertexAttribArray(posicionID);
	glEnableVertexAttribArray(colorID);


	//Especificar a OpenGL como comunicarse
	glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
	glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

	//Proceso de inicializar Vertex Array para el cuadrado
	glGenVertexArrays(1,&vertexArrayCuadradoID);
	glBindVertexArray(vertexArrayCuadradoID);
	glGenBuffers(1, &bufferCuadradoID);
	glBindBuffer(GL_ARRAY_BUFFER, bufferCuadradoID);
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice) * cuadrado.size(), cuadrado.data(), GL_STATIC_DRAW);
	glEnableVertexAttribArray(posicionID);
	glEnableVertexAttribArray(colorID);
	glVertexAttribPointer(posicionID,3,GL_FLOAT,GL_FALSE,sizeof(Vertice),0);
	glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));


	//Proceso de inicializar Vertex Array para las nubes
	glGenVertexArrays(1, &vertexArrayNubeID);
	glBindVertexArray(vertexArrayNubeID);
	glGenBuffers(1, &bufferNubeID);
	glBindBuffer(GL_ARRAY_BUFFER, bufferNubeID);
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice) * nube.size(), nube.data(), GL_STATIC_DRAW);
	glEnableVertexAttribArray(posicionID);
	glEnableVertexAttribArray(colorID);
	glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
	glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

	//Soltar el vertex array y el buffer
	glBindVertexArray(0);
	glBindBuffer(GL_ARRAY_BUFFER,0);

	//Ciclo de dibujo (Draw Loop)
	while (!glfwWindowShouldClose(window))
	{
		//Establecer region de dibujo
		glViewport(0, 0, 600, 600);
		//Establecemos el color de borrado.
		glClearColor(0.06,0.68,0.6,1);
		//Borrar
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		//Actualizar valores y dibujar
		dibujar();

		glfwPollEvents();

		glfwSwapBuffers(window);

	}
	//Despues del ciclo de dibujo
	//Eliminamos venta y procesos de glfw
	glfwDestroyWindow(window);
	glfwTerminate();
}

