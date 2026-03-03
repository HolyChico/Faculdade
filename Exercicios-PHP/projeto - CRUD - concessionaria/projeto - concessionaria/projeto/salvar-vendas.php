<?php

    // id_venda	data_venda	valor_venda	cliente_id_cliente	funcionario_id_funcionario	modelo_id_modelo

    switch($_REQUEST["acao"]) {
        case 'cadastrar':
            $data = $_POST['data_venda'];
            $valor = $_POST['valor_venda'];
            $cliente = $_POST['cliente_id_cliente'];
            $funcionario = $_POST['funcionario_id_funcionario'];
            $modelo = $_POST['modelo_id_modelo'];

            $sql = "INSERT INTO venda (data_venda, valor_venda, cliente_id_cliente, funcionario_id_funcionario, modelo_id_modelo)
                    VALUES('{$data}', '{$valor}', '{$cliente}', '{$funcionario}', '{$modelo}') ";
                
            $res = $conn->query($sql);

            if($res == true){
                print "<script> alert('cadastrado com sucesso') </script>";
                print "<script> location.href='?page=listar-vendas'; </script>";
            }else{
                print "<script> alert('NÃO cadastrado') </script>";
                print "<script> location.href='?page=listar-vendas'; </script>";
            }
            break;  

        case 'editar':
            $data = $_POST['data_venda'];
            $valor = $_POST['valor_venda'];
            $cliente = $_POST['cliente_id_cliente'];
            $funcionario = $_POST['funcionario_id_funcionario'];
            $modelo = $_POST['modelo_id_modelo'];

            // ERRO AQUI: Falta o sinal de '=' antes de '{$cliente}'
            $sql = "UPDATE venda SET data_venda='{$data}', valor_venda='{$valor}', cliente_id_cliente='{$cliente}', funcionario_id_funcionario='{$funcionario}', modelo_id_modelo='{$modelo}' WHERE id_venda=".$_REQUEST['id_venda'];
            
            $res = $conn->query($sql);

            if($res==true){
                print "<script>alert('Editou com sucesso!');</script>";
                print "<script>location.href='?page=listar-vendas';</script>";
            }else{
                print "<script>alert('não editado');</script>";
                print "<script>location.href='?page=listar-vendas';</script>";
            }
            break;

        case 'excluir':
            $sql = "DELETE FROM venda WHERE id_venda=".$_REQUEST['id_venda'];

            $res = $conn ->query($sql);

            if($res == true){
                print "<script>alert('Excluiu com sucesso!');</script>";
                print "<script>location.href='?page=listar-vendas';</script>";
            }else{
                print "<script>alert('Não excluiu');</script>";
                print "<script>location.href='?page=listar-vendas';</script>";
            }
            break;
    }

?>