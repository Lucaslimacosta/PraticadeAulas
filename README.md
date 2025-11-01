# PraticadeAulas

Repositório com exercícios e exemplos em C usados nas práticas de aula.

Conteúdo
- Arquivos fonte: arquivos `.c` com pequenos exercícios (entrada/saída, operadores, variáveis, etc.).
- `.gitignore`: regras para evitar que binários e configurações locais sejam commitadas.

Como compilar (exemplo com gcc)

Para compilar cada arquivo individualmente (gera um executável com mesmo nome do .c):

```bash
# compilar um único arquivo
gcc -std=c17 -Wall -Wextra -O0 ExPratica1.c -o ExPratica1
# compilar todos os exemplos (exemplo)
gcc -std=c17 -Wall -Wextra -O0 CriacaoCartasTrunfo.c -o CriacaoCartasTrunfo
gcc -std=c17 -Wall -Wextra -O0 EntradaSaidaDados.c -o EntradaSaidaDados
gcc -std=c17 -Wall -Wextra -O0 ExPratica2.c -o ExPratica2
gcc -std=c17 -Wall -Wextra -O0 OperadoresAritimeticos.c -o OperadoresAritimeticos
gcc -std=c17 -Wall -Wextra -O0 OperadoresdeAtribuicao.c -o OperadoresdeAtribuicao
gcc -std=c17 -Wall -Wextra -O0 OperadoresdeIncremento.c -o OperadoresdeIncremento
```

Como rodar

```bash
# depois de compilar, execute o binário
./ExPratica1
```

Observações
- Os códigos são roteiros de estudo e não têm integração entre si — são independentes.
- Não comite executáveis no repositório. Já adicionei um `.gitignore` que evita isso.
- Sugestão: sempre testar compilação local antes de commitar mudanças.

Se quiser, posso adicionar um `Makefile` simples para facilitar a compilação ou validar os arquivos compilando-os automaticamente aqui.

---
Lucas