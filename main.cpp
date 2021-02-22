#include <QCoreApplication>
#include <iostream>
#include <QDebug>
#include <array>
//namespaces std nos ahorra hacer mapeos abajo, como este
// std::cout << "Hello" << std::endl;
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //mejor usar qInfo o demas qCosas que nos va a tener todo mas organizado y con mas funcionalidades
    /*cout << "Hello" << endl << flush;
    int age;
    cin >> age;
    qInfo() << "Has metido: " << age;
    //ceer se usa para sacar errores porque algunas terminales lo ponen de color rojo, por ejemplo
    cerr << "Error";
    qDebug() << "Debug"; //Nos da info para debugear y no para el usuario
    qCritical() << "Critical"; //Nos da info de partes criticas
    qFatal("CRASH !!"); // Para todo, la app acaba, se usa cuando algo falla en plan que hay un string donde un entero*/

    //int age=0;
    //qInfo() << "Mete tu edad:";
    //cin >> age;
    /*if(age==0) qFatal("No has metido un entero"); //Si es solo una cosa se mete todo en una linea sin corchetes
    qInfo() << "Has metido: " << age;
    if(age<18){
        qInfo() << "Eres menor!";
    }else if (age>120) {
        qCritical() << "No puedes tener esta edad?";
    }else{
        qInfo() << "Eres adulto";
    }
    //ternario
    age==22 ? qInfo("Tienes mi edad"):qInfo("No tienes mi edad");*/

    //swich
    /*switch (age) {
    case 0:
        qFatal("CRash!");
        break;
    default:
        qInfo() << "OK";
        break;
    }
    qInfo()<<"Fin";*/

    //Do while
    //int start=0;
    //int max=10;
    /*int i = start;
    while(i<max){
        qInfo()<<"W-" <<i;
        i++;
    }
    i=60;
    //OJO con este que la primera se la traga sea cierto o falso y luego ya si ve que no se sale
    do{
        qInfo()<<"D-" <<i;
        i++;
    }while(i<max);*/

    //For loop
    /*int max=0;
    qInfo() << "Mete max:";
    cin >> max;
    for(int i=0; i<max; i++){
        qInfo()<<"i= "<<i;
    }*/
    array<int,4> ages = {12,22,32,42};
    for(int i=0; i<ages.size(); i++){
        qInfo()<<"edad= "<<ages[i] << "o: " << ages.at(i);
    }

    return a.exec();
}
