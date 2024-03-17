
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
  cout << res1 << " " << res2 << endl;
}
else if(D == 0 && A != 0){
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
  cout << "";
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
double porc;
double desc;
if (n > a && n < b){
    porc = x/100 * n;
    desc = n - porc;
}
else if (n > b){
    porc = y/100 * n;
    desc = n - porc;
}
else{
    desc = n;
}
cout << desc << endl;
}

void exercise_5(char character) {
    int res = character;
    if(res >= 97 && res < 123){
        cout << "lower-case alphabet" << endl;
    }
    else if (res >= 65 && res < 91){
        cout << "upper-case alphabet" << endl;
    }
    else{
        cout << "not an alphabet" << endl;
    }

}

void exercise_6(int a) {
if(a == 1){
 cout << "Monday" << endl;
}
else if(a == 2){
    cout << "Tuesday" << endl;
}
else if(a == 3){
    cout << "Wednesday" << endl;
}
else if(a == 4){
    cout << "Thursday"<< endl;
}
else if(a == 5){
    cout << "Friday" << endl;
}
else if(a == 6){
    cout << "Saturday" << endl;
}
else if(a == 7){
    cout << "Sunday" << endl;
}
else{
    cout << "Invalid input" << endl;
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
int h;
int m;
if(seconds < 0){
    cout << "Error: Input seconds cannot be negative." << endl;
}
else {
h = seconds/3600;
seconds = seconds%3600;
m = seconds/60;
seconds = seconds%60;
  if(h < 10 && m < 10 && seconds < 10){
    cout << "0" << h << ":" << "0" << m << ":" << "0" << seconds << endl;
}
else if(h < 10 && m >= 10 && seconds >= 10){
    cout << "0" << h << ":" << m << ":" << seconds << endl; 
}
else if(h < 10 && m >= 10 && seconds < 10){
    cout << "0" << h << ":" << m << ":" << "0" << seconds << endl;
}
else if(h < 10 && m < 10 && seconds >= 10){
    cout << "0" << h << ":" << "0" << m << ":" << seconds << endl;
}
else if(h >= 10 && m < 10 && seconds < 10){
    cout << h << ":" << "0" << m << ":" << "0" << seconds << endl; 
}
else if(h >= 10 && m >= 10 && seconds < 10){
    cout << h << ":" << m << ":" << "0" << seconds << endl;
}
else{
  cout << h << ":" << m << ":" << seconds << endl;  
}  
}
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  char caracter1 = s1[0];
  char caracter2 = s2[0];
  char caracter3 = s3[0];
  char caracter4 = s4[0];
  char caracter5 = s5[0];
  cout << caracter1 << caracter2 << caracter3 << caracter4 << caracter5 << endl ;
  if ( caracter1 == caracter5) {
    return "Hemos encontrado algo!";
  }
  else {
    return "Aun sin suerte";
  }
}

int exercise_10(int a, int b) {
if(a < 0 && b < 0){
  return 0;
}
else{
  int resa;
  int resb;
   resa = a + b;
   resb = (resa == 0)? 1:
   (int)log10(abs(resa)) + 1;
   return resa * resb;
}
}

string exercise_11(int number) {

if (number == 11235813){
    return "Se encontro a Fibonacci";
}
else{
    return "Esto no es de Fibonacci";
}
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
string a = "";
string b = "";
string c = "";
if(color4 == color1)
a = "1";
else(num4 == numb1){
    a = "1";
}
if(color4 == color2)
    b = "2";
else(num4 == numb2){
    b = "2";
}
if(color4 == color3)
    c = "3";
else(num4 == numb3){
    c = "3";
}
if(a == "1"){
    cout << 1 << endl;
}
if(b == "2"){
    cout << 2 << endl;
}
if(c == "3"){
    cout << 3 << endl;
}
}

string exercise_13(int age, int years_of_experience) {
if(age >= 18 && years_of_experience >= 0 && years_of_experience < 3){
    return "Project coordinator";
}
else if(age >= 18 && years_of_experience >= 3 && years_of_experience < 5){
    return "Project manager";
}
else if(age >= 18 && years_of_experience >= 5){
    return "Senior project manager";
}
else{
  return "Not eligible";
}
  return "";
}

string exercise_14(int number_of_docs) {
if(number_of_docs <= 0){
return "No se encontraron documentos";
}
else if(number_of_docs == 1){
return "Se encontro un documento";
}
else if (number_of_docs > 1){
return to_string (number_of_docs) + " documentos encontrados";
}
return "";
}

void exercise_15(int a, int b, int c) {
cout << "Los valores son: a = " << a << " b = " << b << " y c = " << c << endl;
cout << "Permutamos: a => b, b => c, c => a"<< endl;
cout << "Los valores despues de la permutacion son: a = " << c << " b = " << a << " c = " << b << endl;

}

void exercise_16(int debut, int fin) {

}