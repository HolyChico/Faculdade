<h1> Cadastrar Funcionário </h1>
<form action="?page=salvar-funcionario" method="POST">
    <input type="hidden" name="acao" value="cadastrar">

    <div class="mb-3">
        <label> Nome do Funcionário
            <input type="text" name="nome_funcionario" class="form-control" required>
        </label>
    </div>

    <div class="mb-3">
        <label> E-mail
            <input type="email" name="email_funcionario" class="form-control" required>
        </label>
    </div>

    <div class="mb-3">
        <label> Telefone
            <input type="number" name="telefone_funcionario" class="form-control" required>
        </label>
    </div>

    <div class="mb-3">
        <button type="submit" class="btn btn-primary"> Enviar </button>
    </div>

</form>