<h1> Exercício - Classificação de idade </h1>

<form action="exercicio(6).php" method="post">
    <label> Digite uma faixa etária :  ( crianca, adolescente, adulto, idoso ) </label>
    <input type="text" name="A" >
    <br>


    <button type="submit">Enviar</button>
</form>

<?php

    $A = $_POST["A"] ?? '';
    $A = strtolower($A);
    $A = str_replace(" ", "", $A);
    $A = str_replace("-", "", $A);
    $A = str_replace("ç", "c", $A);


   switch ($A) {
        case "crianca": echo ( "entre 0 a 12 anos" ); break;
        case "adolescente": echo ( "entre 12 a 18 anos" ); break;
        case "adulto": echo ( "entre 18 a 65 anos" ); break;
        case "idoso": echo ( "de 65 pra cima" ); break;

        case "": echo ""; break;
        default: echo "inválido"; break;
   }