<h1>Exercício - Escolha de cor </h1>

<form action="exercicio(8).php" method="post">
    <label> Digite uma cor : (amarelo, azul ou vermelho) </label>
    <input type="text" name="A" >
    <br>

    <button type="submit">Enviar</button>
</form>

<?php

    $A = $_POST["A"] ?? '';
    $A = strtolower($A);
    $A = str_replace(" ", "", $A);

   switch ($A) {
        case "vermelho": echo ('<p style="color: red;"> Este é um texto vermelho.</p>'); break;
        
        case "amarelo": echo ('<p style="color: yellow;"> Este é um texto amarelo.</p>'); break;
        
        case "azul": echo ('<p style="color: blue;"> Este é um texto azul.</p>'); break;


        case "": echo ""; break;
        default: echo "inválido"; break;
   }