
class personne {
private:
   string nom;
   string prenom;
   date dtn;

public:
	personne(){};
	personne(string n ,string p , date dn){ 
	this->nom = n;
	this->prenom-> = p;
	this->dtn = dn;
	};
    //getters and setters of personne
	
	  public virtual string polym()
        {
            return "le nom est :" + this->Nom + "\nle prenom est :" + this->Prenom + "\ndate de naissance :" + this->dtn; 
        }
       
};	
	

class Employe :public personne 
    {
        private double Salaire;

        public Employe(string nom, string prenom, DateTime dtn, double salaire) : personne(nom, prenom, dtn)
        {
            this.Salaire = salaire;
        }

        //getters and setters of Employé

       
        public  string polym()
        {
           return Employe.polym()+"\nle salaire est :" + this.Salaire;  
        }
        
       
    }

   
    class Chef :public Employe
    {
        private string service;
        public Chef(string nom, string prenom, DateTime dtn, double salaire, string service) : Employe(nom, prenom, dtn,salaire)
        {
            this.service = service;
        }
      
        public  string polym()
        {
            return "le service est :" + this.service + Employe.polym();
        }
    }
    
     class Directeur :public Chef
    {
        private string Societe;
        public Directeur(string nom,string prenom, DateTime dtn, double salaire ,string service,string societé) : Chef(nom, prenom, dtn, salaire,service)
        {
            this.Societe = societe;
        }

       
        public  string polym()
        {
            return Chef.polym()+"\nle nom de societé"+this.Societe;
        }
    }
    void main() {
          personne[] p = new personne[2];
            p[0] = new Employé("zakariae", "elhajri", 12 / 07 / 1966, 3000);
            p[1] = new Employé("abdo", "pas", 12 / 07 / 2000, 11000);
            p[0].polym();

    }
  