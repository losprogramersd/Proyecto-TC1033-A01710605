<<<<<<< HEAD
#ifndef CONTENIDO_H
#define CONTENIDO_H
#include <string>
#include <iostream>

using namespace std;

class Contenido
{
    public:
        Contenido();
        virtual ~Contenido();
		        virtual string printInfo() = 0;

                //Setters
                void setNombre(string);
        void setGenero(string);
        void setId(int);
        void setDuracion(int);

		        //Getters
        string getNombre();
        string getGenero();
        int getId();
        int getDuracion();

    protected:
        int id, Duracion;
		        string nombre, Genero;

    private:
};

=======
#ifndef CONTENIDO_H
#define CONTENIDO_H
#include <string>
#include <iostream>

using namespace std;

class Contenido
{
    public:
        Contenido();
        virtual ~Contenido();
		        virtual string printInfo() = 0;

                //Setters
                void setNombre(string);
        void setGenero(string);
        void setId(int);
        void setDuracion(int);

		        //Getters
        string getNombre();
        string getGenero();
        int getId();
        int getDuracion();

    protected:
        int id, Duracion;
		        string nombre, Genero;

    private:
};

>>>>>>> aa2b453f243a3d9c06057fa3fd271c3df9b9c56b
#endif 