import Java.util.*;

public class Processor {

    private String name;
    private int price;

    public Processor(String name, int price) {
        this.setName(name);
        this.setPrice(price);
    }

    public Processor() {
    }

    public void setProcessor(String name) {
        this.name = name;
    }

    public String getProcessor() {
        return this.name;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public int getPrice() {
        return this.price;
    }
}
