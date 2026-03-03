<h1> Exercício 6 - Login simples </h1>

<form action="exercicio(6).php" method="POST">
    <h1> Login </h1>
    <br>

    <label> Nome de Usuário </label>
    <input type="text" name="user"> 
    <br>

    <label> Senha </label>
    <input type="password" name="pass">
    <br>

    <button type="submit" > Enviar </button>

</form>

<?php // Exercício 6
    
    $user = $_POST['user'] ?? '';
    $pass = $_POST['pass'] ?? '';

    if (($user == "admin") && ($pass == '1234')) {
        print ( "Acesso liberado. ");
    } else {
        print (" Usuário ou senha incorretos. ");
    }
?>

