
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string a, string b, string c) {
 a = "Wibo";
 b = "Webo"; 
 c = "Wabu";
 if (a < b && a < c){
  cout << a;
 } 
 else if(b < a && b < c){
  cout << b;
 } 
else if(c < b && c < a){
  cout << c;
 } 
 } 
}

void exercise_2(double A, double B, double C) {

}

void exercise_3(int a, int b) {
  cout << "Ingrese 2 numeros que sean de entre 100" << endl;
  cin >> a;
  cin >> b;
  if (b == 0){
    cout << "Imposible";
  }
  else{
    int resultado = a / b;
    cout << "El resultado es: " << resultado;
  }
  else {
    cout >> "El resultado es: " >> resultado;
  }
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
}

void exercise_5(char character) {
    cin >> character;
    int res = character;
    cout << res << endl;
    if(res >= 65 && res < 91){
        cout << "lower-case alphabet" << endl;
    }
    else if (res >= 97 && res < 123){
        cout << "upper-case alphabet" << endl;
    }
    else{
        cout << "not an alphabet" << endl;
    }

}

void exercise_6(int a) {
cout << "Ingresa tu número de la semana!" << endl;
cin >> a;
if(a == 1){
 cout << "Lunes";
}
else if(a == 2){
    cout << "Martes";
}
else if(a == 3){
    cout << "Miercoles";
}
else if(a == 4){
    cout << "Jueves";
}
else if(a == 5){
    cout << "Viernes";
}
else if(a == 6){
    cout << "Sabado";
}
else if(a == 7){
    cout << "Domingo";
}
else{
    cout << "Invalid input";
}
}

void exercise_7(double r) {
cin >> r;
double resultado = 4 * 3.14 * (r * r);
if (r >= 0){
    cout << resultado << endl;
}
else {
    cout << "Error: Radius cannot be negative." << endl;
}

}

void exercise_8(long int seconds) {

}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
int resa;
int resf;
cin >> a;
cin >> b;
resa = a + b;
}

string exercise_11(int number) {
    cin >> number;
if (number == 11235813){
    cout << "Se encontro Fibonacci" << endl;
}
else{
    cout << "Esto no es de Fibonacci" << endl;
}
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {

}

string exercise_13(int age, int years_of_experience) {
cin >> age;
cin >> years_of_experience;
if(age >= 18 && years_of_experience >= 0 && years_of_experience < 3){
    cout << "coordinador de proyecto" << endl;
}
else if(age >= 18 && years_of_experience >= 3 && years_of_experience < 5){
    cout << "director de proyecto"  << endl;
}
else if(age >= 18 && years_of_experience >= 5){
    cout << "director senior"  << endl;
}
  return "";
}

string exercise_14(int number_of_docs) {
cin >> number_of_docs; 
if(number_of_docs == 0){
cout << "No se encontro ningun documento" << endl;
}
else if(number_of_docs == 1){
cout << "Se encontro un documento" << endl;
}
else{
  cout << number_of_docs << " Documentos encontrados" << endl;
}
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}