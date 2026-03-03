<h1> Exercício 3 - Tabuada </h1>

<form action="exercicio(3).php" method="POST">
    <label> Digite um número:  </label>
    <input type="number" name="num1" min="1" > 
    <br>
    <button type="submit" > Enviar </button>

</form>

<?php
    
    $num1 = $_REQUEST['num1'] ?? '';
    $contador = 1;


    while($contador <= 10){
        $resultado = ($num1 * $contador);
        echo ("$num1  x $contador = $resultado <br>");

        $contador = $contador + 1;

    }

?>