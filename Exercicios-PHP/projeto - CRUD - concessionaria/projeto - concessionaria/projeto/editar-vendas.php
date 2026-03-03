<h1> Editar Vendas </h1>

<?php
    // ATENÇÃO: Esta estrutura não protege contra acesso direto e pode emitir Warnings.
    // Confia que o ID da venda está sempre na URL.
    $sql = "SELECT * FROM venda WHERE id_venda = ".$_REQUEST ['id_venda'];

    $res = $conn -> query($sql);

    $row = $res -> fetch_object();
?> 

<form action="?page=salvar-vendas" method="POST">
    <input type="hidden" name="acao" value="editar">
    <input type="hidden" name="id_venda" value="<?php print $row -> id_venda ?>" >

    <div class="mb-3">
        <label> Data
            <input type="date" name="data_venda" class="form-control" value="<?php print $row -> data_venda; ?>">
        </label>
    </div>

    <div class="mb-3">
        <label>Valor 
            <input type="number" step="0.01" name="valor_venda" class="form-control" value="<?php print $row -> valor_venda; ?>"> 
        </label>
    </div>

    <div class="mb-3"> 
        <label> Cliente
            <select name="cliente_id_cliente" class="form-control" required>
                <option> Escolha </option>
                <?php
                    $sql_1 = "SELECT * FROM cliente";
                    $res_1 = $conn -> query($sql_1);
                    $qtd_1 = $res_1 -> num_rows;
                    if ($qtd_1 > 0){
                        while($row_1 = $res_1 -> fetch_object()){
                            // CORREÇÃO 2: Compara FK da Venda (cliente_id_cliente) com PK da tabela Cliente (id_cliente).
                            if ($row -> cliente_id_cliente == $row_1 -> id_cliente){ 
                                // Imprime o nome do cliente, não o ID, na opção
                                print "<option value='{$row_1 -> id_cliente}' selected> {$row_1 -> nome_cliente} </option>";
                            } else {
                                print "<option value='{$row_1 -> id_cliente}'> {$row_1 -> nome_cliente} </option>";
                            }
                        }
                    } else {
                        print "<option> Não há clientes registradas </option>";
                    }
                ?>
            </select>
        </label>
    </div>

    <div class="mb-3"> 
        <label> Funcionário
            <select name="funcionario_id_funcionario" class="form-control" required>
                <option> Escolha </option>
                <?php
                    $sql_1 = "SELECT * FROM funcionario";
                    $res_1 = $conn -> query($sql_1);
                    $qtd_1 = $res_1 -> num_rows;
                    if ($qtd_1 > 0){
                        while($row_1 = $res_1 -> fetch_object()){
                            // CORREÇÃO 2: Compara FK da Venda com PK da tabela Funcionário (id_funcionario).
                            if ($row -> funcionario_id_funcionario == $row_1 -> id_funcionario){ 
                                // Imprime o nome do funcionário, não o ID, na opção
                                print "<option value='{$row_1 -> id_funcionario}' selected> {$row_1 -> nome_funcionario} </option>";
                            } else {
                                print "<option value='{$row_1 -> id_funcionario}'> {$row_1 -> nome_funcionario} </option>";
                            }
                        }
                    } else {
                        print "<option> Não há funcionário registradas </option>";
                    }
                ?>
            </select>
        </label>
    </div>

    <div class="mb-3"> 
        <label> Veiculo
            <select name="modelo_id_modelo" class="form-control" required>
                <option> Escolha </option>
                <?php
                    $sql_1 = "SELECT * FROM modelo";
                    $res_1 = $conn -> query($sql_1);
                    $qtd_1 = $res_1 -> num_rows;
                    if ($qtd_1 > 0){
                        while($row_1 = $res_1 -> fetch_object()){
                            // CORREÇÃO 2: Compara FK da Venda com PK da tabela Modelo (id_modelo).
                            if ($row -> modelo_id_modelo == $row_1 -> id_modelo){ 
                                // Imprime o nome do modelo, não o ID, na opção
                                print "<option value='{$row_1 -> id_modelo}' selected> {$row_1 -> nome_modelo} </option>";
                            } else {
                                print "<option value='{$row_1 -> id_modelo}'> {$row_1 -> nome_modelo} </option>";
                            }
                        }
                    } else {
                        print "<option> Não há modelos registradas </option>";
                    }
                ?>
            </select>
        </label>
    </div>

    <div>
        <button type="submit" class="btn btn-primary"> Enviar </button>
    </div> 

</form>