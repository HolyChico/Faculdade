<h1> Exercício 3 - Maiúsculas e minúsculas </h1>

<form action="exercicio(3).php" method="POST">
    <label> Texto </label>
    <input type="text" name="txt"> 
    <br>
    
    <button type="submit" > Enviar </button>

</form>

<?php // Exercício 3
    
    $txt = $_REQUEST['txt'] ?? '';

    if ($txt == strtoupper($txt)) {
        print "O texto está em maiúsculo";
    }
    elseif ($txt == strtolower($txt)) {
        print "O texto está em minúsculo"; }    
    else {
        print "O texto está em maiúsculo e minúsculo";
    }

?>