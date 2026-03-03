<h1> Exercício 2 - Nota Escolar </h1>

<form action="exercicio(2).php" method="post">
    <label> Digite a sua nota (A, B, C, D, E) </label>
    <input type="text" name="nota">
    <br>
    <button type="submit">Enviar</button>
</form>

<?php 
   $nota = $_POST["nota"] ?? "";
    $nota = strtoupper(str_replace (' ', '', $nota));


   switch ($nota) {
        case "A": echo "Excelente"; break;
        case "B": echo "Ótimo"; break;
        case "C": echo "Bom"; break;
        case "D": echo "Regular"; break;
        case "E": echo "Insuficiente"; break;
        case "": echo ""; break;
        default: echo "Nota inválida"; break;
   }