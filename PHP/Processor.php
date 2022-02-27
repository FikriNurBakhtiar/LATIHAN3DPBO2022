<?php

    class Processor
    {
        private $name;
        private $price;

        public function __construct($name, $price){
            $this->name = $name;
            $this->price = $name;
        }

        //GetSet for Name
        public function setName($name)
        {
            $this->name = $name;
        }

        public function getName()
        {
            return $this->name;
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