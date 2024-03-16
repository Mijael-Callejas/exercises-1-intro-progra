
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
if (s1 < s2 && s1 < s3){
  cout << s1;
 } 
else if(s2 < s1 && s2 < s3){
  cout << s2;
 } 
else if(s3 < s2 && s3 < s1){
  cout << s3;
 } 
 else {
  cout << s1;
 }
 }

void exercise_2(double A, double B, double C) {
double D = (B * B) - 4 * A * C;
if(D > 0 && A != 0){
  double raiz = sqrt (D);
  double res1 = (-B + raiz) / (2 * A);
  double res2 = (-B - raiz) / (2 * A);
  cout << res1 << "\n" << res2 << endl;
}
else if(D > 0 && A != 0){
  double raiz = sqrt (D);
  double res1 = (-B + raiz) / (2 * A);
  cout << res1 << endl;
}
else if (A == 0 && B != 0){
  cout << (-1 * (C)) / B << endl;
}
else if (A != 0 && B == 0){
  cout << sqrt (C/A) << endl;
}
else {
  cout << "\n" << endl;
}
}

void exercise_3(int a, int b) {
  if (b == 0){
    cout << "Impossible" << endl;
  } else{
    int resultado = a / b;
    cout << resultado << endl;
  }
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
}

void exercise_5(char character) {
    int res = character;
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

  return "";
}

int exercise_10(int a, int b) {
int resa;
int resb;
int resf;
cin >> a;
cin >> b;
resa = a + b;
resb = 0;
while(resa>0){
    resb = resb + resa%10;
    resa = resa / 10;
}
resa = a + b;
cout << resb << endl;
resf = resb * resa;
cout << resf << endl;

}

string exercise_11(int number) {
  cin >> number;
if (number == 11235813){
    cout << "Se encontro a Fibonacci";
}
else{
    cout << "Esto no es de Fibonacci";
}
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {

}

string exercise_13(int age, int years_of_experience) {

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

}

void exercise_16(int debut, int fin) {

}