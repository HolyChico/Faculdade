<h1> Exercício 2 - Soma de números</h1>

<form action="exercicio(2).php" method="POST">
    <label> Digite um número:  </label>
    <input type="number" name="num1" min="1" > 
    <br>
    <button type="submit" > Enviar </button>

</form>

<?php
    
    $num1 = $_REQUEST['num1'] ?? '';
    $contador = 1;
    $soma = 0;

    while($contador <= $num1){
        $soma = $soma + $contador;
        $contador = $contador + 1;
    }

    echo "A soma de todos os números até $num1 é: $soma <br>";

?>