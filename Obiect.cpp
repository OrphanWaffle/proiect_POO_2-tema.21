#include "classe.h"
#include<fstream>
#include<string.h>
#include <typeinfo>

void exc(int a)
{
    try{
        if(a<0 || a>10) throw 1;
    }
    catch(int i)
    {
        cout<<"ERROR element necorespunzator";
        terminate();
    }
}

///CURSANT---------------------------------------------------------------------------------
Cursant::Cursant(){nume='\0'; program='\0'; prezentare=0;}
Cursant::Cursant(const string a,const string b,const int c)
{ nume=a; program=b; prezentare=c; }
Cursant::Cursant(const Cursant&c2)
{ nume=c2.nume; program=c2.program; prezentare=c2.prezentare; }
Cursant::~Cursant() {nume='\0'; program='\0'; prezentare=0;}

void Cursant :: operator =(const Cursant& c2)
{ nume=c2.nume; program=c2.program; prezentare=c2.prezentare; }
istream& operator >>(istream& in,Cursant& c1)
{
    cout<<"Nume cursant: ";
    in>>c1.nume;
    //in>>c1.program;
    cout<<"Prezentarea: ";
    in>>c1.prezentare;
    return in;
}
ostream& operator<<(ostream& out,const Cursant& c1)
{
    out<<"/-Cursantul :"<<c1.nume<<"  /-Program :"<<c1.program<<"  /-Prezentare :"<<c1.prezentare;
    return out;
}

void Cursant :: set_prog(const string a) { program=a; }
///ALGEBRA---------------------------------------------------------------------------------
Algebra::Algebra(){partial1_AL=0; partial2_AL=0; examen_AL=0; medie_AL=0;}
Algebra::Algebra(const int a,const int b,const int c,const int d)
{ partial1_AL=a; partial2_AL=b; examen_AL=c; medie_AL=d;}
Algebra::Algebra(const Algebra&a2)
{ partial1_AL=a2.partial1_AL;  partial2_AL=a2.partial2_AL;  examen_AL=a2.examen_AL; medie_AL=a2.medie_AL; }
Algebra::~Algebra() {partial1_AL=0;  partial2_AL=0;  examen_AL=0; medie_AL=0;}

void Algebra :: operator =(const Algebra& a2)
{ partial1_AL=a2.partial1_AL;  partial2_AL=a2.partial2_AL;  examen_AL=a2.examen_AL; medie_AL=a2.medie_AL; }
istream& operator >>(istream& in,Algebra& a1)
{
    cout<<"Algebra partial 1- ";
    in>>a1.partial1_AL;  exc(a1.partial1_AL);
    cout<<"Algebra partial 2- ";
    in>>a1.partial2_AL;  exc(a1.partial2_AL);
    cout<<"Algebra examen ";
    in>>a1.examen_AL;  exc(a1.examen_AL);
    return in;
}
ostream& operator <<(ostream& out,const Algebra& a1)
{
    out<<"ALGEBRA -"<<"/-Partial 1 :"<<a1.partial1_AL<<"  /-Partial 2 :"<<a1.partial2_AL<<"  /-Examen :"<<a1.examen_AL;
    return out;
}
void Algebra :: medie() { medie_AL=0.2f*partial1_AL+0.2f*partial2_AL+0.6f*examen_AL; }
///ANALIZA----------------------------------------------------------------------------------
Analiza::Analiza(){partial1_AN=0; partial2_AN=0; examen_AN=0; medie_AN=0;}
Analiza::Analiza(const int a,const int b,const int c,const int d)
{  partial1_AN=a;
   partial2_AN=b;
   examen_AN=c;
   medie_AN=d;
}
Analiza::Analiza(const Analiza&a2)
{ partial1_AN=a2.partial1_AN;  partial2_AN=a2.partial2_AN;  examen_AN=a2.examen_AN; medie_AN=a2.medie_AN;}
Analiza::~Analiza() {partial1_AN=0;  partial2_AN=0;  examen_AN=0; medie_AN=0;}

void Analiza :: operator =(const Analiza& a2)
{ partial1_AN=a2.partial1_AN;  partial2_AN=a2.partial2_AN;  examen_AN=a2.examen_AN; medie_AN=a2.medie_AN;}
istream& operator >>(istream& in,Analiza& a1)
{
    cout<<"Analiza partial 1- ";
    in>>a1.partial1_AN;  exc(a1.partial1_AN);
    cout<<"Analiza partial 2- ";
    in>>a1.partial2_AN;  exc(a1.partial2_AN);
    cout<<"Analiza examen - ";
    in>>a1.examen_AN;  exc(a1.examen_AN);
    return in;
}
ostream& operator <<(ostream& out,const Analiza& a1)
{
    out<<"ANALIZA -"<<"/-Partial 1 : "<<a1.partial1_AN<<"  /-Partial 2 : "<<a1.partial2_AN<<"  /-Examen : "<<a1.examen_AN;
    return out;
}
void Analiza :: medie(){ medie_AN=0.2f*partial1_AN+0.2f*partial2_AN+0.6f*examen_AN; }
///GEOMETRIE---------------------------------------------------------------------------------
Geometrie::Geometrie(){partial1_G=0; partial2_G=0; examen_G=0; medie_G=0;}
Geometrie::Geometrie(const int a,const int b,const int c,const int d)
{ partial1_G=a; partial2_G=b; examen_G=c; medie_G=d;}
Geometrie::Geometrie(const Geometrie&a2)
{ partial1_G=a2.partial1_G;  partial2_G=a2.partial2_G;  examen_G=a2.examen_G; medie_G=a2.medie_G;}
Geometrie::~Geometrie() {partial1_G=0;  partial2_G=0;  examen_G=0; medie_G=0;}

