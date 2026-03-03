<h1> Listar Modelos </h1>

<?php
    $sql = "SELECT * FROM modelo AS mo
            INNER JOIN marca AS ma
            ON mo.marca_id_marca = ma.id_marca";

    $res = $conn->query($sql);

    $qtd = $res->num_rows;

        print"<p> Encontrou <b>$qtd</b> resultados(s). </p>";
        print"<table class='table table-bordered table-striped table-hover'>";
        print"<tr>";
        print"<th>#</th>";
        print"<th>Marca</th>";
        print"<th>Modelo</th>";
        print"<th>Cor</th>";
        print"<th>Ano</th>";
        print"<th>Tipo</th>";
        print"<th>Ações</th>";
        print"</tr>";
    if($qtd>0){
        while($row = $res->fetch_object() ){
            print"<tr>";
            print"<td>".$row->id_modelo."</td>";
            print"<td>".$row->nome_marca."</td>";
            print"<td>".$row->nome_modelo."</td>";
            print"<td>".$row->cor_modelo."</td>";
            print"<td>".$row->ano_modelo."</td>";
            print"<td>".$row->tipo_modelo."</td>";
            print"<td>
                    <button class='btn btn-success' onclick=\" {location.href='?page=editar-modelos&id_modelo={$row->id_modelo}';} \"> Editar </button>

                    <button class='btn btn-danger' onclick=\"if(confirm('Tem certeza que deseja excluir?')) {location.href='?page=salvar-modelos&acao=excluir&id_modelo={$row->id_modelo}'; }\"> Excluir </button>

                  </td>";
            print"<tr>";
        }
    }
    print"</table>";



?>