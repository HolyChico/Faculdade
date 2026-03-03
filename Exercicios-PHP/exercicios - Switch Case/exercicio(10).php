<h1>Exercício - Verificação de meses com quantidade de dias</h1>

<form action="exercicio(10).php" method="post">
    <label> Digite o número do mês : </label>
    <input type="number" name="A" min="1" max="12" required>
    <br>

    <button type="submit">Enviar</button>
</form>

<?php

    $A = $_POST["A"] ?? '';

   switch ($A) {
        case "1": echo "Janeiro";
        echo "<br> Tem 31 dias";
        break;

        case "2": echo "Fevereiro"; 
        echo "<br> Tem 28 ou 29 dias";
        break;

        case "3": echo "Março"; 
        echo "<br> Tem 31 dias";
        break;

        case "4": echo "Abril"; 
        echo "<br> Tem 30 dias";
        break;

        case "5": echo "Maio"; 
        echo "<br> Tem 31 dias";
        break;
        
        case "6": echo "Junho"; 
        echo "<br> Tem 30 dias";
        break;

        case "7": echo "Julho"; 
        echo "<br> Tem 30 dias";
        break;

        case "8": echo "Agosto"; 
        echo "<br> Tem 31 dias";
        break;

        case "9": echo "Setembro"; 
        echo "<br> Tem 30 dias";
        break;

        case "10": echo "Outubro"; 
        echo "<br> Tem 31 dias";
        break;

        case "11": echo "Novembro"; 
        echo "<br> Tem 30 dias";
        break;

        case "12": echo "Dezembro"; 
        echo "<br> Tem 31 dias";
        break;

        case "": echo ""; break;
        default: echo "Consoante"; break;
   }
