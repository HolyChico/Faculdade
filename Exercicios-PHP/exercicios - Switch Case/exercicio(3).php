<h1>Exercício 3 - Meses do ano </h1>

<form action="exercicio(3).php" method="post">
    <label> Digite o mês (de 1 a 12) </label>
    <input type="number" name="mes" min="1" max="12">
    <br>
    <button type="submit">Enviar</button>
</form>

<?php 
   $mes = $_POST["mes"] ?? "";

   switch ($mes) {
        case "1": echo "Janeiro"; break;
        case "2": echo "Fevereiro"; break;
        case "3": echo "Março"; break;
        case "4": echo "Abril"; break;
        case "5": echo "Maio"; break;
        case "6": echo "Junho"; break;
        case "7": echo "Julho"; break;
        case "8": echo "Agosto"; break;
        case "9": echo "Setembro"; break;
        case "10": echo "Outubro"; break;
        case "11": echo "Novembro"; break;
        case "12": echo "Dezembro"; break;
        case "": echo ""; break;
        default: echo "Mês inválido"; break;
   }