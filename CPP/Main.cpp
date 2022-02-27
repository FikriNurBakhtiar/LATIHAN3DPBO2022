#include <iostream>
#include "PC.cpp"

using namespace std;

int main()
{
    PC personal;
    
    Processor processor = Processor("Intel i5", 7000000);
    Disk disk = Disk("SSD", 256, 400000);
    Ram ram = Ram(8, 3000000);

    personal.setProcessor(processor);
    personal.setDisk(disk);
    personal.setRam(ram);
    personal.setTotal(processor.getPrice(), disk.getPrice(), ram.getPrice());

    //Output
    cout << "Spesifikasi PC" << endl << endl;
    cout << "Processor Name     : " << personal.getProcessor().getName() << endl;
    cout << "Processor Price    : Rp." << personal.getProcessor().getPrice() << endl;
    cout << "Disk Type          : " << personal.getDisk().getType() << endl;
    cout << "Disk Size          : " << personal.getDisk().getCapacity() << " GB" << endl;
    cout << "Disk Price         : Rp." << personal.getDisk().getPrice() << endl;
    cout << "RAM size           : " << personal.getRam().getCapacity() << " GB" << endl;
    cout << "RAM Price          : Rp." << personal.getRam().getPrice() << endl << endl;
    cout << "Total Price        : Rp." << personal.getTotal() << endl;
    
}