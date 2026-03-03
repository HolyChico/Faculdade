<h1> Exercício 5 - Fatorial </h1>

<form action="exercicio(5).php" method="POST">
    <label> Digite um número:  </label>
    <input type="number" name="num1" min="1" > 
    <br>
    <button type="submit" > Enviar </button>

</form>

<?php
    
    $numero = $_REQUEST['num1'] ?? '0';
    $fatorial = 1;
    
    for ($i = 1; $i <= $numero; $i++) {
    $fatorial *= $i;
    }

    echo "O fatorial de $numero é: $fatorial\n";

?>