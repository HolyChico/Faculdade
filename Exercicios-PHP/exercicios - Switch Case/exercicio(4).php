<h1> Exercício 4 - Operações matemáticas </h1>

<form action="exercicio(4).php" method="post">
    <label> Digite o primeiro número : </label>
    <input type="number" name="n1" >
    <br>

    <label> Digite o segundo número : </label>
    <input type="number" name="n2" >
    <br>

    <select name="op">
        <option value="">Selecione a operação</option>
        <option value="+">+</option>
        <option value="-">-</option>
        <option value="/">/</option>
        <option value="*">*</option>
        <option value="**">**</option>
        <option value="%">%</option>
    </select>
    <br>

    <button type="submit">Enviar</button>
</form>

<?php
    $n1 = 0;
    $n2 = 0;

    $n1 = $_POST["n1"] ?? 0;
    $n2 = $_POST["n2"] ?? 0;
    $op = $_POST["op"] ?? "";
    $op = str_replace(" ", "", $op);


   switch ($op) {
        case "-": echo ( $n1 - $n2 ); break;
        case "+": echo ($n1 + $n2); break;
        case "/": echo ($n1 / $n2); break;
        case "*": echo ($n1 * $n2); break;
        case "**": echo ($n1 ** $n2); break;
        case "%": echo ($n1 % $n2); break;

        case "": echo ""; break;
        default: echo "inválido"; break;
   }