#include <iostream>

using namespace std;

int respuestaTematica, rtasCorrectas = 0, rtasIncorrectas = 0;

int main() {	
	cout<<"Bienvenido a QUIEN QUIERE SER MILLONARIO! El juego de preguntas que no te da ni un peso." <<endl<<endl;
	do {
	cout<<"Elija una tematica:\n\n Cine       : 1\n Musica     : 2\n Geografia  : 3\n\n Si desea salir del juego tipee 0"<<endl<<endl;
		cout<<"Respuestas Correctas: "<<rtasCorrectas<<" Respuestas Incorrectas: "<<rtasIncorrectas<<endl<<endl;
		cin>>respuestaTematica; cout<<endl; 
	if (respuestaTematica == 1) {	
		cout<<"1) En que pelicula NO trabajo Leonardo Di Caprio?\n A - El club de la pelea\n B - El lobo de Wall Street\n C - Romeo y Julieta"<<endl<<endl;
		char respuestaCine1;
		cout<<"Respuesta: "; cin>>respuestaCine1; cout<<endl;
		if (respuestaCine1 == 'A' or respuestaCine1 == 'a') {
			cout<< "Correcto!\n\n";
			rtasCorrectas++;
		}
		else {
			cout<<"Incorrecto!\n"<<endl;
			rtasIncorrectas++;
		} 
	
 		cout<<"2) El director de la pelicula TED es ademas el creador de:\n A - Los Simpsons\n B - Padre de Familia\n C - American Dad"<<endl<<endl;
		char respuestaCine2;
		cout<<"Respuesta: "; cin>> respuestaCine2; cout<<endl;
		if (respuestaCine2 == 'B' or respuestaCine2 == 'b') {
			cout<<"Correcto!\n\n";
			rtasCorrectas++;
		}	
		else {
			cout<<"Incorrecto!\n\n";
			rtasIncorrectas++;
			}		

		cout<<"3) Que pelicula fue ganadora como mejor pelicula en la ultima premiacion de los Oscar?\n A - Boyhood\n B - Whiplash\n C - Birdman"<<endl<<endl;
		char respuestaCine3;
		cout<<"Respuesta: "; cin>>respuestaCine3; cout<<endl;
		if (respuestaCine3 == 'C' or respuestaCine3 == 'c') {
			cout<<"Correcto!\n\n";
			rtasCorrectas++;
	}
		else {
			cout<<"Incorrecto!\n\n";
			rtasIncorrectas++;
	}
 }

	else if (respuestaTematica == 2) {
			cout<<"1) Michael Balzary es mejor conocido como:\n A - Michael Buble\n B - Mike Stern\n C - Flea"<<endl<<endl;
			char respuestaMusica1;
			cout<<"Respuesta: "; cin>>respuestaMusica1; cout<<endl;
		 if (respuestaMusica1 == 'C' or respuestaMusica1 == 'c') {
			cout<<"Correcto!"<<endl<<endl;
			rtasCorrectas++;
	} 
		else {
			cout<<"Incorrecto!"<<endl<<endl;
			rtasIncorrectas++;
	}
	
		cout<<"2) El ultimo album de estudio de los Beatles fue:\n A - Help!\n B - Abbey Road\n C - Ninguno de los anteriores"<<endl<<endl;
		char respuestaMusica2;
		cout<<"Respuesta: "; cin>> respuestaMusica2; cout<<endl;
		if (respuestaMusica2 == 'C' or respuestaMusica2 == 'c') {
			cout<<"Correcto!"<<endl<<endl;
			rtasCorrectas++;
	}
		else {
			cout<<"Incorrecto!"<<endl<<endl;
			rtasIncorrectas++;
	}
	
		cout<<"3) El piano es un instrumento de:\n A - Viento\n B - Cuerdas\n C - Tipo Electronico"<<endl<<endl;
		char respuestaMusica3;
		cout<<"Respuesta: "; cin>>respuestaMusica3; cout<<endl;
		if (respuestaMusica3 == 'B' or respuestaMusica3 == 'b') {
			cout<<"Correcto!"<<endl<<endl;
			rtasCorrectas++;
	}
		else {
			cout<<"Incorrecto!"<<endl<<endl;
			rtasIncorrectas++;
	}
			;
		 }
	
	else if (respuestaTematica == 3) {
		cout<<"1) En que continente se encuentra Rusia?\n A - Asia\n B - Europa\n C - Ambas respuestas son correctas"<<endl<<endl;
		char respuestaGeografia1;
		cout<<"Respuesta: "; cin>>respuestaGeografia1; cout<<endl;
		if(respuestaGeografia1 == 'C' or respuestaGeografia1 == 'c') {
			cout<<"Correcto!"<<endl<<endl;
			rtasCorrectas++;
	}
		else {
			cout<<"Incorrecto!"<<endl<<endl;
			rtasIncorrectas++;
	}
		cout<<"2) Cual es la capital de Thailandia?\n A - Nueva Delhi\n B - Teheran\n C - Bangkok"<<endl<<endl;
		char respuestaGeografia2;
		cout<<"Respuesta: "; cin>>respuestaGeografia2; cout<<endl;
		if (respuestaGeografia2 == 'C' or respuestaGeografia2 == 'c') {
			cout<<"Correcto!"<<endl<<endl;
			rtasCorrectas++;
	}
		else {
			cout<<"Incorrecto!"<<endl<<endl;
			rtasIncorrectas++;
	}
	
	
		cout<<"3) ¿Cual es el oceano mas grande del mundo?\n A - Atlantico\n B - Pacifico\n C - Indico"<<endl<<endl;
		char respuestaGeografia3;
		cout<<"Respuesta: "; cin>>respuestaGeografia3; cout<<endl;
		if (respuestaGeografia3 == 'B' or respuestaGeografia3 == 'b') {
			cout<<"Correcto!"<<endl<<endl;
			rtasCorrectas++;
	}
		else {
			cout<<"Incorrecto!"<<endl<<endl;
			rtasIncorrectas++;
	}
			;
		 } 
		 
	else if (respuestaTematica == 0) {
		 	return 0;
		 } 
	} while(respuestaTematica == 1 or respuestaTematica == 2 or respuestaTematica == 3);
} 