void Geometrie :: operator =(const Geometrie& a2)
{ partial1_G=a2.partial1_G;  partial2_G=a2.partial2_G;  examen_G=a2.examen_G; medie_G=a2.medie_G;}
istream& operator >>(istream& in,Geometrie& a1)
{
    cout<<"Geometrie partial 1- ";
    in>>a1.partial1_G;  exc(a1.partial1_G);
    cout<<"Geometrie partial 2- ";
    in>>a1.partial2_G;  exc(a1.partial2_G);
    cout<<"Geometrie examen - ";
    in>>a1.examen_G;  exc(a1.examen_G);
    return in;
}
ostream& operator <<(ostream& out,const Geometrie& a1)
{
    out<<"GEOMETRIE"<<"/-Partial 1 : "<<a1.partial1_G<<"  /-Partial 2 : "<<a1.partial2_G<<"  /-Examen : "<<a1.examen_G;
    return out;
}
void Geometrie :: medie(){medie_G=0.2f*partial1_G+0.2f*partial2_G+0.6f*examen_G;}
///PROGRAMARE--------------------------------------------------------------------------------
Programare::Programare(){partial1_P=0; partial2_P=0; examen_P=0; medie_P=0;}
Programare::Programare(const int a,const int b,const int c,const int d)
{ partial1_P=a; partial2_P=b; examen_P=c; medie_P=d;}
Programare::Programare(const Programare&a2)
{ partial1_P=a2.partial1_P;  partial2_P=a2.partial2_P;  examen_P=a2.examen_P; medie_P=a2.medie_P;}
Programare::~Programare() {partial1_P=0;  partial2_P=0;  examen_P=0; medie_P=0;}

void Programare :: operator =(const Programare& a2)
{ partial1_P=a2.partial1_P;  partial2_P=a2.partial2_P;  examen_P=a2.examen_P; medie_P=a2.medie_P;}
istream& operator >>(istream& in,Programare& a1)
{
    cout<<"Programare partial 1- ";
    in>>a1.partial1_P;  exc(a1.partial1_P);
    cout<<"Programare partial 2- ";
    in>>a1.partial2_P;  exc(a1.partial2_P);
    cout<<"Programare examen - ";
    in>>a1.examen_P;  exc(a1.examen_P);
    return in;
}
ostream& operator <<(ostream& out,const Programare& a1)
{
    out<<"PROGRAMARE -"<<"/-Partial 1 : "<<a1.partial1_P<<"  /-Partial 2 : "<<a1.partial2_P<<"  /-Examen : "<<a1.examen_P;
    return out;
}
void Programare :: medie () { medie_P=0.2f*partial1_P+0.2f*partial2_P+0.6f*examen_P; }
///FINANCIAR----------------------------------------------------------------------------------
Financiar::Financiar(){LP1_F=0; LP2_F=0; LP3_F=0; medie_F=0;}
Financiar::Financiar(const int a,const int b,const int c,const int d)
{ LP1_F=a; LP2_F=b; LP3_F=c; medie_F=d;}
Financiar::Financiar(const Financiar&a2)
{ LP1_F=a2.LP1_F;  LP2_F=a2.LP2_F;  LP3_F=a2.LP3_F; medie_F=a2.medie_F;}
Financiar::~Financiar() {LP1_F=0;  LP2_F=0;  LP3_F=0; medie_F=0;}

