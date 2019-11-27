#pragma once

#include <iostream>
#include <string.h>

using namespace std;

struct competenta
{
    string nume,comp;
};

class Cursant
{
    protected:
    string nume,program;
    int prezentare;
    public:
        Cursant();
        Cursant(const string,const string,const int);
        Cursant(const Cursant&);
        virtual ~Cursant();
        void operator =(const Cursant&);
        friend istream& operator >>(istream& in,Cursant&);
        friend ostream& operator <<(ostream& out,const Cursant&);
        void set_prog(const string);
        virtual void medie()=0;
        virtual void repetare(competenta&)=0;
};

class Algebra
{
    protected:
    int partial1_AL,partial2_AL,examen_AL,medie_AL;
    public:
        Algebra();
        Algebra(const int,const int,const int,const int);
        Algebra(const Algebra&);
        virtual ~Algebra();
        void operator =(const Algebra&);
        friend istream& operator >>(istream& in,Algebra&);
        friend ostream& operator <<(ostream& out,const Algebra&);
        virtual void medie();
};

class Analiza
{
    protected:
    int partial1_AN,partial2_AN,examen_AN,medie_AN;
    public:
        Analiza();
        Analiza(const int,const int,const int,const int);
        Analiza(const Analiza&);
        virtual ~Analiza();
        void operator =(const Analiza&);
        friend istream& operator >>(istream& in,Analiza&);
        friend ostream& operator <<(ostream& out,const Analiza&);
        virtual void medie();
};

class Geometrie
{
    protected:
    int partial1_G,partial2_G,examen_G,medie_G;
    public:
        Geometrie();
        Geometrie(const int,const int,const int,const int);
        Geometrie(const Geometrie&);
        virtual ~Geometrie();
        void operator =(const Geometrie&);
        friend istream& operator >>(istream& in,Geometrie&);
        friend ostream& operator <<(ostream& out,const Geometrie&);
        virtual void medie();
};

class Programare
{
    protected:
    int partial1_P,partial2_P,examen_P,medie_P;
    public:
        Programare();
        Programare(const int,const int,const int,const int);
        Programare(const Programare&);
        virtual ~Programare();
        void operator =(const Programare&);
        friend istream& operator >>(istream& in,Programare&);
        friend ostream& operator <<(ostream& out,const Programare&);
        virtual void medie();
};

class Financiar
{
    protected:
    int LP1_F,LP2_F,LP3_F,medie_F;
    public:
        Financiar();
        Financiar(const int,const int,const int,const int);
        Financiar(const Financiar&);
        virtual ~Financiar();
        void operator =(const Financiar&);
        friend istream& operator >>(istream& in,Financiar&);
        friend ostream& operator <<(ostream& out,const Financiar&);
        virtual void medie();
};

class Resurse_Umane
{
    protected:
    int LP1_RU,LP2_RU,LP3_RU,medie_RU;
    public:
        Resurse_Umane();
        Resurse_Umane(const int,const int,const int,const int);
        Resurse_Umane(const Resurse_Umane&);
        virtual ~Resurse_Umane();
        void operator =(const Resurse_Umane&);
        friend istream& operator >>(istream& in,Resurse_Umane&);
        friend ostream& operator <<(ostream& out,const Resurse_Umane&);
        virtual void medie();
};

class Engleza
{
    protected:
    int LP1_EN,LP2_EN,LP3_EN,medie_EN;
    public:
        Engleza();
        Engleza(const int,const int,const int,const int);
        Engleza(const Engleza&);
        virtual ~Engleza();
        void operator =(const Engleza&);
        friend istream& operator >>(istream& in,Engleza&);
        friend ostream& operator <<(ostream& out,const Engleza&);
        virtual void medie();
};

class Turca
{
    protected:
    int LP1_TU,LP2_TU,LP3_TU,medie_TU;
    public:
        Turca();
        Turca(const int,const int,const int,const int);
        Turca(const Turca&);
        virtual ~Turca();
        void operator =(const Turca&);
        friend istream& operator >>(istream& in,Turca&);
        friend ostream& operator <<(ostream& out,const Turca&);
        virtual void medie();
};

class Legislatie_Auto
{
    protected:
    int LP1_LA,LP2_LA,LP3_LA,medie_LA;
    public:
        Legislatie_Auto();
        Legislatie_Auto(const int,const int,const int,const int);
        Legislatie_Auto(const Legislatie_Auto&);
        virtual ~Legislatie_Auto();
        void operator =(const Legislatie_Auto&);
        friend istream& operator >>(istream& in,Legislatie_Auto&);
        friend ostream& operator <<(ostream& out,const Legislatie_Auto&);
        virtual void medie();
};

class Sofat_Auto_Practic
{
    protected:
    int LP1_SAP,LP2_SAP,LP3_SAP,medie_SAP;
    public:
        Sofat_Auto_Practic();
        Sofat_Auto_Practic(const int,const int,const int,const int);
        Sofat_Auto_Practic(const Sofat_Auto_Practic&);
        virtual ~Sofat_Auto_Practic();
        void operator =(const Sofat_Auto_Practic&);
        friend istream& operator >>(istream& in,Sofat_Auto_Practic&);
        friend ostream& operator <<(ostream& out,const Sofat_Auto_Practic&);
        virtual void medie();
};

