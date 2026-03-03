<h1> Listar Vendas </h1>

<?php
    $sql = "SELECT 
                ve.*, 
                cli.nome_cliente, 
                func.nome_funcionario, 
                mo.nome_modelo, 
                ma.nome_marca
            FROM 
                venda AS ve
            INNER JOIN 
                cliente AS cli 
                ON ve.cliente_id_cliente = cli.id_cliente
            INNER JOIN 
                funcionario AS func 
                ON ve.funcionario_id_funcionario = func.id_funcionario
            INNER JOIN 
                modelo AS mo 
                ON ve.modelo_id_modelo = mo.id_modelo
            INNER JOIN 
                marca AS ma
                ON mo.marca_id_marca = ma.id_marca";

    $res = $conn->query($sql);

    $qtd = $res->num_rows;

    print"<p> Encontrou <b>$qtd</b> resultados(s). </p>";

    if($res == true){
        print"<table class='table table-bordered table-striped table-hover'>";
        print"<tr>";
        print"<th>#</th>";
        print"<th>Data</th>";
        print"<th>Valor</th>";
        print"<th>Cliente</th>";
        print"<th>Funcionario</th>";
        print"<th>Modelo</th>";
        print"<th>Ações</th>";
        print"</tr>";

         while($row = $res->fetch_object() ){
            print"<tr>";
            print"<td>".$row->id_venda."</td>";
            print"<td>".$row->data_venda."</td>";
            print"<td>".$row->valor_venda."</td>";
    
            print"<td>".$row->nome_cliente."</td>";
            print"<td>".$row->nome_funcionario."</td>";
            print"<td>".$row->nome_modelo."</td>";
            print"<td>
                    <button class='btn btn-success' onclick=\" {location.href='?page=editar-vendas&id_venda={$row->id_venda}';} \"> Editar </button>

                    <button class='btn btn-danger' onclick=\"if(confirm('Tem certeza que deseja excluir?')) {location.href='?page=salvar-vendas&acao=excluir&id_venda={$row->id_venda}'; }\"> Excluir </button>

                  </td>";
            
            print"<tr>";
        }

        print"</table>";
    }

?>