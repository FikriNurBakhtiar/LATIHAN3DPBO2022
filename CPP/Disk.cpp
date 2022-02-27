#include <string>

using namespace std;

class Disk
{
    private:
        //Atribute
        string type;
        int capacity;
        int price;

    public:
        //Constructor
        Disk(){}

        Disk(string type, int capacity, int price)
        {
            this->type = type;
            this->capacity = capacity;
            this->price = price;
        }

        //GetSet for Type
        void setType(string type)
        {
            this->type = type;
        }

        string getType()
        {
            return this->type;
        }

        //GetSet for Capacity
        void setCapacity(int capacity)
        {
            this->capacity = capacity;
        }

        int getCapacity()
        {
            return this->capacity;
        }

        //GetSet For Price 
        void setPrice(int price)
        {
            this->price = price;
        }

        int getPrice()
        {
            return this->price;
        }

        //Desctructor
        ~Disk(){};
};