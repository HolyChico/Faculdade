<h1>Exercício 1 - Número positivo ou negativo</h1>

<form action="exercicio(1).php" method="POST">
    <label> Número 1 </label>
    <input type="number" name="num1">

    <button type="submit"> Enviar </button>

</form>

<?php
    $num1 = $_REQUEST['num1'];

    if($num1 > 0){
        print ("$num1 é positivo ");
    }else{
        print("$num1 é negativo");
    }

?>