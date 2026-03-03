<?php
    switch($_REQUEST["acao"]) {
        case 'cadastrar':
            $nome = $_POST['nome_cliente'];
            $nasc = $_POST['dt_nasc_cliente'];
            $cpf = $_POST['cpf_cliente'];
            $email = $_POST['email_cliente'];
            $telefone = $_POST['telefone_cliente'];
            $endereco = $_POST['endereco_cliente'];
        
        // id_cliente	nome_cliente    cpf_cliente	    email_cliente	telefone_cliente	endereco_cliente	dt_nasc_cliente	

        $sql = "INSERT INTO cliente (nome_cliente, email_cliente, telefone_cliente, cpf_cliente, endereco_cliente, dt_nasc_cliente)
                VALUES('{$nome}', '{$email}', '{$telefone}', '{$cpf}', '{$endereco}', '{$nasc}') ";
            
        $res = $conn->query($sql);

        if($res == true){
            print "<script> alert('cadastrado com sucesso') </script>";
            print "<script> location.href='?page=listar-clientes'; </script>";
        }else{
            print "<script> alert('NÃO cadastrado') </script>";
            print "<script> location.href='?page=listar-clientes'; </script>";
        }
        break;

        case 'editar':
            $nome = $_POST['nome_cliente'];
            $nasc = $_POST['dt_nasc_cliente'];
            $cpf = $_POST['cpf_cliente'];
            $email = $_POST['email_cliente'];
            $telefone = $_POST['telefone_cliente'];
            $endereco = $_POST['endereco_cliente'];

            $sql = "UPDATE cliente SET nome_cliente = '{$nome}', email_cliente = '{$email}', telefone_cliente = '{$telefone}', dt_nasc_cliente = '{$nasc}', cpf_cliente = '{$cpf}', endereco_cliente = '{$endereco}' WHERE id_cliente = " . $_REQUEST['id_cliente'];

            $res = $conn->query($sql);

            if($res == true){
                print "<script> alert('Editado com sucesso!'); </script>";
                print "<script> location.href='?page=listar-clientes'; </script>";
            } else {
                print "<script> alert('Não foi editado'); </script>";
                print "<script> location.href='?page=listar-clientes'; </script>";
            }
            break;

        case 'excluir':
            
            $sql = "DELETE FROM cliente WHERE id_cliente=". $_REQUEST['id_cliente'];

            $res = $conn->query($sql);

            if ($res == true){
                print"<script> alert('Excluído com sucesso!'); </script>";
                print "<script> location.href= '?page=listar-clientes'; </script>";
            } else{
                print "<script> alert('Não foi excluído'); </script>";
                print "<script> location.href='?page=listar-clientes'; </script>";
            }
            break;
    }



?>