<h1>Exercício - Menu de opções</h1>

<form action="exercicio(5).php" method="post">
    <label> 1- Cadastrar usuário : </label>
    <br>
    <label> 2 - Listar usuários : </label>
    <br>
    <label> 3- Sair </label>
    <br>
    <label>Escolha uma opção: </label>
    <input type="number" name="n1" min="0" max="3">
    <button type="submit">Enviar</button>
</form>

<?php 
    $n1 = $_POST["n1"] ?? 0;

   switch ($n1) {
        case "1": echo ( "Cadastre" ); break;
        case "2": echo ( "Usuarios Cadastrados:  " ); break;
        case "3": echo ( "Encerrando ... " ); break;

        case "": echo ""; break;
        default: echo "inválido"; break;
   }