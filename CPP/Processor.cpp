#include <string>

using namespace std;

class Processor
{
    private:
    //Atribut
        string name;
        int price;

    public:
        //Constructor
        Processor(){};

        Processor(string name, int price)
        {
            this->name = name;
            this->price = price;
        }

        //GetSet for Name
        void setNama(string name)
        {
            this->name = name;
        }

        string getName()
        {
            return this->name;
        }

        //GetSet for Price
        void setPrice(int price)
        {
            this->price = price;
        }

        int getPrice()
        {
            return this->price;
        }

        //Desctructor
        ~Processor(){};

};