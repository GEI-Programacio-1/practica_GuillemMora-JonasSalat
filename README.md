# Projecte de Filtrar Covid + Mitjana Covid

Participants:

[Guillem Mora Bea, Jonàs Salat Torres]()

## Explicació

### filtrar-covid.cpp

```bash
Consta d`un bucle de lectura que s`atura al arribar al caràcter distintiu '#';

Per llegir el document hem dividit els camps per comes i en arribar a la 9ª coma es considera un final de línia;

En el camp nº 4 s`atura a comprovar si les 3 primeres lletres coincideixen amb 'Lle';

En el cas que coincideix, hi ha una variable booleana que ens confirma que hem de copiar la resta de la línia;

Per marcar el final de codi, hi afegim el mateixa caràcter distintiu '#';
```

### mitjana-covid.cpp

```bash
Consta d`un bucle de lectura que s`atura al arribar al caràcter distintiu '#';

Per llegir el document hem dividit els camps per comes i en arribar a la 3ª coma es considera un final de línia;

Abans de saltar de línia, al arribar a la 3ª coma es suma el darrer nombre a un acumulador que es reinicia cada 5 repeticions i s`imprimeix aquest terme dividit entre 5;

En cas de tenir un nombre de línies no multiples de 5 es divideix el nombre acumulat entre el nombre de repeticions de sumes que formen l`acumulat;
```
### comandes

Les comandes que hem dut a terme són les següents:
```console
$ g++ filtrar-covid.cpp -o filtrar-covid
$ g++ mitjana-covid.cpp -o mitjana-covid
$ cat registrecovid.csv | ./filtrar-covid
$ cat registrecovid.csv | ./filtrar-covid | ./mitjana-covid
```
