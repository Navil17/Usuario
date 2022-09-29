#include<iostream>
using std::endl;
using std::cin;
using std::cout;

#include<string>
using std::string;


class Usuario{

    public:
        Usuario(string mi_nombre,string mi_email, string mi_contrasenia,string mi_fecha_nacimiento,string mi_nacionalidad, int mi_edad){
            while(mi_edad < 18){
                cout<<"No puede crear un usuario en esta plataforma. Necesita ser mayor de edad"<<endl;
                exit(0);
               
                
           
               
            
            }
             while(mi_contrasenia.length() < 8){
                    cout<<"Contrasena muy corta. Tiene que tener mas de 8 caracteres"<<endl;
                    cout<<"Favor ingrese una contrasena que sea valida"<<endl;
                    cin>>mi_contrasenia;

                    
                }
                    nombre=mi_nombre;
                    email = mi_email;
                    contrasenia = mi_contrasenia;
                    fecha_nacimiento=mi_fecha_nacimiento;
                    nacionalidad=mi_nacionalidad;
                    edad = mi_edad;

        }
        
        void set_email(string nuevo_email){
            email=nuevo_email;
        }

        string get_email(){
            return email;
        }


        void set_nombre(string nuevo_nombre){
            nombre = nuevo_nombre;
        }

        string get_nombre(){
            return nombre;
        }

        void set_contrasenia(string nueva_contrasenia){
            contrasenia = nueva_contrasenia;
        }
        string get_contrasenia(){
            return contrasenia;
        }
         
         void set_nacionalidad(string nueva_nacionalidad){
            nacionalidad=nueva_nacionalidad;
         }
         string get_nacionalidad(){
            return nacionalidad;
         }

         void set_fecha_nacimiento(string nueva_fecha_nacimiento){
            fecha_nacimiento=nueva_fecha_nacimiento;
         }
         string get_fecha_nacimiento(){
            return fecha_nacimiento;
         }
         void set_edad(int nueva_edad){
            edad=nueva_edad;
         }
         int get_edad(){
            return edad;
         }




    private:
        string nombre, email, contrasenia;
        string fecha_nacimiento;
        string nacionalidad;
        int edad;

};


int main(){

    Usuario usr1("Navil","navilaleman@gmail.com","1234","17 de noviembre 1996","Aleman",25);
    cout<<"El nombre del usuario 1 es: "<<usr1.get_nombre()<<endl;
    cout<<"El correo del usuario 1 es: "<<usr1.get_email()<<endl;
    cout<<"La contrasena del usuario 1 es: "<<usr1.get_contrasenia()<<endl;
    cout<<"Fecha de nacimiento del usuario 1 es: "<<usr1.get_fecha_nacimiento()<<endl;
    cout<<"Nacionalidad del usuario 1 es: "<<usr1.get_nacionalidad()<<endl;
    cout<<"Edad del usuario es: "<<usr1.get_edad()<<endl;

    

    



    return 0;
}