void Financiar :: operator =(const Financiar& a2)
{ LP1_F=a2.LP1_F;  LP2_F=a2.LP2_F;  LP3_F=a2.LP3_F; medie_F=a2.medie_F;}
istream& operator >>(istream& in,Financiar& a1)
{
    cout<<"Financiar lucrare practica 1- ";
    in>>a1.LP1_F;  exc(a1.LP1_F);
    cout<<"Financiar lucrare practica 2- ";
    in>>a1.LP2_F;  exc(a1.LP2_F);
    cout<<"Financiar lucrare practica 3- ";
    in>>a1.LP3_F;  exc(a1.LP3_F);
    return in;
}
ostream& operator <<(ostream& out,const Financiar& a1)
{
    out<<"FINANCIAR -"<<"/-Partial 1 : "<<a1.LP1_F<<"  /-Partial 2 : "<<a1.LP2_F<<"  /-Examen : "<<a1.LP3_F;
    return out;
}
void Financiar::medie()
{
    if(LP1_F==min(LP1_F,min(LP2_F,LP3_F))) {medie_F=0.5f*LP2_F+0.5*LP3_F; return;}
    if(LP2_F==min(LP1_F,min(LP2_F,LP3_F))) {medie_F=0.5f*LP1_F+0.5*LP3_F; return;}
    if(LP3_F==min(LP1_F,min(LP2_F,LP3_F))) {medie_F=0.5f*LP1_F+0.5*LP2_F; return;}
}
///RESURSE_UMANE-----------------------------------------------------------------------------
Resurse_Umane::Resurse_Umane(){LP1_RU=0; LP2_RU=0; LP3_RU=0; medie_RU=0;}
Resurse_Umane::Resurse_Umane(const int a,const int b,const int c,const int d)
{ LP1_RU=a; LP2_RU=b; LP3_RU=c; medie_RU=d;}
Resurse_Umane::Resurse_Umane(const Resurse_Umane&a2)
{ LP1_RU=a2.LP1_RU;  LP2_RU=a2.LP2_RU;  LP3_RU=a2.LP3_RU; medie_RU=a2.medie_RU;}
Resurse_Umane::~Resurse_Umane() {LP1_RU=0;  LP2_RU=0;  LP3_RU=0; medie_RU=0;}

void Resurse_Umane :: operator =(const Resurse_Umane& a2)
{ LP1_RU=a2.LP1_RU;  LP2_RU=a2.LP2_RU;  LP3_RU=a2.LP3_RU; medie_RU=a2.medie_RU;}
istream& operator >>(istream& in,Resurse_Umane& a1)
{
    cout<<"Resurse umane lucrare practica 1- ";
    in>>a1.LP1_RU;  exc(a1.LP1_RU);
    cout<<"Resurse umane lucrare practica 2- ";
    in>>a1.LP2_RU;  exc(a1.LP2_RU);
    cout<<"Resurse umane lucrare practica 3- ";
    in>>a1.LP3_RU;  exc(a1.LP3_RU);
    return in;
}
ostream& operator <<(ostream& out,const Resurse_Umane& a1)
{
    out<<"RESURSE UMANE -"<<"/-Partial 1 : "<<a1.LP1_RU<<"  /-Partial 2 : "<<a1.LP2_RU<<"  /-Examen : "<<a1.LP3_RU;
    return out;
}
void Resurse_Umane::medie()
{
    if(LP1_RU==min(LP1_RU,min(LP2_RU,LP3_RU))) {medie_RU=0.5f*LP2_RU+0.5*LP3_RU; return;}
    if(LP2_RU==min(LP1_RU,min(LP2_RU,LP3_RU))) {medie_RU=0.5f*LP1_RU+0.5*LP3_RU; return;}
    if(LP3_RU==min(LP1_RU,min(LP2_RU,LP3_RU))) {medie_RU=0.5f*LP1_RU+0.5*LP2_RU; return;}
}
///LIMBA ENGLEZA----------------------------------------------------------------------------
Engleza::Engleza(){LP1_EN=0; LP2_EN=0; LP3_EN=0; medie_EN=0;}
Engleza::Engleza(const int a,const int b,const int c,const int d)
{ LP1_EN=a; LP2_EN=b; LP3_EN=c; medie_EN=d;}
Engleza::Engleza(const Engleza&a2)
{ LP1_EN=a2.LP1_EN;  LP2_EN=a2.LP2_EN;  LP3_EN=a2.LP3_EN; medie_EN=a2.medie_EN;}
Engleza::~Engleza() {LP1_EN=0;  LP2_EN=0;  LP3_EN=0; medie_EN=0;}

void Engleza :: operator =(const Engleza& a2)
{ LP1_EN=a2.LP1_EN;  LP2_EN=a2.LP2_EN;  LP3_EN=a2.LP3_EN; medie_EN=a2.medie_EN;}
istream& operator >>(istream& in,Engleza& a1)
{
    cout<<"Engleza lucrare practica 1- ";
    in>>a1.LP1_EN;  exc(a1.LP1_EN);
    cout<<"Engleza lucrare practica 1- ";
    in>>a1.LP2_EN;  exc(a1.LP2_EN);
    cout<<"Engleza lucrare practica 1- ";
    in>>a1.LP3_EN;  exc(a1.LP3_EN);
    return in;
}
ostream& operator <<(ostream& out,const Engleza& a1)
{
    out<<"LIMBA ENGLEZA -"<<"/-Partial 1 : "<<a1.LP1_EN<<"  /-Partial 2 : "<<a1.LP2_EN<<"  /-Examen : "<<a1.LP3_EN;
    return out;
}
void Engleza::medie()
{
    if(LP1_EN==min(LP1_EN,min(LP2_EN,LP3_EN))) {medie_EN=0.5f*LP2_EN+0.5*LP3_EN; return;}
    if(LP2_EN==min(LP1_EN,min(LP2_EN,LP3_EN))) {medie_EN=0.5f*LP1_EN+0.5*LP3_EN; return;}
    if(LP3_EN==min(LP1_EN,min(LP2_EN,LP3_EN))) {medie_EN=0.5f*LP1_EN+0.5*LP2_EN; return;}
}
///LIMBA TURCA----------------------------------------------------------------------------
Turca::Turca(){LP1_TU=0; LP2_TU=0; LP3_TU=0; medie_TU=0;}
Turca::Turca(const int a,const int b,const int c,const int d)
{ LP1_TU=a; LP2_TU=b; LP3_TU=c; medie_TU=d;}
Turca::Turca(const Turca&a2)
{ LP1_TU=a2.LP1_TU;  LP2_TU=a2.LP2_TU;  LP3_TU=a2.LP3_TU; medie_TU=a2.medie_TU;}
Turca::~Turca() {LP1_TU=0;  LP2_TU=0;  LP3_TU=0; medie_TU=0;}

