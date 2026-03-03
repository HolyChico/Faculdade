<?php
    switch($_REQUEST["acao"]) {
        case 'cadastrar':
            $nome = $_POST['nome_marca'];

            $sql = "INSERT INTO marca (nome_marca) VALUES('{$nome}') ";
                
            $res = $conn->query($sql);

            if($res == true){
                print "<script> alert('Cadastrado com sucesso') </script>";
                print "<script> location.href='?page=listar-marcas'; </script>";
            }else{
                print "<script> alert('Não cadastrado') </script>";
                print "<script> location.href='?page=listar-marcas'; </script>";
            }
            break;

        case 'editar':
            $nome = $_POST['nome_marca'];

            $sql = "UPDATE marca SET nome_marca = '{$nome}' WHERE id_marca = " . $_REQUEST['id_marca'];

            $res = $conn->query($sql);

            if($res == true){
                print "<script> alert('Editado com sucesso!'); </script>";
                print "<script> location.href='?page=listar-marcas'; </script>";
            } else {
                print "<script> alert('Não foi editado'); </script>";
                print "<script> location.href='?page=listar-marcas'; </script>";
            }
            break;

        case 'excluir':
            
            $sql = "DELETE FROM marca WHERE id_marca=". $_REQUEST['id_marca'];

            $res = $conn->query($sql);

            if ($res == true){
                print "<script> alert('Excluído com sucesso!'); </script>";
                print "<script> location.href='?page=listar-marcas'; </script>";
            } else{
                print "<script> alert('Não foi excluído'); </script>";
                print "<script> location.href='?page=listar-marcas'; </script>";
            }
            break;
    }



?>