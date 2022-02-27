<?php
    include "Processor.php";
    include "Disk.php";
    include "Ram.php";
    class PC
    {
        private $processor;
        private $disk;
        private $ram;
        private $totalprice;

        public function __construct()
        {
            $this->processor = new Processor();
            $this->disk = new Disk();
            $this->ram = new Ram();
            $this->totalprice = $totalprice;
        }


    }

   
?>