void Turca :: operator =(const Turca& a2)
{ LP1_TU=a2.LP1_TU;  LP2_TU=a2.LP2_TU;  LP3_TU=a2.LP3_TU; medie_TU=a2.medie_TU;}
istream& operator >>(istream& in,Turca& a1)
{
    cout<<"Turca lucrare practica 1- ";
    in>>a1.LP1_TU;  exc(a1.LP1_TU);
    cout<<"Turca lucrare practica 2- ";
    in>>a1.LP2_TU;  exc(a1.LP2_TU);
    cout<<"Turca lucrare practica 3- ";
    in>>a1.LP3_TU;  exc(a1.LP3_TU);
    return in;
}
ostream& operator <<(ostream& out,const Turca& a1)
{
    out<<"LIMBA TRUCA -"<<"/-Partial 1 : "<<a1.LP1_TU<<"  /-Partial 2 : "<<a1.LP2_TU<<"  /-Examen : "<<a1.LP3_TU;
    return out;
}
void Turca::medie()
{
    if(LP1_TU==max(LP1_TU,max(LP2_TU,LP3_TU))) {medie_TU=0.5f*LP2_TU+0.5*LP3_TU; return;}
    if(LP2_TU==max(LP1_TU,max(LP2_TU,LP3_TU))) {medie_TU=0.5f*LP1_TU+0.5*LP3_TU; return;}
    if(LP3_TU==max(LP1_TU,max(LP2_TU,LP3_TU))) {medie_TU=0.5f*LP1_TU+0.5*LP2_TU; return;}
}
///LEGISLATIE AUTO-----------------------------------------------------------------------
Legislatie_Auto::Legislatie_Auto(){LP1_LA=0; LP2_LA=0; LP3_LA=0; medie_LA=0;}
Legislatie_Auto::Legislatie_Auto(const int a,const int b,const int c,const int d)
{ LP1_LA=a; LP2_LA=b; LP3_LA=c; medie_LA=d;}
Legislatie_Auto::Legislatie_Auto(const Legislatie_Auto&a2)
{ LP1_LA=a2.LP1_LA;  LP2_LA=a2.LP2_LA;  LP3_LA=a2.LP3_LA; medie_LA=a2.medie_LA;}
Legislatie_Auto::~Legislatie_Auto() {LP1_LA=0;  LP2_LA=0;  LP3_LA=0; medie_LA=0;}

void Legislatie_Auto :: operator =(const Legislatie_Auto& a2)
{ LP1_LA=a2.LP1_LA;  LP2_LA=a2.LP2_LA;  LP3_LA=a2.LP3_LA; medie_LA=a2.medie_LA;}
istream& operator >>(istream& in,Legislatie_Auto& a1)
{
    cout<<"Legislatie Auto lucrare practica 1- ";
    in>>a1.LP1_LA;   exc(a1.LP1_LA);
    cout<<"Legislatie Auto lucrare practica 2- ";
    in>>a1.LP2_LA;   exc(a1.LP2_LA);
    cout<<"Legislatie Auto lucrare practica 3- ";
    in>>a1.LP3_LA;   exc(a1.LP3_LA);
    return in;
}
ostream& operator <<(ostream& out,const Legislatie_Auto& a1)
{
    out<<"LEGISLATIE AUTO -"<<"/-Partial 1 : "<<a1.LP1_LA<<"  /-Partial 2 : "<<a1.LP2_LA<<"  /-Examen : "<<a1.LP3_LA;
    return out;
}
void Legislatie_Auto::medie()
{
    if(LP1_LA==max(LP1_LA,max(LP2_LA,LP3_LA))) {medie_LA=0.5f*LP2_LA+0.5*LP3_LA; return;}
    if(LP2_LA==max(LP1_LA,max(LP2_LA,LP3_LA))) {medie_LA=0.5f*LP1_LA+0.5*LP3_LA; return;}
    if(LP3_LA==max(LP1_LA,max(LP2_LA,LP3_LA))) {medie_LA=0.5f*LP1_LA+0.5*LP2_LA; return;}
}
///SOFAT AUTO PRACTIC----------------------------------------------------------------------
Sofat_Auto_Practic::Sofat_Auto_Practic(){LP1_SAP=0; LP2_SAP=0; LP3_SAP=0; medie_SAP=0;}
Sofat_Auto_Practic::Sofat_Auto_Practic(const int a,const int b,const int c,const int d)
{ LP1_SAP=a; LP2_SAP=b; LP3_SAP=c; medie_SAP=d;}
Sofat_Auto_Practic::Sofat_Auto_Practic(const Sofat_Auto_Practic&a2)
{ LP1_SAP=a2.LP1_SAP;  LP2_SAP=a2.LP2_SAP;  LP3_SAP=a2.LP3_SAP; medie_SAP=a2.medie_SAP;}
Sofat_Auto_Practic::~Sofat_Auto_Practic() {LP1_SAP=0;  LP2_SAP=0;  LP3_SAP=0; medie_SAP=0;}

