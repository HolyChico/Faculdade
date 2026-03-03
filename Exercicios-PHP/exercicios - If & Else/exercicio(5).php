<h1> Exercício 5 - Par ou ímpar </h1>

<form action="exercicio(5).php" method="POST">
    <label> Par ou Impar </label>
    <input type="number" name="num"> 
    <br>
    
    <button type="submit" > Enviar </button>

</form>

<?php // Exercício 5
    
    $num = $_REQUEST['num'] ?? '';

    if ( ($num %2) == 0 ) {
        print "$num é par";
    }
    else{
        print "$num é impar";
    }

?>        