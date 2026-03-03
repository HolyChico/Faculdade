<h1> Exercício 4 - Contagem regressiva </h1>

<form action="exercicio(4).php" method="POST">
    <label> Digite um número:  </label>
    <input type="number" name="num1" min="1" > 
    <br>
    <button type="submit" > Enviar </button>

</form>

<?php
    
    $num1 = $_REQUEST['num1'] ?? '0';
    
    do{
        echo( "$num1 <br>");
        $num1 = $num1 - 1;
    } while($num1 >= 0);

    echo("Fim da contagem!");

?>