void Sofat_Auto_Practic :: operator =(const Sofat_Auto_Practic& a2)
{ LP1_SAP=a2.LP1_SAP;  LP2_SAP=a2.LP2_SAP;  LP3_SAP=a2.LP3_SAP; medie_SAP=a2.medie_SAP;}
istream& operator >>(istream& in,Sofat_Auto_Practic& a1)
{
    cout<<"Sofat auto practic lucrare practica 1- ";
    in>>a1.LP1_SAP;  exc(a1.LP1_SAP);
    cout<<"Sofat auto practic lucrare practica 2- ";
    in>>a1.LP2_SAP;  exc(a1.LP2_SAP);
    cout<<"Sofat auto practic lucrare practica 3- ";
    in>>a1.LP3_SAP;  exc(a1.LP3_SAP);
    return in;
}
ostream& operator <<(ostream& out,const Sofat_Auto_Practic& a1)
{
    out<<"SOFAT AUTO PRACTIC -"<<"/-Partial 1 : "<<a1.LP1_SAP<<"  /-Partial 2 : "<<a1.LP2_SAP<<"  /-Examen : "<<a1.LP3_SAP;
    return out;
}
void Sofat_Auto_Practic::medie()
{
    if(LP1_SAP==max(LP1_SAP,max(LP2_SAP,LP3_SAP)) && LP2_SAP==min(LP1_SAP,min(LP2_SAP,LP3_SAP)))
    { medie_SAP=LP3_SAP; return; }
    if(LP2_SAP==max(LP1_SAP,max(LP2_SAP,LP3_SAP)) && LP3_SAP==min(LP1_SAP,min(LP2_SAP,LP3_SAP)))
    { medie_SAP=LP1_SAP; return; }
    if(LP1_SAP==max(LP1_SAP,max(LP2_SAP,LP3_SAP)) && LP3_SAP==max(LP1_SAP,max(LP2_SAP,LP3_SAP)))
    { medie_SAP=LP2_SAP; return; }
}
///COMUNICARE NLP------------------------------------------------------------------------
Comunicare_NLP :: Comunicare_NLP(){partial1_C=0; partial2_C=0; examen_C=0; medie_C=0;}
Comunicare_NLP :: Comunicare_NLP(const int a,const int b,const int c,const int d)
{ partial1_C=a; partial2_C=b; examen_C=c; medie_C=d;}
Comunicare_NLP :: Comunicare_NLP(const Comunicare_NLP&a2)
{ partial1_C=a2.partial1_C;  partial2_C=a2.partial2_C;  examen_C=a2.examen_C; medie_C=a2.medie_C;}
Comunicare_NLP :: ~Comunicare_NLP() {partial1_C=0;  partial2_C=0;  examen_C=0; medie_C=0;}

void Comunicare_NLP :: operator =(const Comunicare_NLP& a2)
{ partial1_C=a2.partial1_C;  partial2_C=a2.partial2_C;  examen_C=a2.examen_C; medie_C=a2.medie_C;}
istream& operator >>(istream& in,Comunicare_NLP& a1)
{
    cout<<"Comunicare NLP Partial 1- ";
    in>>a1.partial1_C;  exc(a1.partial1_C);
    cout<<"Comunicare NLP Partial 2- ";
    in>>a1.partial2_C;  exc(a1.partial2_C);
    cout<<"Comunicare NLP Partial 3- ";
    in>>a1.examen_C;  exc(a1.examen_C);
    return in;
}
ostream& operator <<(ostream& out,const Comunicare_NLP& a1)
{
    out<<"COMUNICARE NLP -"<<"/-Partial 1 : "<<a1.partial1_C<<"  /-Partial 2 : "<<a1.partial2_C<<"  /-Examen : "<<a1.examen_C;
    return out;
}
void Comunicare_NLP::medie(){medie_C=0.2f*partial1_C+0.2f*partial2_C+0.6f*examen_C;}
///FINANTIST---------------------------------------------------------------------------------
Finantist::Finantist(){ nota_finantist=0; }
Finantist::~Finantist(){ nota_finantist=0; }