class Comunicare_NLP
{
    protected:
    int partial1_C,partial2_C,examen_C,medie_C;
    public:
        Comunicare_NLP();
        Comunicare_NLP(const int,const int,const int,const int);
        Comunicare_NLP(const Comunicare_NLP&);
        virtual ~Comunicare_NLP();
        void operator =(const Comunicare_NLP&);
        friend istream& operator >>(istream& in,Comunicare_NLP&);
        friend ostream& operator <<(ostream& out,const Comunicare_NLP&);
        virtual void medie();
};

class Finantist : public virtual Cursant,public virtual Algebra,public virtual Financiar
{
    protected:
    int nota_finantist;
    public:
        Finantist();
        Finantist(const Finantist& a):Cursant(a),Algebra(a),Financiar(a)
        { nota_finantist=a.nota_finantist; }
        ~Finantist();
        void operator =(const Finantist&);
        friend istream& operator >>(istream& in,Finantist&);
        friend ostream& operator <<(ostream& out,const Finantist&);
        virtual void medie();
        virtual void repetare(competenta&);
};

class Manager : public virtual Cursant,public virtual Resurse_Umane,public virtual Financiar,public virtual Engleza
{
    protected:
    int nota_manager;
    public:
        Manager();
        Manager(const Manager& a):Cursant(a),Resurse_Umane(a),Financiar(a),Engleza(a)
        { nota_manager=a.nota_manager; }
        ~Manager();
        void operator =(const Manager&);
        friend istream& operator >>(istream& in,Manager&);
        friend ostream& operator <<(ostream& out,const Manager&);
        virtual void medie();
        virtual void repetare(competenta&);
};

class Programator : public virtual Cursant,public virtual Algebra,public virtual Analiza,public virtual Geometrie,public virtual Programare,public virtual Engleza
{
    protected:
    int nota_Programator;
    public:
        Programator();
        Programator(const Programator& a):Cursant(a),Algebra(a),Analiza(a),Geometrie(a),Programare(a),Engleza(a)
        { nota_Programator=a.nota_Programator; }
        ~Programator();
        void operator =(const Programator&);
        friend istream& operator >>(istream& in,Programator&);
        friend ostream& operator <<(ostream& out,const Programator&);
        virtual void medie();
        virtual void repetare(competenta&);
};

class Manager_Echipa_Programatori : public Manager,public Programare,public Comunicare_NLP
{
    protected:
    int nota_MEP;
    public:
        Manager_Echipa_Programatori();
        Manager_Echipa_Programatori(const Manager_Echipa_Programatori& a):Manager(a),Programare(a),Comunicare_NLP(a)
        { nota_MEP=a.nota_MEP; }
        ~Manager_Echipa_Programatori();
        void operator =(const Manager_Echipa_Programatori&);
        friend istream& operator >>(istream& in,Manager_Echipa_Programatori&);
        friend ostream& operator <<(ostream& out,const Manager_Echipa_Programatori&);
        void medie();
        void repetare(competenta&);
};

/*
class Manager_Echipa_Programatori : public virtual Manager,public virtual Programator,public Comunicare_NLP
{
    protected:
    int nota_MEP;
    public:
        Manager_Echipa_Programatori();
        Manager_Echipa_Programatori(const Manager_Echipa_Programatori& a):Manager(a),Programator(a),Comunicare_NLP(a)
        { nota_MEP=a.nota_MEP; }
        ~Manager_Echipa_Programatori();
        void operator =(const Manager_Echipa_Programatori&);
        friend istream& operator >>(istream& in,Manager_Echipa_Programatori&);
        friend ostream& operator <<(ostream& out,const Manager_Echipa_Programatori&);
};
*/
class sofer : public virtual Cursant,public virtual Legislatie_Auto,public virtual Sofat_Auto_Practic
{
    protected:
    int nota_Sofer;
    public:
        sofer();
        sofer(const sofer& a):Cursant(a),Legislatie_Auto(a),Sofat_Auto_Practic(a)
        { nota_Sofer=a.nota_Sofer; }
        ~sofer();
        void operator =(const sofer&);
        friend istream& operator >>(istream& in,sofer&);
        friend ostream& operator <<(ostream& out,const sofer&);
        virtual void medie();
        virtual void repetare(competenta&);
};

class Manager_Echipa_Tiristi : public Manager,public Turca,public Legislatie_Auto
{
    protected:
    int nota_MET;
    public:
        Manager_Echipa_Tiristi();
        Manager_Echipa_Tiristi(const Manager_Echipa_Tiristi& a):Manager(a),Turca(a),Legislatie_Auto(a)
        { nota_MET=a.nota_MET; }
        ~Manager_Echipa_Tiristi();
        void operator =(const Manager_Echipa_Tiristi&);
        friend istream& operator >>(istream& in,Manager_Echipa_Tiristi&);
        friend ostream& operator <<(ostream& out,const Manager_Echipa_Tiristi&);
        void medie();
        void repetare(competenta&);
    };
