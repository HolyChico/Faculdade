<h1>Exercício - Verificação de vogais e consoantes </h1>

<form action="exercicio(7).php" method="post">
    <label> Digite uma letra : </label>
    <input type="text" name="A" >
    <br>

    <button type="submit">Enviar</button>
</form>

<?php

    $A = $_POST["A"] ?? '';
    $A = strtolower($A);
    $A = str_replace(" ", "", $A);
    $A = str_replace("ç", "c", $A);


   switch ($A) {
        case "a": echo ( "Vogal" ); break;
        case "e": echo ( "Vogal" ); break;
        case "i": echo ( "Vogal" ); break;
        case "o": echo ( "Vogal" ); break;
        case "u": echo ( "Vogal" ); break;
        case "": echo ""; break;
        default: echo "Consoante"; break;
   }