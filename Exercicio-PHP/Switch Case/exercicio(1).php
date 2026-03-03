<h1> Exercício 1 - Dia da Semana </h1>

<form action="exercicio(1).php" method="post">
    <label> Digite o dia da semana (1 a 7) </label>
    <input type="number" name="dia" min="1" max="7">
    <br>
    <button type="submit">Enviar</button>
</form>

<?php   
    switch($_POST['dia'] ?? ''){
        case 1: echo "Domingo"; break;
        case 2: echo "Segunda-feira"; break;
        case 3: echo "Terça-feira"; break;
        case 4: echo "Quarta-feira"; break;
        case 5: echo "Quinta-feira"; break;
        case 6: echo "Sexta-feira"; break;
        case 7: echo "Sábado"; break;
        case '': break;
        default: echo "Dia inválido";
    }
?>