void Finantist :: operator =(const Finantist& a)
{
     nota_finantist=a.nota_finantist;
     ((Cursant&)*this)=((Cursant&)a);
     ((Algebra&)*this)=((Algebra&)a);
     ((Financiar&)*this)=((Financiar&)a);
}
istream& operator >>(istream& in,Finantist& a)
{
    in>>(Cursant&)a;
    in>>(Algebra&)a;
    in>>(Financiar&)a;
    return in;
}
ostream& operator <<(ostream& out,const Finantist& a)
{
    out<<(Cursant&)a<<endl;
    out<<(Algebra&)a<<endl;
    out<<(Financiar&)a<<endl;
    out<<"Nota finala al programului - "<<a.nota_finantist<<endl<<endl;
    return out;
}
void Finantist::medie()
{
    this->Algebra::medie();
    this->Financiar::medie();
    nota_finantist=(medie_AL+medie_F)/2;
}
void Finantist::repetare(competenta &x)
{
    if(nota_finantist>=3 && nota_finantist<5)
    {
        string a;
        cout<<"Vrea cursantul sa repete programul ? (d/n)";
        cin>>a;
        if(a=="d")
        {
            Finantist b;
            cin>>b;
            b.nume=this->nume;
            b.prezentare=this->prezentare+1;
            b.program=this->program;
            *this=b;
        }
        return;
    }
    if(nota_finantist<3) cout<<"Cursantul nu poate reface programul"<<endl;
    if(nota_finantist>=5 && nota_finantist<7)
    {
        x.comp="mica";
        x.nume=this->nume;
        return;
    }
    if(nota_finantist>=7 && nota_finantist<8)
    {
        x.comp="medie";
        x.nume=this->nume;
        return;
    }
    if(nota_finantist>=9 && nota_finantist<=10)
    {
        x.comp="mare";
        x.nume=this->nume;
        return;
    }
}
///MANAGER-----------------------------------------------------------------------------
Manager::Manager(){ nota_manager=0; }
Manager::~Manager(){ nota_manager=0; }

void Manager :: operator =(const Manager& a)
{
     nota_manager=a.nota_manager;
     ((Cursant&)*this)=((Cursant&)a);
     ((Resurse_Umane&)*this)=((Resurse_Umane&)a);
     ((Financiar&)*this)=((Financiar&)a);
     ((Engleza&)*this)=((Engleza&)a);
}
istream& operator >>(istream& in,Manager& a)
{
    in>>(Cursant&)a;
    in>>(Resurse_Umane&)a;
    in>>(Financiar&)a;
    in>>(Engleza&)a;
    return in;
}
ostream& operator <<(ostream& out,const Manager& a)
{
    out<<(Cursant&)a<<endl;
    out<<(Resurse_Umane&)a<<endl;
    out<<(Financiar&)a<<endl;
    out<<(Engleza&)a<<endl;
    out<<"Nota finala al programului - "<<a.nota_manager<<endl<<endl;
    return out;
}
void Manager::medie()
{
    this->Resurse_Umane::medie();
    this->Financiar::medie();
    this->Engleza::medie();
    nota_manager=(medie_RU+medie_F+medie_EN)/3;
}
void Manager::repetare(competenta &x)
{
    if(nota_manager>=3 && nota_manager<5)
    {
        string a;
        cout<<"Vrea cursantul sa repete programul ? (d/n)";
        cin>>a;
        if(a=="d")
        {
            Manager b;
            cin>>b;
            b.nume=this->nume;
            b.prezentare=this->prezentare+1;
            b.program=this->program;
            *this=b;
        }
        return;
    }
    if(nota_manager<3) cout<<"Cursantul nu poate reface programul"<<endl;
    if(nota_manager>=5 && nota_manager<7)
    {
        x.comp="mica";
        x.nume=this->nume;
        return;
    }
    if(nota_manager>=7 && nota_manager<8)
    {
        x.comp="medie";
        x.nume=this->nume;
        return;
    }
    if(nota_manager>=9 && nota_manager<=10)
    {
        x.comp="mare";
        x.nume=this->nume;
        return;
    }
}
///PROGRAMATOR-------------------------------------------------------------------------
Programator::Programator(){ nota_Programator=0; }
Programator::~Programator(){ nota_Programator=0; }

