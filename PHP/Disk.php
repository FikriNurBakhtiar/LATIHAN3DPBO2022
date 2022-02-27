<?php
    class Disk
    {
        private $type;
        private $capacity;
        private $price;

        public function __construct($type, $capacity, $price){
            $this->type = $this;
            $this->capacity = $capacity;
            $this->price = $price;
        }

        //GetSet for Type
        public function setType($type)
        {
            $this->type = $type;
        }

        public function getType()
        {
            return $this->type;
        }

        //GetSet for Capacity
        public function setCapacity($capacity)
        {
            $this->capacity = $capacity;
        }

        public function getCapacity()
        {
            return $this->capacity;
        }

        //GetSet for Price
        public function setPrice($price)
        {
            $this->price = $price;
        }

        function getPrice()
        {
            return $this->price;
        }
    }
?>