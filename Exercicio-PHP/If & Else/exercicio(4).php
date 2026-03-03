<h1> Exercício 4 - Nome começa com A </h1>

<form action="exercicio(4).php" method="POST">
    <label> Texto </label>
    <input type="text" name="txt"> 
    <br>
    
    <button type="submit" > Enviar </button>

</form>

<?php // Exercício 4
    
    $txt = $_REQUEST['txt'] ?? '';

    if (substr($txt, 0, 1) == 'A') {
        print "Começa com A";
    }
    else{
        print "Não começa com A"; }

?>        