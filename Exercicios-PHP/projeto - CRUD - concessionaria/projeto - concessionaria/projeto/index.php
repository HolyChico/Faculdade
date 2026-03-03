<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title> Concessionaria </title>
    <link rel="stylesheet" type="text/css" href="css/bootstrap.min.css"> <!-- Bootstrap CSS -->

</head>

<body>
    <script src="js/bootstrap.bundle.min.js"></script> <!-- Bootstrap JS Bundle -->

            <nav class="navbar navbar-expand-lg bg-body" data-bs-theme="dark">
            <div class="container-fluid">
                <a class="navbar-brand" href="#">Concessionaria</a>
                <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
                <span class="navbar-toggler-icon"></span>
                </button>
                <div class="collapse navbar-collapse" id="navbarSupportedContent">
                <ul class="navbar-nav me-auto mb-2 mb-lg-0">

                    <li class="nav-item">
                    <a class="nav-link active" aria-current="page" href="#">Home</a>
                    </li>

                    <li class="nav-item dropdown">
                    <a class="nav-link dropdown-toggle" href="#" role="button" data-bs-toggle="dropdown" aria-expanded="false">
                        Funcionários
                    </a>
                    <ul class="dropdown-menu">
                        <li><a class="dropdown-item" href="?page=cadastrar-funcionario">Cadastrar</a></li>
                        <li><a class="dropdown-item" href="?page=listar-funcionario">Listar</a></li>                        
                    </ul>
                    </li>

                    <li class="nav-item dropdown">
                    <a class="nav-link dropdown-toggle" href="#" role="button" data-bs-toggle="dropdown" aria-expanded="false">
                        Clientes
                    </a>
                    <ul class="dropdown-menu">
                        <li><a class="dropdown-item" href="?page=cadastrar-clientes">Cadastrar</a></li>
                        <li><a class="dropdown-item" href="?page=listar-clientes">Listar</a></li>                        
                    </ul>
                    </li>

                    <li class="nav-item dropdown">
                    <a class="nav-link dropdown-toggle" href="#" role="button" data-bs-toggle="dropdown" aria-expanded="false">
                        Modelos
                    </a>
                    <ul class="dropdown-menu">
                        <li><a class="dropdown-item" href="?page=cadastrar-modelos">Cadastrar</a></li>
                        <li><a class="dropdown-item" href="?page=listar-modelos">Listar</a></li>                        
                    </ul>
                    </li>

                    <li class="nav-item dropdown">
                    <a class="nav-link dropdown-toggle" href="#" role="button" data-bs-toggle="dropdown" aria-expanded="false">
                        Marcas
                    </a>
                    <ul class="dropdown-menu">
                        <li><a class="dropdown-item" href="?page=cadastrar-marcas">Cadastrar</a></li>
                        <li><a class="dropdown-item" href="?page=listar-marcas">Listar</a></li>                        
                    </ul>
                    </li>

                    <li class="nav-item dropdown">
                    <a class="nav-link dropdown-toggle" href="#" role="button" data-bs-toggle="dropdown" aria-expanded="false">
                        Vendas
                    </a>
                    <ul class="dropdown-menu">
                        <li><a class="dropdown-item" href="?page=cadastrar-vendas">Cadastrar</a></li>
                        <li><a class="dropdown-item" href="?page=listar-vendas">Listar</a></li>                        
                    </ul>
                    </li>
                
                </ul>
                
                </div>
            </div>
            </nav>

    <div class="container">
        <div class="row">
            <div class="col">

                <?php
                    include("config.php");

                    switch(@$_REQUEST["page"]){
                        //Funcionário
                        case 'cadastrar-funcionario':
                            include('cadastrar-funcionario.php');
                            break;

                        case'listar-funcionario':
                            include('listar-funcionario.php');
                            break;

                        case 'editar-funcionario':
                            include('editar-funcionario.php');
                            break;
                        
                        case 'salvar-funcionario':
                            include('salvar-funcionario.php');
                            break;
                        
                        //Clientes
                        case 'cadastrar-clientes':
                            include('cadastrar-clientes.php');
                            break;

                        case'listar-clientes':
                            include('listar-clientes.php');
                            break;

                        case 'editar-clientes':
                            include('editar-clientes.php');
                            break;
                        
                        case 'salvar-clientes':
                            include('salvar-clientes.php');
                            break;

                        //Marcas
                        case 'cadastrar-marcas':
                            include('cadastrar-marcas.php');
                            break;

                        case'listar-marcas':
                            include('listar-marcas.php');
                            break;

                        case 'editar-marcas':
                            include('editar-marcas.php');
                            break;
                        
                        case 'salvar-marcas':
                            include('salvar-marcas.php');
                            break;

                        //Modelos
                        case 'cadastrar-modelos':
                            include('cadastrar-modelos.php');
                            break;

                        case'listar-modelos':
                            include('listar-modelos.php');
                            break;

                        case 'editar-modelos':
                            include('editar-modelos.php');
                            break;
                        
                        case 'salvar-modelos':
                            include('salvar-modelos.php');
                            break;

                        //Vendas
                        case 'cadastrar-vendas':
                            include('cadastrar-vendas.php');
                            break;

                        case'listar-vendas':
                            include('listar-vendas.php');
                            break;

                        case 'editar-vendas':
                            include('editar-vendas.php');
                            break;
                        
                        case 'salvar-vendas':
                            include('salvar-vendas.php');
                            break;

                        default:
                            print "<h1> Bem vindo! </h1>";
                            print "<p> Sistema de cadastro de uma concessionária de veículos </p>";
                    }
                    ?>


            </div>
        </div>


    
</body>
</html>
