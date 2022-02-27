#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"

class PC
{
    private:
        //Atribute
        Processor processor;
        Disk disk;
        Ram ram;
        int totalprice;

    public:
        //Constructor
        PC(){};

        PC(Processor processor, Disk disk, Ram ram, int totalPrice)
        {
            this->processor = processor;
            this->disk = disk;
            this->ram = ram;
            this->totalprice = totalPrice;
        }

        //GetSet for Processor
        void setProcessor(Processor processor)
        {
            this->processor = processor;
        }

        Processor getProcessor()
        {
            return this->processor;
        }

        //GetSet For Disk
        void setDisk(Disk disk)
        {
            this->disk = disk;
        }

        Disk getDisk()
        {
            return this->disk;
        }

        //GetSet for Ram
        void setRam(Ram ram)
        {
            this->ram = ram;
        }

        Ram getRam()
        {
            return this->ram;
        }

        //GetSet for Total Price
        void setTotal(int processorPrice, int diskPrice, int ramPrice)
        {
            this->totalprice = processorPrice + diskPrice + ramPrice;
        }

        int getTotal()
        {
            return this->totalprice;
        }

        //Destructor
        ~PC(){}
};