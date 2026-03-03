<h1> Cadastrar Clientes </h1>

<form action="?page=salvar-clientes" method="POST">
    <input type="hidden" name="acao" value="cadastrar">

    <div class="mb-3">
        <label> Nome do Cliente
            <input type="text" name="nome_cliente" class="form-control" required>
        </label>

    </div>

    <div class="mb-3">
        <label> E-mail
            <input type="text" name="email_cliente" class="form-control" required>
        </label>
    </div>

    <div class="mb-3">
        <label> Telefone
            <input type="number" name="telefone_cliente" class="form-control" required>
        </label>
    </div>

    <div class="mb-3">
        <label> CPF
            <input type="number" name="cpf_cliente" class="form-control" required>
        </label>
    </div>

    <div class="mb-3">
        <label> Data de Nascimento
            <input type="date" name="dt_nasc_cliente" class="form-control" required>
        </label>
    </div>

    <div class="mb-3">
        <label> Endereço
            <input type="text" name="endereco_cliente" class="form-control" required>
        </label>
    </div>

    <div class="mb-3">
        <button type="submit" class="btn btn-primary"> Enviar </button>
    </div>

</form>