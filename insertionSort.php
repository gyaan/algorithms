<?php

function insertionSort($array){
    $length = count($array);

    for($j=1;$j<$length;$j++){
        $key = $array[$j];
        $i=$j-1;
        while($i>=0 && $array[$i]>$key){
            $array[$i+1]=$array[$i];
            $array[$i]=$key;
            $i--;
        }
    }
    return $array;
}

$array = range(0, 100);
shuffle($array);//array(3, 0, 1, 8, 7, 2, 5, 4, 9, 6);

$array=insertionSort($array);
print_r($array);

?>
