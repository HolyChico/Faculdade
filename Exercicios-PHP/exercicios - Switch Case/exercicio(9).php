<h1>Exercício - Classificação de notas (numéricas)</h1>

<form action="exercicio(9).php" method="post">
    <label> Digite sua nota: ( 0 - 10 ) </label>
    <input type="number" name="A" min="0" max="10" step="1" >
    <br>

    <button type="submit">Enviar</button>
</form>

<?php

    $A = $_POST["A"] ?? '';

   switch ($A) {
        case 10: echo "Perfeito"; break;
        case 9: echo "Muito bom"; break;
        case 8: echo "Muito bom"; break;
        case 7: echo "Aprovado"; break;    
        case 6: echo "Aprovado"; break;
        case 5: echo "Recuperação"; break;
        case 4: echo "Recuperação"; break;
        case 3: echo "Reprovado"; break;
        case 2: echo "Reprovado"; break;
        case 1: echo "Reprovado"; break;
        case 0: echo "Reprovado"; break;

        case "": echo ""; break;
        default: echo "inválido"; break;
   }