void Programator :: operator =(const Programator& a)
{
     nota_Programator=a.nota_Programator;
     ((Cursant&)*this)=((Cursant&)a);
     ((Algebra&)*this)=((Algebra&)a);
     ((Analiza&)*this)=((Analiza&)a);
     ((Geometrie&)*this)=((Geometrie&)a);
     ((Programare&)*this)=((Programare&)a);
     ((Engleza&)*this)=((Engleza&)a);
}
istream& operator >>(istream& in,Programator& a)
{
    in>>(Cursant&)a;
    in>>(Algebra&)a;
    in>>(Analiza&)a;
    in>>(Geometrie&)a;
    in>>(Programare&)a;
    in>>(Engleza&)a;
    return in;
}
ostream& operator <<(ostream& out,const Programator& a)
{
    out<<(Cursant&)a<<endl;
    out<<(Algebra&)a<<endl;
    out<<(Analiza&)a<<endl;
    out<<(Geometrie&)a<<endl;
    out<<(Programare&)a<<endl;
    out<<(Engleza&)a<<endl;
    out<<"Nota finala al programului - "<<a.nota_Programator<<endl<<endl;
    return out;
}
void Programator::medie()
{
    this->Algebra::medie();
    this->Analiza::medie();
    this->Geometrie::medie();
    this->Programare::medie();
    this->Engleza::medie();
    nota_Programator=(medie_AL+medie_AN+medie_G+medie_P+medie_EN)/6;
}
void Programator::repetare(competenta &x)
{
    if(nota_Programator>=3 && nota_Programator<5)
    {
        string a;
        cout<<"Vrea cursantul sa repete programul ? (d/n)";
        cin>>a;
        if(a=="d")
        {
            Programator b;
            cin>>b;
            b.nume=this->nume;
            b.prezentare=this->prezentare+1;
            b.program=this->program;
            *this=b;
        }
        return;
    }
    if(nota_Programator<3) cout<<"Cursantul nu poate reface programul"<<endl;
    if(nota_Programator>=5 && nota_Programator<7)
    {
        x.comp="mica";
        x.nume=this->nume;
        return;
    }
    if(nota_Programator>=7 && nota_Programator<8)
    {
        x.comp="medie";
        x.nume=this->nume;
        return;
    }
    if(nota_Programator>=9 && nota_Programator<=10)
    {
        x.comp="mare";
        x.nume=this->nume;
        return;
    }
}
///MANAGER ECHIPA DE PROGRAMATORI-----------------------------------------------------------
Manager_Echipa_Programatori::Manager_Echipa_Programatori(){ nota_MEP=0; }
Manager_Echipa_Programatori::~Manager_Echipa_Programatori(){ nota_MEP=0; }

void Manager_Echipa_Programatori :: operator =(const Manager_Echipa_Programatori& a)
{
     nota_MEP=a.nota_MEP;
     ((Manager&)*this)=((Manager&)a);
     ((Programare&)*this)=((Programare&)a);
     ((Comunicare_NLP&)*this)=((Comunicare_NLP&)a);
}
istream& operator >>(istream& in,Manager_Echipa_Programatori& a)
{
    in>>dynamic_cast<Manager&>(a);
    in>>dynamic_cast<Programare&>(a);
    in>>dynamic_cast<Comunicare_NLP&>(a);
    return in;
}
ostream& operator <<(ostream& out,const Manager_Echipa_Programatori& a)
{
    out<<dynamic_cast<const Manager&>(a)<<endl;
    out<<dynamic_cast<const Programare&>(a)<<endl;
    out<<dynamic_cast<const Comunicare_NLP&>(a)<<endl;
    out<<"Nota finala al programului - "<<a.nota_MEP<<endl<<endl;
    return out;
}
void Manager_Echipa_Programatori::medie()
{
    this->Manager::medie();
    this->Programare::medie();
    this->Comunicare_NLP::medie();
    nota_MEP=(medie_C+medie_P+nota_manager)/3;
}
void Manager_Echipa_Programatori::repetare(competenta &x)
{
    if(nota_MEP>=3 && nota_MEP<5)
    {
        string a;
        cout<<"Vrea cursantul sa repete programul ? (d/n)";
        cin>>a;
        if(a=="d")
        {
            Manager_Echipa_Programatori b;
            cin>>b;
            b.nume=this->nume;
            b.prezentare=this->prezentare+1;
            b.program=this->program;
            *this=b;
        }
        return;
    }
    if(nota_MEP<3) cout<<"Cursantul nu poate reface programul"<<endl;
    if(nota_MEP>=5 && nota_MEP<7)
    {
        x.comp="mica";
        x.nume=this->nume;
        return;
    }
    if(nota_MEP>=7 && nota_MEP<8)
    {
        x.comp="medie";
        x.nume=this->nume;
        return;
    }
    if(nota_MEP>=9 && nota_MEP<=10)
    {
        x.comp="mare";
        x.nume=this->nume;
        return;
    }
}
// ??? ovverride in >> atunci cand coincid cursuri in sub-programe
//      initializes de dua ori notele la respectuvele cursuri si se afiseaza de doua ori acelasi curs
//       ca si cand as face cin>> curs de doua ori la rand || sau cout<< curs de dou ori la rand
/*
Manager_Echipa_Programatori::Manager_Echipa_Programatori(){ nota_MEP=0; }
Manager_Echipa_Programatori::~Manager_Echipa_Programatori(){ nota_MEP=0; }

void Manager_Echipa_Programatori :: operator =(const Manager_Echipa_Programatori& a)
{
     nota_MEP=a.nota_MEP;
     ((Manager&)*this)=((Manager&)a);
     ((Programator&)*this)=((Programator&)a);
     ((Comunicare_NLP&)*this)=((Comunicare_NLP&)a);
}
istream& operator >>(istream& in,Manager_Echipa_Programatori& a)
{
    in>>dynamic_cast<Manager&>(a);
    in>>dynamic_cast<Programator&>(a);
    in>>dynamic_cast<Comunicare_NLP&>(a);
    return in;
}
ostream& operator <<(ostream& out,const Manager_Echipa_Programatori& a)
{
    out<<dynamic_cast<const Manager&>(a)<<endl;
    out<<dynamic_cast<const Programator&>(a)<<endl;
    out<<dynamic_cast<const Comunicare_NLP&>(a)<<endl;
    out<<"Nota finala al programului - "<<a.nota_MEP<<endl<<endl;
    return out;
}
*/
///SOFER--------------------------------------------------------------------------------------
sofer::sofer(){ nota_Sofer=0; }
sofer::~sofer(){ nota_Sofer=0; }

