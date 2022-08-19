# A Sequência de Fibonacci

Sequência de Fibonacci é a sequência numérica proposta pelo matemático Leonardo Pisa, mais conhecido como Fibonacci: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ... Foi a partir de um problema criado por ele que o mesmo detectou a existência de uma regularidade matemática.

_(informações do [Todamateria](https://www.todamateria.com.br/sequencia-de-fibonacci/#:~:text=Sequ%C3%AAncia%20de%20Fibonacci%20%C3%A9%20a,exist%C3%AAncia%20de%20uma%20regularidade%20matem%C3%A1tica.))_

## Analisando o código a fundo

A sequência de Fibonacci é gerada dentro de um looping for(). Sendo assim, a partir dele conseguimos gerar a tão famosa sequência numérica (p. e. 1, 2, 3, 5, 8, ...).

```c++
void getVal(int res) {
    for( int i = 0;i < 10; i++ ){
        res += i;
        cout << "* " << res << endl;
    }
}
```

## Compilando o código

Compilando o código no terminal com o comando:

```text
    $~ g++ fib.cpp -o fib -Wall -Werror
    $~ ./fib
```

A seguinte sequência é apresentada:

![Imgur](https://i.imgur.com/kAgHqnU.png)
