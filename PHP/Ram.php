<?php
    class Ram
    {
        private $capacity;
        private $price;

        //GetSet for Capacity
        public function setCapacity($capacity)
        {
            $this->capacity = $capacity;
            $this->price = $price;
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

        public function getPrice()
        {
            return $this->price;
        }
    }
?>