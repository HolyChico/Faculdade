<h1> Exercício 2 - Verificação de idade </h1>

<form action="exercicio(2).php" method="POST">
    <label> IDADE </label>
    <input type="number" name="num1" min="1" >

    <button type="submit"> Enviar </button>

</form>

<?php
    $num1 = $_REQUEST['num1'];

    if($num1 > 18){
        print ("$num1 é adulto ");
    }elseif($num1 > 12 ){
        print("$num1 é adolescente");
    }else{
        print("$num1 é criança");
    }
?>