void sofer :: operator =(const sofer& a)
{
     nota_Sofer=a.nota_Sofer;
     ((Cursant&)*this)=((Cursant&)a);
     ((Legislatie_Auto&)*this)=((Legislatie_Auto&)a);
     ((Sofat_Auto_Practic&)*this)=((Sofat_Auto_Practic&)a);
}
istream& operator >>(istream& in,sofer& a)
{
    in>>(Cursant&)a;
    in>>(Legislatie_Auto&)a;
    in>>(Sofat_Auto_Practic&)a;
    return in;
}
ostream& operator <<(ostream& out,const sofer& a)
{
    out<<(Cursant&)a<<endl;
    out<<(Legislatie_Auto&)a<<endl;
    out<<(Sofat_Auto_Practic&)a<<endl;
    out<<"Nota finala al programului - "<<a.nota_Sofer<<endl<<endl;
    return out;
}
void sofer::medie()
{
    this->Legislatie_Auto::medie();
    this->Sofat_Auto_Practic::medie();
    nota_Sofer=(medie_LA+medie_SAP)/2;
}
void sofer::repetare(competenta &x)
{
    if(nota_Sofer>=3 && nota_Sofer<5)
    {
        string a;
        cout<<"Vrea cursantul sa repete programul ? (d/n)";
        cin>>a;
        if(a=="d")
        {
            sofer b;
            cin>>b;
            b.nume=this->nume;
            b.prezentare=this->prezentare+1;
            b.program=this->program;
            *this=b;
        }
        return;
    }
    if(nota_Sofer<3) cout<<"Cursantul nu poate reface programul"<<endl;
    if(nota_Sofer>=5 && nota_Sofer<7)
    {
        x.comp="mica";
        x.nume=this->nume;
        return;
    }
    if(nota_Sofer>=7 && nota_Sofer<8)
    {
        x.comp="medie";
        x.nume=this->nume;
        return;
    }
    if(nota_Sofer>=9 && nota_Sofer<=10)
    {
        x.comp="mare";
        x.nume=this->nume;
        return;
    }
}
///MANAGER ECHIPA DE TIRISTI------------------------------------------------------------------------
Manager_Echipa_Tiristi::Manager_Echipa_Tiristi(){ nota_MET=0; }
Manager_Echipa_Tiristi::~Manager_Echipa_Tiristi(){ nota_MET=0; }

void Manager_Echipa_Tiristi :: operator =(const Manager_Echipa_Tiristi& a)
{
     nota_MET=a.nota_MET;
     ((Manager&)*this)=((Manager&)a);
     ((Turca&)*this)=((Turca&)a);
     ((Legislatie_Auto&)*this)=((Legislatie_Auto&)a);
}
istream& operator >>(istream& in,Manager_Echipa_Tiristi& a)
{
    in>>(Manager&)a;
    in>>(Turca&)a;
    in>>(Legislatie_Auto&)a;
    return in;
}
ostream& operator <<(ostream& out,const Manager_Echipa_Tiristi& a)
{
    out<<(Manager&)a<<endl;
    out<<(Turca&)a<<endl;
    out<<(Legislatie_Auto&)a<<endl;
    out<<"Nota finala al programului - "<<a.nota_MET<<endl<<endl;
    return out;
}
void Manager_Echipa_Tiristi::medie()
{
    this->Manager::medie();
    this->Turca::medie();
    this->Legislatie_Auto::medie();
    nota_MET=(nota_manager+medie_TU+medie_LA)/3;
}
void Manager_Echipa_Tiristi::repetare(competenta &x)
{
    if(nota_MET>=3 && nota_MET<5)
    {
        string a;
        cout<<"Vrea cursantul sa repete programul ? (d/n)";
        cin>>a;
        if(a=="d")
        {
            Manager_Echipa_Tiristi b;
            cin>>b;
            b.nume=this->nume;
            b.prezentare=this->prezentare+1;
            b.program=this->program;
            *this=b;
        }
        return;
    }
    if(nota_MET<3) cout<<"Cursantul nu poate reface programul"<<endl;
    if(nota_MET>=5 && nota_MET<7)
    {
        x.comp="mica";
        x.nume=this->nume;
        return;
    }
    if(nota_MET>=7 && nota_MET<8)
    {
        x.comp="medie";
        x.nume=this->nume;
        return;
    }
    if(nota_MET>=9 && nota_MET<=10)
    {
        x.comp="mare";
        x.nume=this->nume;
        return;
    }
}
