class Ram
{
    private:
        //Atribute
        int capacity;
        int price;

    public:
        //Constructor
        Ram(){};

        Ram(int capacity, int price)
        {
            this->capacity = capacity;
            this->price = price;
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

        //Desctruction
        ~Ram(){};
};