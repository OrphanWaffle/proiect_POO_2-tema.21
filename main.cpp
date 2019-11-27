#include <iostream>
#include <typeinfo>
#include "classe.h"

using namespace std;

void afisare(Cursant **v,int n)
{
    for(int i=0;i<n;i++)
    {

        if (typeid(*v[i]) == typeid(Finantist)) cout<<*dynamic_cast<Finantist*>(v[i]);
        if (typeid(*v[i]) == typeid(Manager)) cout<<*dynamic_cast<Manager*>(v[i]);
        if (typeid(*v[i]) == typeid(Programator)) cout<<*dynamic_cast<Programator*>(v[i]);
        if (typeid(*v[i]) == typeid(Manager_Echipa_Programatori)) cout<<*dynamic_cast<Manager_Echipa_Programatori*>(v[i]);
        if (typeid(*v[i]) == typeid(sofer)) cout<<*dynamic_cast<sofer*>(v[i]);
        if (typeid(*v[i]) == typeid(Manager_Echipa_Tiristi)) cout<<*dynamic_cast<Manager_Echipa_Tiristi*>(v[i]);
    }
}

void citire(Cursant **v,int n)
{
    int x;
    for(int i=0;i<n;i++)
    {
        cout<<"Ce program va urma cursantul "<<i<<" - ";
        cin>>x;
        switch (x)
        {
        case 1:
            v[i]=new Finantist;
            v[i]->set_prog("Finantist");
            cin>>*dynamic_cast<Finantist*>(v[i]);
            break;
        case 2:
            v[i]=new Manager;
            v[i]->set_prog("Manager");
            cin>>*dynamic_cast<Manager*>(v[i]);
            break;
        case 3:
            v[i]=new Programator;
            v[i]->set_prog("Programator");
            cin>>*dynamic_cast<Programator*>(v[i]);
            break;
        case 4:
            v[i]=new Manager_Echipa_Programatori;
            v[i]->set_prog("Manager_Echipa_Programatori");
            cin>>*dynamic_cast<Manager_Echipa_Programatori*>(v[i]);
            break;
        case 5:
            v[i]=new sofer;
            v[i]->set_prog("sofer");
            cin>>*dynamic_cast<sofer*>(v[i]);
            break;
        case 6:
            v[i]=new Manager_Echipa_Tiristi;
            v[i]->set_prog("Manager_Echipa_Tiristi");
            cin>>*dynamic_cast<Manager_Echipa_Tiristi*>(v[i]);
            break;
        }
    }
    cout<<endl;
}

int parcurgere(Cursant **v,int n,competenta *c)
{
    int a=0;
    for(int i=0;i<n;i++)
    {
        c[a].nume=c[a].comp="0";
        v[i]->medie();
        v[i]->repetare(c[a]);
        if(c[a].comp!="0") a++;
    }
    return a;
}


void com(competenta *c,int a)
{
    int mare=0,medie=0,mica=0;
    for(int i=0;i<a;i++)
    {
        if(c[i].comp=="mica") mica++;
        if(c[i].comp=="medie") medie++;
        if(c[i].comp=="mare") mare++;
    }
    cout<<"nr de competente mic este"<<mica<<endl;
    cout<<"nr de competente medii este"<<medie<<endl;
    cout<<"nr de competente mari este"<<mare<<endl;
}

int main()
{
    /*
    Cursant **v=new Cursant*;
    *v=new Manager_Echipa_Programatori;
    cin>>*dynamic_cast<Manager_Echipa_Programatori*>(*v);
    cout<<*dynamic_cast<Manager_Echipa_Programatori*>(*v);
    */
    int n,nr_max,a;
    cout<<"Numarul maxim de studenti este ";
    cin>>nr_max;
    cout<<"Numarl de studenti veniti ";
    cin>>n;
    try { if(n>nr_max) throw n; }
    catch(int x)
    {
        cout<<"ERROR -- Numarul de studenti veniti "<<x<<" depaseste numarul maxim de studenti permis "<<nr_max<<endl;
        return 0;
    }
    cout<<"1--Finantist \n2--Manager \n3--Programator \n4--Manager echipa programatori \n5--sofer \n6--Manager echipa de tiristi \n";
    Cursant **v=new Cursant*[n];
    citire(v,n);
    cout<<endl;
    competenta *c=new competenta[n];
    a=parcurgere(v,n,c);
    afisare(v,n);
    com(c,a);
    return 0;
}
