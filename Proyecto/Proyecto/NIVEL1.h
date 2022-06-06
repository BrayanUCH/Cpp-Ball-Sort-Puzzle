#pragma once
#include <SFML\Graphics.hpp>
#include <SFML\Window\Mouse.hpp>
#include <stdlib.h>
//#include "PilaClass.cpp"

using namespace sf;
using namespace std;

struct nodo {
	int valor;
	struct nodo* N_siguiente;
};

typedef struct nodo* pila;

struct nodoC {
	pila pila1 = NULL;
	pila pila2 = NULL;
	pila pila3 = NULL;
	pila pila4 = NULL;
	pila pila5 = NULL;
	pila pila6 = NULL;
	pila pila7 = NULL;
	pila pila8 = NULL;
	pila pila9 = NULL;

	struct nodoC* next;
};
typedef struct nodoC* listaMovi;


class nivel1 {

public:
	nivel1(int resolucion_x, int resolucion_y, string titulo);//constructor

	void dibujar();//dibuja la pnatlla

	void gameLoob();//repetidor

	void procesar_eventos();//escuchardor de eventos

	void procesar_mouse();//posicion del click del mouse

	void push(pila& pil, int valor);

	int pop(pila& pil);

	void colocar_colores_pilas(pila pil, int i);

	void Movimiento_entre_pilas();

	bool Pilas_llenas(pila pil);

	bool GAME_OVER(pila pil);

	void MostrarRepeticion(listaMovi listasMostrar);

	void GuardarMovimientos();

	void mostrarPila(pila pil);

	void regresarPasos(listaMovi& listasMostrar);
private:
	//retroceder pasos
	Texture* textura_retroceder;
	RectangleShape* rectangulo_retroceder;
	int Cont_retrocesos;
	Text* Contxt_retrosesos;

	//movimientos
	listaMovi MOVIMIENTOS = NULL;
	Text* TXT_repeticion;
	RectangleShape* rect_repeticion;

	//fin del juego 
	bool game_over;

	//pilas
	pila PILA1 = NULL;
	pila PILA2 = NULL;
	pila PILA3 = NULL;
	pila PILA4 = NULL;
	pila PILA5 = NULL;

	//ventana
	RenderWindow* VENTANA_Level;
	int fps;

	//fuente
	Font* fuente;

	//palabras
	Text* TXT_Titulo;
	Text* TXT_nextLevel;
	Text* TXT_menu;
	Text* TXT_salir;

	//botones
	RectangleShape* rect_nextLevel;
	RectangleShape* rect_menu;
	RectangleShape* rect_salir;

	//fondo
	Texture* textura_Fondo;
	RectangleShape* rectangulo_Fondo;

	//Reinicar
	Text* TXT_reiniciar;
	RectangleShape* rect_reiniciar;

	//eventos
	Event* evento1;
	Vector2i posicion_mouse;

	//tiempo
	Clock* reloj1;
	Time* tiempo_reloj1;

	//cantenedores
	Texture* texture_contenedor;
	Texture* texture_color[6];
	RectangleShape* Contenedores[5];
	CircleShape* Bolas[20];

	//botones de las pilas 
	RectangleShape* btn_pilas[5];

	//Detectores de btn pilas
	String Primero;
	String Segundo;
};
