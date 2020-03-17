#version 330 core
//La primera linea SIEMPRE es la version
//Objetivo: Establecer valores de atributos de salida

//Atributos de entrada (desde el vertex shader)
in vec4 fragmentColor;

//Atributos de salida
//1ro define la visualizacion del fragmento
out vec4 salidaColor;

void main() {
	salidaColor = fragmentColor;
}