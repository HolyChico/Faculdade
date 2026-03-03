<h1> Cadastrar Marcas </h1>
<form action="?page=salvar-marcas" method="POST">
    <input type="hidden" name="acao" value="cadastrar">

    <!-- id_marca	nome_marca -->

    <div class="mb-3">
        <label> Nome da Marca
            <input type="text" name="nome_marca" class="form-control" required>
        </label>

    </div>

    <div class="mb-3">
        <button type="submit" class="btn btn-primary"> Enviar </button>
    </div>

</form>