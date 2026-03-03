<h1> Cadastrar Modelos </h1>
<form action="?page=salvar-modelos" method="POST">
    <input type="hidden" name="acao" value="cadastrar">

    <!-- id_modelo	nome_modelo	cor_modelo	ano_modelo	tipo_modelo	marca_id_marca -->

    <div class="mb-3">
        <label> Marca 
            <select name="marca_id_marca" class="form-control" required>
                <option> Escolha a marca </option>
                <?php
                $sql = "SELECT * FROM marca";
                $res = $conn -> query($sql);
                $qtd = $res -> num_rows;
                if($qtd > 0){
                    while($row = $res -> fetch_object()){
                        print"<option value='{$row->id_marca}'>{$row->nome_marca}</option> ";
                } }
                else {
                        print"<option> Não há marcas registradas </option>";
                }

                ?>
            </select>
        </label>

    </div>
  
    <div class="mb-3">
        <label> Nome do Modelo
            <input type="text" name="nome_modelo" class="form-control" required>
        </label>

    </div>

    <div class="mb-3">
        <label> Cor
            <input type="text" name="cor_modelo" class="form-control" required>
        </label>

    </div>

    <div class="mb-3">
        <label> Ano
            <input type="number" name="ano_modelo" class="form-control" required>
        </label>

    </div>

    <div class="mb-3">
        <label> Tipo
            <input type="text" name="tipo_modelo" class="form-control" required>
        </label>

    </div>

    <div class="mb-3">
        <button type="submit" class="btn btn-primary"> Enviar </button>
    </div>

</form>